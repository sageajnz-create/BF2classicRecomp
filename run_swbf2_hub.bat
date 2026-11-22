@echo off
setlocal
set "SWBF2_HUB=%~dp0out\swbf2-hub\swbf2_launcher.exe"
if not exist "%SWBF2_HUB%" (
    echo Build the optional desktop hub first. See launcher\README.md.
    pause
    exit /b 1
)
start "" /D "%~dp0." "%SWBF2_HUB%" %*
