class CfgPatches
{
   class STB_compat_tcp_weapons
   {
      units[] = {};
      weapons[] = {};
      requiredVersion = 2.18;
      requiredAddons[] =
      {
         "STB_main",
         "TCP_Weapons_Launchers_M319",
         "TCP_Weapons_Ammo_40_HE",
         "TCP_Weapons_Explosives_M168",
         "TCP_Weapons_Explosives_M243",
         "TCP_Weapons_Explosives_M250",
         "TCP_Weapons_Explosives_M725",
         "TCP_Weapons_Explosives_T14",
         "ace_explosives",
         "ace_huntir"
      };
      author = "62nd STB";
   };
};

class CfgAmmo
{
   class ACE_DemoCharge_Remote_Ammo;
   class APERSMine_Range_Ammo;
   class ATMine_Range_Ammo;

   class STB_TCP_M168_ACE_Remote_Ammo: ACE_DemoCharge_Remote_Ammo
   {
      hit = 3000;
      indirectHit = 3000;
      indirectHitRange = 5;
      model = "\TCP\Weapons\Explosives\M168\M168_Detonator_Armed.p3d";
      mineModelDisabled = "\TCP\Weapons\Explosives\M168\M168_Detonator.p3d";
      defaultMagazine = "TCP_M168_Remote_Mag";
      ace_explosives_magazine = "TCP_M168_Remote_Mag";
      ace_explosives_size = 0;
      ace_explosives_defuseObjectPosition[] = {0,0,0.05};
      soundActivation[] = {"",0,0,0};
      soundDeactivation[] = {"",0,0,0};
      ExplosionEffects = "MineNondirectionalExplosion";
      CraterEffects = "MineNondirectionalCrater";
      whistleDist = 10;
      mineInconspicuousness = 3;
      mineTrigger = "RemoteTrigger";
   };

   class STB_TCP_M243_ACE_Remote_Ammo: ACE_DemoCharge_Remote_Ammo
   {
      hit = 3000;
      indirectHit = 3000;
      indirectHitRange = 5;
      model = "\TCP\Weapons\Explosives\M243\M243.p3d";
      mineModelDisabled = "\TCP\Weapons\Explosives\M243\M243_Disarmed.p3d";
      defaultMagazine = "TCP_M243_Remote_Mag";
      ace_explosives_magazine = "TCP_M243_Remote_Mag";
      ace_explosives_size = 0;
      ace_explosives_defuseObjectPosition[] = {0,0,0.05};
      soundActivation[] = {"",0,0,0};
      soundDeactivation[] = {"",0,0,0};
      ExplosionEffects = "MineNondirectionalExplosion";
      CraterEffects = "MineNondirectionalCrater";
      whistleDist = 10;
      mineInconspicuousness = 3;
      mineTrigger = "RemoteTrigger";
   };

   class STB_TCP_M250_ACE_Range_Ammo: APERSMine_Range_Ammo
   {
      hit = 2500;
      indirectHit = 2500;
      indirectHitRange = 5;
      model = "\TCP\Weapons\Explosives\M250\M250.p3d";
      mineModelDisabled = "\TCP\Weapons\Explosives\M250\M250_Disarmed.p3d";
      defaultMagazine = "TCP_M250_Remote_Mag";
      ace_explosives_magazine = "TCP_M250_Remote_Mag";
      ace_explosives_size = 0;
      ace_explosives_defuseObjectPosition[] = {0,0,0.04};
      ExplosionEffects = "MineNondirectionalExplosion";
      CraterEffects = "MineNondirectionalCrater";
      whistleDist = 10;
      mineInconspicuousness = 3;
      mineTrigger = "RangeTriggerShort";
   };

   class STB_TCP_M725_ACE_Range_Ammo: ATMine_Range_Ammo
   {
      hit = 2500;
      indirectHit = 2500;
      indirectHitRange = 5;
      model = "\TCP\Weapons\Explosives\M725\M725.p3d";
      mineModelDisabled = "\TCP\Weapons\Explosives\M725\M725_Disarmed.p3d";
      defaultMagazine = "TCP_M725_Remote_Mag";
      ace_explosives_magazine = "TCP_M725_Remote_Mag";
      ace_explosives_size = 0;
      ace_explosives_defuseObjectPosition[] = {0,0,0.04};
      ExplosionEffects = "MineNondirectionalExplosion";
      CraterEffects = "MineNondirectionalCrater";
      whistleDist = 10;
      mineInconspicuousness = 3;
      mineTrigger = "TankTriggerMagnetic";
   };

   class STB_TCP_T14_ACE_Range_Ammo: ATMine_Range_Ammo
   {
      hit = 3000;
      indirectHit = 3000;
      indirectHitRange = 5;
      model = "\TCP\Weapons\Explosives\T14\T14.p3d";
      mineModelDisabled = "\TCP\Weapons\Explosives\T14\T14_Disarmed.p3d";
      defaultMagazine = "TCP_T14_Remote_Mag";
      ace_explosives_magazine = "TCP_T14_Remote_Mag";
      ace_explosives_size = 0;
      ace_explosives_defuseObjectPosition[] = {0,0,0.04};
      ExplosionEffects = "MineNondirectionalExplosion";
      CraterEffects = "MineNondirectionalCrater";
      whistleDist = 10;
      mineInconspicuousness = 3;
      mineTrigger = "TankTriggerMagnetic";
   };
};

