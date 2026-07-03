# PBO Structure

This repo keeps one buildable PBO per direct child folder in `addons/`.
The AFL components are intentionally left as their own existing component
family for now.

## Core

- `62stb_main`: shared 62nd STB metadata, faction/editor categories, editor
  subcategories, and UI color presets.

## Content

- `62stb_armor`: 62nd armor/headgear classes and texture assets.
- `62stb_aircraft`: 62nd aircraft classes, aircraft textures, weapons,
  magazines, ammo config includes, and HMD/HUD includes.
- `62stb_supplies`: supply pod classes and Pelican supply drop module entries.
- `62stb_markers`: custom map marker classes and marker assets.
- `62stb_music`: custom music classes and OGG assets.

## Compatibility

- `62stb_compat_ace_arsenal`: ACE Arsenal main-menu mission redirect.
- `62stb_compat_tcp_arsenal`: TCP menu hook that reuses the arsenal redirect.
- `62stb_compat_tcp_weapons`: TCP weapon/magazine-well compatibility only.

## Balance

- `62stb_balance_ammo`: ammunition balance patches.
- `62stb_balance_vehicles`: broad vehicle armor and vehicle handling balance patches.
- `62stb_balance_weapons`: weapon-side balance patches, including M247H carry
  weight balance.
- `62stb_balance_statics`: static turret durability/placeable turret patches.
- `62stb_balance_player`: player stamina/fatigue balance patches.

## Unchanged AFL Components

- `afl_main`
- `afl_misc`
- `afl_medicalsim`
- `afl_missions`
- `afl_statusmonitor`

## Refactor Notes

Former addon folders were renamed into the `62stb_*` layout. The empty
`a_vehicle_balance` PBO was removed. The former `m247h_weight_balance` PBO was
recreated as `62stb_balance_weapons`.

PBO-level `CfgPatches` classnames were renamed:

- `STB_62nd_armor_textures` -> `STB_armor`
- `62nd_aircraft` -> `STB_aircraft`
- `62nd_supply_pods` -> `STB_supplies`
- `map_markers` -> `STB_markers`
- `SFTMusic` -> `STB_music`
- `STB_ace_arsenal_map_patch` -> `STB_compat_ace_arsenal`
- `STB_tcp_arsenal_map_patch` -> `STB_compat_tcp_arsenal`
- `STB_tcp_weapons_compat` -> `STB_compat_tcp_weapons`
- `ammo_balance` -> `STB_balance_ammo`
- `g_vehicle_balance` -> `STB_balance_vehicles`
- `m247h_weight_balance` -> `STB_balance_weapons`
- `62nd_Weapons_Turrets` -> `STB_balance_statics`
- `STB_Misc` -> `STB_balance_player`

Placeable gameplay classnames, weapon classnames, marker classnames, and music
entry classnames were left unchanged unless they were only PBO metadata.
