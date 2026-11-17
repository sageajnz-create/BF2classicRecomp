@echo off
setlocal
set "SWBF2_EXE=%~dp0bf2_recomp\build\Release\swbf2_recomp.exe"
if not exist "%SWBF2_EXE%" (
    echo Build swbf2_recomp in Release mode first.
    pause
    exit /b 1
)
pushd "%~dp0bf2_recomp\game_files" || exit /b 1
echo Starting Star Wars Battlefront II (Native PC Recompilation)...
"%SWBF2_EXE%" %*
set "SWBF2_STATUS=%ERRORLEVEL%"
popd
if not "%SWBF2_STATUS%"=="0" (
    echo Star Wars Battlefront II exited with code %SWBF2_STATUS%.
    pause
)
exit /b %SWBF2_STATUS%