class CfgMagazines
{
   class TCP_M168_Remote_Mag
   {
      ammo = "STB_TCP_M168_ACE_Remote_Ammo";
      useAction = 0;
      ace_explosives_placeable = 1;
      ace_explosives_isSticky = 1;
      ace_explosives_setupObject = "STB_ACE_Explosives_Place_TCP_M168";

      class ACE_Triggers
      {
         SupportedTriggers[] = {"Timer","Command","MK16_Transmitter","DeadmanSwitch"};
         class Timer
         {
            FuseTime = 0.5;
         };
         class Command
         {
            FuseTime = 0.5;
         };
         class MK16_Transmitter: Command {};
         class DeadmanSwitch: Command {};
      };
   };

   class TCP_M243_Remote_Mag
   {
      ammo = "STB_TCP_M243_ACE_Remote_Ammo";
      useAction = 0;
      ace_explosives_placeable = 1;
      ace_explosives_isSticky = 1;
      ace_explosives_setupObject = "STB_ACE_Explosives_Place_TCP_M243";

      class ACE_Triggers
      {
         SupportedTriggers[] = {"Timer","Command","MK16_Transmitter","DeadmanSwitch"};
         class Timer
         {
            FuseTime = 0.5;
         };
         class Command
         {
            FuseTime = 0.5;
         };
         class MK16_Transmitter: Command {};
         class DeadmanSwitch: Command {};
      };
   };

   class TCP_M250_Remote_Mag
   {
      ammo = "STB_TCP_M250_ACE_Range_Ammo";
      useAction = 0;
      ace_explosives_placeable = 1;
      ace_explosives_setupObject = "STB_ACE_Explosives_Place_TCP_M250";

      class ACE_Triggers
      {
         SupportedTriggers[] = {"PressurePlate"};
         class PressurePlate
         {
            digDistance = 0;
         };
      };
   };

   class TCP_M725_Remote_Mag
   {
      ammo = "STB_TCP_M725_ACE_Range_Ammo";
      useAction = 0;
      ace_explosives_placeable = 1;
      ace_explosives_setupObject = "STB_ACE_Explosives_Place_TCP_M725";

      class ACE_Triggers
      {
         SupportedTriggers[] = {"PressurePlate"};
         class PressurePlate
         {
            displayName = "$STR_ace_explosives_SLAME_Magnetic";
            digDistance = 0;
         };
      };
   };

   class TCP_T14_Remote_Mag
   {
      ammo = "STB_TCP_T14_ACE_Range_Ammo";
      useAction = 0;
      ace_explosives_placeable = 1;
      ace_explosives_setupObject = "STB_ACE_Explosives_Place_TCP_T14";

      class ACE_Triggers
      {
         SupportedTriggers[] = {"PressurePlate"};
         class PressurePlate
         {
            displayName = "$STR_ace_explosives_SLAME_Magnetic";
            digDistance = 0;
         };
      };
   };
};

class CfgMagazineWells
{
   class TCP_40_1
   {
      STB_compat_tcp_weapons[] =
      {
         "ACE_HuntIR_M203"
      };
   };
};

class CBA_Extended_EventHandlers;

class CfgVehicles
{
   class ACE_Explosives_Place;

   class TCP_M168
   {
      ammo = "STB_TCP_M168_ACE_Remote_Ammo";
   };

   class TCP_M243
   {
      ammo = "STB_TCP_M243_ACE_Remote_Ammo";
   };

   class TCP_M250
   {
      ammo = "STB_TCP_M250_ACE_Range_Ammo";
   };

   class TCP_M725
   {
      ammo = "STB_TCP_M725_ACE_Range_Ammo";
   };

   class TCP_T14
   {
      ammo = "STB_TCP_T14_ACE_Range_Ammo";
   };

   class STB_ACE_Explosives_Place_TCP_M168: ACE_Explosives_Place
   {
      displayName = "$STR_TCP_Weapons_Explosives_M168_displayName";
      model = "\TCP\Weapons\Explosives\M168\M168_Detonator.p3d";
   };

   class STB_ACE_Explosives_Place_TCP_M243: ACE_Explosives_Place
   {
      displayName = "$STR_TCP_Weapons_Explosives_M243_displayName";
      model = "\TCP\Weapons\Explosives\M243\M243.p3d";
   };

   class STB_ACE_Explosives_Place_TCP_M250: ACE_Explosives_Place
   {
      displayName = "$STR_TCP_Weapons_Explosives_M250_displayName";
      model = "\TCP\Weapons\Explosives\M250\M250.p3d";
   };

   class STB_ACE_Explosives_Place_TCP_M725: ACE_Explosives_Place
   {
      displayName = "$STR_TCP_Weapons_Explosives_M725_displayName";
      model = "\TCP\Weapons\Explosives\M725\M725.p3d";
   };

   class STB_ACE_Explosives_Place_TCP_T14: ACE_Explosives_Place
   {
      displayName = "$STR_TCP_Weapons_Explosives_T14_displayName";
      model = "\TCP\Weapons\Explosives\T14\T14.p3d";
   };
};
