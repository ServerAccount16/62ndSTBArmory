#define SUPPLY_POD_EMPTY(CLASS,DISPLAYNAME) \
  class CLASS: OPTRE_Ammo_SupplyPod_Empty \
  { \
    author = "Weber"; \
    scope = 2; \
    scopeCurator = 2; \
    scopeArsenal = 2; \
    displayName = DISPLAYNAME; \
    faction = "62nd"; \
    editorCategory = "62nd"; \
    editorSubcategory = "62nd_supplies"; \
    transportMaxWeapons = 25; \
    transportMaxMagazines = 100; \
    hiddenSelections[] = {"camo"}; \
    class TransportMagazines {}; \
    class TransportWeapons {}; \
    class TransportItems {}; \
  };

#define SUPPLY_POD_BEGIN(CLASS,DISPLAYNAME) \
  class CLASS: 62nd_sp_empty \
  { \
    displayName = DISPLAYNAME;
    /*hiddenSelectionsTextures[] = 
    {
      ""
    };*/


#define SUPPLY_MAG(CLASS,COUNT) class _xx_##CLASS { magazine = #CLASS; count = COUNT; };
#define SUPPLY_WEAPON(CLASS,COUNT) class _xx_##CLASS { weapon = #CLASS; count = COUNT; };
#define SUPPLY_ITEM(CLASS,COUNT) class _xx_##CLASS { name = #CLASS; count = COUNT; };
#define PELICAN_SUPPLY_BASE \
  class n1 { name = "none"; value = "none"; }; \
  class n2 { name = "Random Supply Pod"; value = "rdm"; default = 1; }; \
  class n3 { name = "Sniper [OLD] Supply Pod"; value = "OPTRE_Ammo_SupplyPod_Sniper"; }; \
  class n4 { name = "Medical Supply Pod"; value = "OPTRE_Ammo_SupplyPod_Medical"; }; \
  class n5 { name = "MA5B Supply Pod"; value = "OPTRE_Ammo_SupplyPod_AR"; }; \
  class n6 { name = "LMG Supply Pod"; value = "OPTRE_Ammo_SupplyPod_LMG"; }; \
  class n7 { name = "SMG Supply Pod"; value = "OPTRE_Ammo_SupplyPod_SMG"; }; \
  class n8 { name = "Pistol Supply Pod"; value = "OPTRE_Ammo_SupplyPod_Pistol"; }; \
  class n9 { name = "Shotgun Supply Pod"; value = "OPTRE_Ammo_SupplyPod_Shotgun"; }; \
  class n10 { name = "Launcher Supply Pod"; value = "OPTRE_Ammo_SupplyPod_Launcher"; }; \
  class n11 { name = "DMR Supply Pod"; value = "OPTRE_Ammo_SupplyPod_DMR"; }; \
  class n12 { name = "BR Supply Pod"; value = "OPTRE_Ammo_SupplyPod_BR"; }; \
  class n13 { name = "MA5K Supply Pod"; value = "OPTRE_Ammo_SupplyPod_MA5K"; }; \
  class n14 { name = "SRS99C Supply Pod"; value = "OPTRE_Ammo_SupplyPod_SRS99C"; }; \
  class n15 { name = "MA5BAC Supply Pod"; value = "OPTRE_Ammo_SupplyPod_ARC"; }; \
  class n16 { name = "MA5BAC Supply Pod"; value = "OPTRE_Ammo_SupplyPod_ARC_GL"; }; \
  class n17 { name = "M37 Supply Pod"; value = "OPTRE_Ammo_SupplyPod_37"; }; \
  class n18 { name = "M37GL Supply Pod"; value = "OPTRE_Ammo_SupplyPod_37_GL"; }; \
  class n19 { name = "MA5BGL Supply Pod"; value = "OPTRE_Ammo_SupplyPod_AR_GL"; }; \
  class n20 { name = "CUSTOM Supply Pod"; value = "OPTRE_Ammo_SupplyPod_Empty"; }; \
#define PELICAN_SUPPLY_VALUE(ID,NAME,CLASS) class ID { name = NAME; value = #CLASS; };