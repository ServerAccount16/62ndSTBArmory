#include "config_macros.hpp"

class CfgPatches {
  class STB_supplies {
    units[] = {
      "62nd_sp_empty",
      "62nd_sp_medical",
      "62nd_sp_ex",
      "62nd_sp_at",
      "62nd_sp_m",
      "62nd_sp_hm",
      "62nd_sp_eq"
    };
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
      "STB_main",
      "OPTRE_Modules"
    };
  };
};

class CfgVehicles
{
  class OPTRE_Ammo_SupplyPod_Empty;

  SUPPLY_POD_EMPTY(62nd_sp_empty,"[62nd] Supply Pod (Empty)")

  // ---------------------------------------------------------------------------
  //  Medical Supply Pod
  // ---------------------------------------------------------------------------
  SUPPLY_POD_BEGIN(62nd_sp_medical,"[62nd] Supply Pod (Medical)")
    class TransportMagazines {};
    class TransportWeapons {};
    class TransportItems 
    {
      SUPPLY_ITEM(kat_IFAK,35) // May be a magazine
      SUPPLY_ITEM(kat_AFAK,10) // May be a magazine
      SUPPLY_ITEM(kat_MFAK,10) // May be a magazine 
      SUPPLY_ITEM(UNSCI_Biofoam,20)
      SUPPLY_ITEM(UNSCI_Medkit,5)
      SUPPLY_ITEM(UNSCI_MediGel_Canister,20)
      SUPPLY_ITEM(UNSCI_MediGel_40ml,60)
      SUPPLY_ITEM(kat_bloodIV_O_N,25)
      SUPPLY_ITEM(kat_bloodIV_O_N_500,25)
    };
  };

  // ---------------------------------------------------------------------------
  //  Explosives Supply Pod
  // ---------------------------------------------------------------------------
  SUPPLY_POD_BEGIN(62nd_sp_ex,"[62nd] Supply Pod (Explosives)")
    class TransportMagazines 
    {
      SUPPLY_MAG(OPTRE_CSW_1Rnd_122mm_Mo_Shells,15)
    };
    class TransportWeapons {};
    class TransportItems 
    {
      SUPPLY_ITEM(tsp_breach_block_mag,8)
      SUPPLY_ITEM(C7_Remote_Mag,8)
      SUPPLY_ITEM(C12_Remote_Mag,8)
    };
  };


  // ---------------------------------------------------------------------------
  //  Launcher Supply Pod
  // ---------------------------------------------------------------------------
  SUPPLY_POD_BEGIN(62nd_sp_at,"[62nd] Supply Pod (Launchers)")
    class TransportMagazines 
    {
      SUPPLY_MAG(TCP_2Rnd_102mm_Mag_HEAT,2)
      SUPPLY_MAG(TCP_2Rnd_102mm_Mag_HEAP,2)
    };
    class TransportWeapons 
    {
      SUPPLY_WEAPON(TCP_launch_M41,1)
      SUPPLY_WEAPON(DMNS_M96_LAW,3)
    };
    class TransportItems {};
  };

  // ---------------------------------------------------------------------------
  //  Munitions Supply Pod
  // ---------------------------------------------------------------------------
  SUPPLY_POD_BEGIN(62nd_sp_m,"[62nd] Supply Pod (Munitions)")
    class TransportMagazines 
    {
      SUPPLY_MAG(TCP_1Rnd_12Gauge_Shell_Pellets,20)
      SUPPLY_MAG(TCP_1Rnd_12Gauge_Shell_Slug,20)
      SUPPLY_MAG(TCP_12Rnd_127x30_46_Mag,15)
      SUPPLY_MAG(TCP_24Rnd_127x20_Mag,15)
      SUPPLY_MAG(TCP_60Rnd_5x23_Mag,10)
      SUPPLY_MAG(TCP_20Rnd_65x48_Mag,10)
      SUPPLY_MAG(TCP_32Rnd_762x51_Mag,40)
      SUPPLY_MAG(TCP_15Rnd_762x51_Mag_BTHP,10)
      SUPPLY_MAG(TCP_36Rnd_95x40_Mag,20)
    };
    class TransportWeapons {};
    class TransportItems {};
  };

  // ---------------------------------------------------------------------------
  //  Heavy Munitions Supply Pod
  // ---------------------------------------------------------------------------
  SUPPLY_POD_BEGIN(62nd_sp_hm,"[62nd] Supply Pod (Heavy Munitions)")
    class TransportMagazines 
    {
      SUPPLY_MAG(TCP_200Rnd_762x51_Mag_Tracer_Yellow,6)
      SUPPLY_MAG(OPTRE_csw_200Rnd_127x99,6)
      SUPPLY_MAG(OPTRE_50Rnd_127x99_M250_Box,6)
      SUPPLY_MAG(TCP_4Rnd_127x99_Mag,6)
    };
    class TransportWeapons {};
    class TransportItems {};
  };

  // ---------------------------------------------------------------------------
  //  Equipment Supply Pod
  // ---------------------------------------------------------------------------
  SUPPLY_POD_BEGIN(62nd_sp_eq,"[62nd] Supply Pod (Equipment)")
    class TransportMagazines 
    {
      SUPPLY_MAG(TCP_1Rnd_40_Shell_HE,25)
      SUPPLY_MAG(TCP_1Rnd_40_Shell_Smoke_Red,4)
      SUPPLY_MAG(TCP_1Rnd_40_Shell_Smoke_White,8)
      SUPPLY_MAG(Laserbatteries,5)
    };
    class TransportWeapons {};
    class TransportItems 
    {
      SUPPLY_ITEM(RS_Equip_Retention,10)
      SUPPLY_ITEM(ACE_CableTie,50)
      SUPPLY_ITEM(ACE_EntrenchingTool,5)
      SUPPLY_ITEM(ACE_IR_Strobe_Item,10)
      SUPPLY_ITEM(TCP_M21_SmokeBlue,10)
      SUPPLY_ITEM(TCP_M21_SmokeGreen,6)
      SUPPLY_ITEM(TCP_M21_SmokeOrange,6)
      SUPPLY_ITEM(TCP_M21_SmokePurple,4)
      SUPPLY_ITEM(TCP_M21_SmokeRed,6)
      SUPPLY_ITEM(TCP_M21_Smoke,40)
      SUPPLY_ITEM(TCP_M21_SmokeYellow,6)
      SUPPLY_ITEM(ACE_M84,30)
      SUPPLY_ITEM(TCP_M9R_Frag,30)

    };
  };

  class Module_OPTRE_PelicanSupplyDrop {
    class Arguments {
      class box1 {
        class values {
          PELICAN_SUPPLY_BASE
          PELICAN_SUPPLY_VALUE(n21,"[62nd] Medical Supply Pod",62nd_sp_medical)
          PELICAN_SUPPLY_VALUE(n23,"[62nd] Explosives Supply Pod",62nd_sp_ex)
          PELICAN_SUPPLY_VALUE(n25,"[62nd] Launcher Supply Pod",62nd_sp_at)
          PELICAN_SUPPLY_VALUE(n26,"[62nd] Mortar Supply Pod",62nd_sp_mortar)
          PELICAN_SUPPLY_VALUE(n27,"[62nd] Rifle Supply Pod",62nd_sp_m)
          PELICAN_SUPPLY_VALUE(n28,"[62nd] Machine Gun Supply Pod",62nd_sp_hm)
          PELICAN_SUPPLY_VALUE(n29,"[62nd] Equipment Supply Pod",62nd_sp_eq)
        };
      };
    };
  };
};
