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
if (-not $SkipFrontendBuild) {
    Write-Host "`n[1/3] Compiling TypeScript & Vite Production Bundle..." -ForegroundColor Yellow
    npm --prefix $LauncherDir run build
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

npm --prefix $LauncherDir run tauri -- @BuildArgs
if ($LASTEXITCODE -ne 0) {
    Write-Error "Tauri native build failed."
    exit $LASTEXITCODE
}

# Step 3: Stage the Windows hub executable
Write-Host "`n[3/3] Deploying Launcher Executable..." -ForegroundColor Yellow
$TargetExe = "$LauncherDir\src-tauri\target\release\swbf2_launcher.exe"
if ($Debug) {
    $TargetExe = "$LauncherDir\src-tauri\target\debug\swbf2_launcher.exe"
}

if (-not (Test-Path -LiteralPath $TargetExe -PathType Leaf)) {
    throw "Could not find the Windows launcher build at $TargetExe"
}
$StageDir = Join-Path $ProjectRoot 'out/swbf2-hub'
New-Item -ItemType Directory -Path $StageDir -Force | Out-Null
Copy-Item -LiteralPath $TargetExe -Destination $StageDir -Force
Write-Host "  -> Staged to: $StageDir"

Write-Host "`n=== Build & Packaging Complete! ===" -ForegroundColor Green
Write-Host "From the project root, run: .\run_swbf2_hub.bat"
