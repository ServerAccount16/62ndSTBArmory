#include "config_macros.hpp"
#include "config_weapons.hpp"
#include "config_magazines.hpp"
#include "config_ammo.hpp"
#include "HMD.hpp"

// A majority of the code in this file was created my Waylen, and is used with permission. Originally this code was found in the SFT mod.

class CfgPatches {
  class STB_aircraft {
    units[] = {
      "62nd_MH144_S_Falcon", "62nd_AH144_Falcon", "62nd_UH144_M_Falcon", "62nd_AV14_Hornet"
    };
    weapons[] = {
      "STB_Falcon_Anvil1_Launcher",
      "STB_Falcon_Nose_20mm"
    };
    magazines[] = {
      "STB_8Rnd_Anvil1_Vanilla_HE",
      "STB_16Rnd_Anvil1_Vanilla_HE",
      "STB_1000Rnd_20mm_HE_Pylon",
      "STB_1000Rnd_20mm_AP_Pylon"
    };
    ammo[] = {
      "STB_M_ANVIL_1_Vanilla_HE",
      "STB_B_20mm_AP"
    };
    requiredVersion = 0.1;
    requiredAddons[] = {
      "STB_main",
      "A3_Weapons_F",
      "OPTRE_Vehicles_Air",
      "OPTRE_Vehicles_Pylons",
      "OPTRE_Weapons_Ammo",
      "OPTRE_Weapons_Vehicle"
    };
  };
};

class CfgVehicles
{

  class OPTRE_UNSC_falcon_armed_S;
  class OPTRE_UNSC_MH_144S_Falcon : OPTRE_UNSC_falcon_armed_S
  {
    class Turrets;
    class LeftDoorGun;
    class RightDoorGun;
    class CargoTurret_01;
    class CargoTurret_02;
    class CargoTurret_03;
    class CargoTurret_04;
    class CargoTurret_05;
    class CargoTurret_06;
    class CargoTurret_07;
    class UserActions;
    class ViewPilot;
  };
  /// MH144 ///
  class 62nd_MH144_S_Falcon : OPTRE_UNSC_MH_144S_Falcon
  {
    author = "Weber";
    displayName = "[62nd] MH-144S 'Falcon' [Transport]";
    weapons[] = 
    {
      "CMFlareLauncher",
      "Laserdesignator_pilotCamera"
    };
    magazines[] =
    {
      "168Rnd_CMFlare_Chaff_Magazine",
      "168Rnd_CMFlare_Chaff_Magazine",
      "Laserbatteries"
    };
    hiddenSelectionsTextures[] =
    {
      FALCON_HIDDENSELECTIONSTEXTURES_STANDARD
    };
    class textureSources 
    {
      class standard
      {
        displayName = "Standard";
        author = "Waylen";
        textures [] =
        {
          FALCON_HIDDENSELECTIONSTEXTURES_STANDARD
        };
      };
    };
    class ViewPilot: ViewPilot
    {
      initAngleX = 0;
      minMoveZ = -0.2;
    };
    FALCON_FLIGHTMODEL
    PILOTCAMERA_FALCON
		#include "\z\62stb\addons\62stb_aircraft\hmds\cfg_HMD_AH64D_106_Pilot_Lynx_A.hpp"
		#include "\z\62stb\addons\62stb_aircraft\hmds\cfg_HMD_AH64D_082_User_Actions_Default_Values.hpp"
		class UserActions: UserActions
		{
			#include "\z\62stb\addons\62stb_aircraft\hmds\cfg_HMD_AH64D_081_User_Action_ALL.hpp"
		};
  };
    // AH144 DAP ///
  class OPTRE_UNSC_MH_144_Falcon;
  class OPTRE_UNSC_falcon_armed : OPTRE_UNSC_MH_144_Falcon
  {
    class Turrets;
    class LeftDoorGun;
    class RightDoorGun;
    class CargoTurret_01;
    class CargoTurret_02;
    class CargoTurret_03;
    class CargoTurret_04;
    class CargoTurret_05;
    class CargoTurret_06;
    class CargoTurret_07;
    class CargoTurret_08;
    class CargoTurret_09;
    class RotorLibHelicopterProperties;
    class Components
    {
      class TransportPylonsComponent
      {
        class pylons
        {
          class WingPylonRight;
          class BellyPylonRight;
          class WingPylonLeft;
          class BellyPylonLeft;
          class Nose;
        };
        class Presets
        {
          class CAS_Rockets;
        };
      };
    };
    class AnimationSources
    {
      class Gatling;
      class Gatling_flash;
    };
    class WingPylonLeft;
    class WingPylonRight;
    class UserActions;
    class ViewPilot;
  };

