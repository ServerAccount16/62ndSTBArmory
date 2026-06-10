@echo off
setlocal

set "SCRIPT_DIR=%~dp0"
set "LOG_DIR=%SCRIPT_DIR%logs"
if not exist "%LOG_DIR%" mkdir "%LOG_DIR%"

for /f %%I in ('powershell.exe -NoProfile -NoLogo -Command "Get-Date -Format yyyyMMdd_HHmmss"') do set "TIMESTAMP=%%I"
set "LOG_FILE=%LOG_DIR%\build_%TIMESTAMP%.log"

echo Running build.ps1... (logging to %LOG_FILE%)
powershell.exe -NoProfile -ExecutionPolicy Bypass -NoLogo -File "%SCRIPT_DIR%build.ps1" *>> "%LOG_FILE%" 2>&1
set "BUILD_EXIT=%ERRORLEVEL%"

echo.
echo Exit code: %BUILD_EXIT%
echo Log: %LOG_FILE%
pause
exit /b %BUILD_EXIT%
