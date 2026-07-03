class CfgPatches
{
   class STB_balance_weapons
   {
      units[] = {};
      weapons[] =
      {
         "OPTRE_CSW_M247H_Carry_Tripod",
         "OPTRE_CSW_M247H_Weapon",
         "OPTRE_CSW_M247H_Shield_Weapon"
      };
      requiredAddons[] =
      {
         "STB_main",
         "OPTRE_UNSC_Units_Backpacks_Gunbags",
         "OPTRE_ACE_Compat"
      };
      author = "62nd STB";
   };
};

class CfgVehicles
{
   class OPTRE_M247H_Weapon_bag
   {
      mass = 264.55;           // 12 kg
   };

   class OPTRE_M247H_Weapon_Spartan_bag
   {
      mass = 264.55;           // 12 kg
   };

   class OPTRE_M247H_Shield_Weapon_bag
   {
      mass = 264.55;           // 12 kg
   };

   class OPTRE_M247H_Shield_Weapon_Spartan_bag
   {
      mass = 264.55;           // 12 kg
   };

   class OPTRE_M247H_Tripod_bag
   {
      mass = 154.32;           // 7 kg
   };

   class OPTRE_M247H_Tripod_Spartan_bag
   {
      mass = 154.32;           // 7 kg
   };
};

class CfgWeapons
{
   class Launcher;
   class Launcher_Base_F: Launcher
   {
      class WeaponSlotsInfo;
   };

   class ace_csw_staticHMGCarry;
   class ace_csw_staticM2ShieldCarry: ace_csw_staticHMGCarry
   {
      class WeaponSlotsInfo;
   };

   class OPTRE_CSW_M247H_Carry_Tripod: Launcher_Base_F
   {
      class WeaponSlotsInfo: WeaponSlotsInfo
      {
         mass = 154.32;        // 7 kg
      };
   };

   class OPTRE_CSW_M247H_Weapon: ace_csw_staticM2ShieldCarry
   {
      class WeaponSlotsInfo: WeaponSlotsInfo
      {
         mass = 264.55;        // 12 kg
      };
   };

   class OPTRE_CSW_M247H_Shield_Weapon: OPTRE_CSW_M247H_Weapon
   {
      class WeaponSlotsInfo: WeaponSlotsInfo
      {
         mass = 264.55;        // 12 kg
      };
   };
};