  class 62nd_AH144_Falcon : OPTRE_UNSC_falcon_armed
  {
    author = "Weber";
    displayName = "[62nd] AH-144 'Falcon' [DAP]";
    weapons[] = 
    {
      "CMFlareLauncher",
      "Laserdesignator_pilotCamera"
    };
    magazines[] =
    {
      "168Rnd_CMFlare_Chaff_Magazine",
      "168Rnd_CMFlare_Chaff_Magazine",
      "Laserbatteries"
    };
    hiddenSelectionsTextures[] =
    {
      FALCON_HIDDENSELECTIONSTEXTURES_DAP
    };
    class textureSources 
    {
      class standard
      {
        displayName = "Standard";
        author = "Waylen ";
        textures [] =
        {
          FALCON_HIDDENSELECTIONSTEXTURES_DAP
        };
      };
    };
    class Turrets : Turrets
    {
      class CargoTurret_01 : CargoTurret_01{};
      class CargoTurret_02 : CargoTurret_02{};
      class CargoTurret_03 : CargoTurret_03{};
      class CargoTurret_04 : CargoTurret_04{};
      class CargoTurret_05 : CargoTurret_05{};
      class CargoTurret_06 : CargoTurret_06{};
      class CargoTurret_07 : CargoTurret_07{};
      class CargoTurret_08 : CargoTurret_08{};
      class CargoTurret_09 : CargoTurret_09{};
    };
    class Components: Components
    {
      class TransportPylonsComponent: TransportPylonsComponent
      {
        class pylons: pylons
        {
          class WingPylonRight: WingPylonRight
          {
            attachment = "STB_16Rnd_Anvil1_Vanilla_HE";
          };
          class BellyPylonRight: BellyPylonRight
          {
            attachment = "STB_8Rnd_Anvil1_Vanilla_HE";
          };
          class WingPylonLeft: WingPylonLeft
          {
            attachment = "STB_16Rnd_Anvil1_Vanilla_HE";
          };
          class BellyPylonLeft: BellyPylonLeft
          {
            attachment = "STB_8Rnd_Anvil1_Vanilla_HE";
          };
          class Nose: Nose
          {
            attachment = "STB_1000Rnd_20mm_HE_Pylon";
          };
        };
        class Presets: Presets
        {
          class CAS_Rockets: CAS_Rockets
          {
            displayName = "CAS: ANVIL I + 20mm HE";
            attachment[] =
            {
              "STB_16Rnd_Anvil1_Vanilla_HE",
              "STB_8Rnd_Anvil1_Vanilla_HE",
              "STB_16Rnd_Anvil1_Vanilla_HE",
              "STB_8Rnd_Anvil1_Vanilla_HE",
              "STB_1000Rnd_20mm_HE_Pylon"
            };
          };
          class STB_CAS_Rockets_HE: CAS_Rockets
          {
          };
          class STB_CAS_Rockets_AP: CAS_Rockets
          {
            displayName = "CAS: ANVIL I + 20mm AP";
            attachment[] =
            {
              "STB_16Rnd_Anvil1_Vanilla_HE",
              "STB_8Rnd_Anvil1_Vanilla_HE",
              "STB_16Rnd_Anvil1_Vanilla_HE",
              "STB_8Rnd_Anvil1_Vanilla_HE",
              "STB_1000Rnd_20mm_AP_Pylon"
            };
          };
        };
      };
    };
    class AnimationSources: AnimationSources
    {
      class Gatling: Gatling
      {
        weapon = "STB_Falcon_Nose_20mm";
      };
      class Gatling_flash: Gatling_flash
      {
        weapon = "STB_Falcon_Nose_20mm";
      };
    };

    class ViewPilot: ViewPilot
    {
      initAngleX = 0;
      minMoveZ = -0.2;
    };
    FALCON_FLIGHTMODEL
    PILOTCAMERA_FALCON
		#include "\z\62stb\addons\62stb_aircraft\hmds\cfg_HMD_AH64D_106_Pilot_Lynx_A.hpp"
		#include "\z\62stb\addons\62stb_aircraft\hmds\cfg_HMD_AH64D_082_User_Actions_Default_Values.hpp"
		class UserActions: UserActions
		{
			#include "\z\62stb\addons\62stb_aircraft\hmds\cfg_HMD_AH64D_081_User_Action_ALL.hpp"
		};
  };
  // AV-14 Hornet
  class OPTRE_Hornet_base;
  class OPTRE_UNSC_hornet_CAP: OPTRE_Hornet_base
  {
    class Components;
    class UserActions;
    class TransportPylonsComponent;
    class ViewPilot;
  };
  class 62nd_AV14_Hornet: OPTRE_UNSC_hornet_CAP
  {
    author = "Weber";
    displayName = "[62nd] AV-14 Hornet";

		weapons[]=
		{
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera",
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
    scope = 2;
    scopeCurator = 2;
    vehicleClass = "Air";
		maxSpeed=300;
		liftForceCoef=1.95;
		cyclicAsideForceCoef=3.85;
		cyclicForwardForceCoef=1.6;
		backrotorforcecoef=1.8;
    bodyFrictionCoef=0.3;
    hiddenSelectionsTextures [] =
    {
      HORNET_HIDDENSELECTIONS_TEXTURES
    };
    textureList [] =
    {
      "standard", 1
    };
    class textureSources 
    {
      class standard
      {
        displayName = "Standard";
        author = "Waylen ";
        textures [] =
        {
          HORNET_HIDDENSELECTIONS_TEXTURES
        };
      };
    };
    PILOTCAMERA_HORNET
		#include "\z\62stb\addons\62stb_aircraft\hmds\cfg_HMD_AH64D_106_Pilot_Lynx_A.hpp"
		#include "\z\62stb\addons\62stb_aircraft\hmds\cfg_HMD_AH64D_082_User_Actions_Default_Values.hpp"
		class UserActions: UserActions
		{
			#include "\z\62stb\addons\62stb_aircraft\hmds\cfg_HMD_AH64D_081_User_Action_ALL.hpp"
		};
  };
};
