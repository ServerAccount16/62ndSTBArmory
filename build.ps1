$ErrorActionPreference = "Stop"

$RepoRoot = Split-Path -Parent $MyInvocation.MyCommand.Path
$IncludeDir = Join-Path $RepoRoot "pbo_include"
$BuildAddonsDir = Join-Path $RepoRoot ".hemttout\build\addons"
$BuildKeysDir = Join-Path $RepoRoot ".hemttout\build\keys"

Set-Location $RepoRoot

Write-Host "Building with HEMTT..."
hemtt build

if (-not (Test-Path -LiteralPath $IncludeDir)) {
    Write-Host "No pbo_include folder found. Skipping included PBO copy."
    exit 0
}

if (-not (Test-Path -LiteralPath $BuildAddonsDir)) {
    throw "HEMTT output addons folder was not found: $BuildAddonsDir"
}

$addonFiles = Get-ChildItem -LiteralPath $IncludeDir -File |
    Where-Object { $_.Extension -in ".pbo", ".bisign" }

if ($addonFiles.Count -gt 0) {
    Write-Host "Copying $($addonFiles.Count) included PBO/bisign files..."
    Copy-Item -LiteralPath $addonFiles.FullName -Destination $BuildAddonsDir -Force
} else {
    Write-Host "No PBO or bisign files found in pbo_include."
}

$keyFiles = Get-ChildItem -LiteralPath $IncludeDir -File -Filter "*.bikey"
if ($keyFiles.Count -gt 0) {
    if (-not (Test-Path -LiteralPath $BuildKeysDir)) {
        New-Item -ItemType Directory -Path $BuildKeysDir | Out-Null
    }

    Write-Host "Copying $($keyFiles.Count) bikey files..."
    Copy-Item -LiteralPath $keyFiles.FullName -Destination $BuildKeysDir -Force
}

Write-Host "Build complete."
