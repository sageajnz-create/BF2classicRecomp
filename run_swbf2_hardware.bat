@echo off
setlocal
set "RECOMP_D3D11_WORLD=snapshot"
set "RECOMP_D3D11_RESOLVE=snapshot"
set "RECOMP_DISPATCH_GATE=1"
set "RECOMP_GPU_VSH=1"
set "RECOMP_DEFER_SEGMENT_QUERY_FLUSH=1"
set "RECOMP_DEFER_SEMAPHORE_QUERY_FLUSH=1"
set "RECOMP_VISIBILITY_SPAN=1"
echo Starting the accelerated renderer.
call "%~dp0run_swbf2.bat" %*
exit /b %ERRORLEVEL%
