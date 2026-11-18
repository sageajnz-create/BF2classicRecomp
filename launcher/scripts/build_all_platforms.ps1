# ==============================================================================
# Star Wars: Battlefront II Desktop Hub - Multi-Platform Build & Package Script
# ==============================================================================

param(
    [switch]$SkipFrontendBuild = $false,
    [switch]$Debug = $false
)

$ErrorActionPreference = "Stop"
$ScriptDir = Split-Path -Parent $MyInvocation.MyCommand.Definition
$LauncherDir = Resolve-Path "$ScriptDir\.."
$ProjectRoot = Resolve-Path "$LauncherDir\.."

Write-Host "=== Building Star Wars Battlefront II Desktop Hub Launcher ===" -ForegroundColor Cyan
Write-Host "Launcher Root: $LauncherDir"
Write-Host "Project Root : $ProjectRoot"

# Step 1: Build Frontend Assets
Set-Location $LauncherDir
if (-not $SkipFrontendBuild) {
    Write-Host "`n[1/3] Compiling TypeScript & Vite Production Bundle..." -ForegroundColor Yellow
    npm run build
    if ($LASTEXITCODE -ne 0) {
        Write-Error "Frontend compilation failed."
        exit $LASTEXITCODE
    }
}

# Step 2: Build Native Rust Desktop Application with Tauri
Write-Host "`n[2/3] Compiling Native Tauri Application (Rust Release)..." -ForegroundColor Yellow
$BuildArgs = @("build")
if ($Debug) {
    $BuildArgs = @("build", "--debug")
}

npx @tauri-apps/cli @BuildArgs
if ($LASTEXITCODE -ne 0) {
    Write-Error "Tauri native build failed."
    exit $LASTEXITCODE
}

# Step 3: Deploy Executable to Game Directories
Write-Host "`n[3/3] Deploying Launcher Executable..." -ForegroundColor Yellow
$TargetExe = "$LauncherDir\src-tauri\target\release\swbf2_launcher.exe"
if ($Debug) {
    $TargetExe = "$LauncherDir\src-tauri\target\debug\swbf2_launcher.exe"
}

if (Test-Path $TargetExe) {
    Copy-Item -Path $TargetExe -Destination "$ProjectRoot\swbf2_launcher.exe" -Force
    Write-Host "  -> Deployed to: $ProjectRoot\swbf2_launcher.exe" -ForegroundColor Green

    if (Test-Path "$ProjectRoot\game_files") {
        Copy-Item -Path $TargetExe -Destination "$ProjectRoot\game_files\swbf2_launcher.exe" -Force
        Write-Host "  -> Deployed to: $ProjectRoot\game_files\swbf2_launcher.exe" -ForegroundColor Green
    }
}

Write-Host "`n=== Build & Packaging Complete! ===" -ForegroundColor Green
Write-Host "To launch the hub, run: .\swbf2_launcher.exe"
