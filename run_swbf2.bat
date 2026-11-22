@echo off
setlocal
set "SWBF2_EXE=%~dp0bf2_recomp\build\Release\swbf2_recomp.exe"
set "SWBF2_GAME_DIR=%~dp0bf2_recomp\game_files"
if not exist "%SWBF2_EXE%" (
    echo Build swbf2_recomp in Release mode first.
    pause
    exit /b 1
)
if not exist "%SWBF2_GAME_DIR%\default.xbe" (
    echo Extract the Xbox disc files into bf2_recomp\game_files first.
    pause
    exit /b 1
)
pushd "%SWBF2_GAME_DIR%" || exit /b 1
echo Starting Star Wars Battlefront II (Native PC Recompilation)...
"%SWBF2_EXE%" %*
set "SWBF2_STATUS=%ERRORLEVEL%"
popd
if not "%SWBF2_STATUS%"=="0" (
    echo Star Wars Battlefront II exited with code %SWBF2_STATUS%.
    pause
)
exit /b %SWBF2_STATUS%
