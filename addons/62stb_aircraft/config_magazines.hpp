class CfgMagazines
{
  class OPTRE_8Rnd_Anvil1_missiles;
  class STB_8Rnd_Anvil1_Vanilla_HE: OPTRE_8Rnd_Anvil1_missiles
  {
    author = "Weber";
    displayName = "[62nd] 8x 'ANVIL I' HE Rockets";
    displayNameShort = "ANVIL HE";
    displayNameMFDFormat = "ANVIL";
    descriptionShort = "8x ANVIL I rockets with vanilla HE damage";
    pylonWeapon = "STB_Falcon_Anvil1_Launcher";
    ammo = "STB_M_ANVIL_1_Vanilla_HE";
  };

  class OPTRE_16Rnd_Anvil1_missiles;
  class STB_16Rnd_Anvil1_Vanilla_HE: OPTRE_16Rnd_Anvil1_missiles
  {
    author = "Weber";
    displayName = "[62nd] 16x 'ANVIL I' HE Rockets";
    displayNameShort = "ANVIL HE";
    displayNameMFDFormat = "ANVIL";
    descriptionShort = "16x ANVIL I rockets with vanilla HE damage";
    pylonWeapon = "STB_Falcon_Anvil1_Launcher";
    ammo = "STB_M_ANVIL_1_Vanilla_HE";
  };

  class OPTRE_2000Rnd_20mm_HE_Pylon;
  class STB_1000Rnd_20mm_HE_Pylon: OPTRE_2000Rnd_20mm_HE_Pylon
  {
    author = "Weber";
    displayName = "[62nd] 1000x 20mm HE";
    displayNameShort = "20mm HE";
    displayNameMFDFormat = "20mm HE";
    descriptionShort = "20mm high explosive nose cannon ammunition";
    pylonWeapon = "STB_Falcon_Nose_20mm";
    ammo = "B_20mm_Tracer_Red";
    count = 1000;
    tracersEvery = 5;
  };

  class STB_1000Rnd_20mm_AP_Pylon: STB_1000Rnd_20mm_HE_Pylon
  {
    displayName = "[62nd] 1000x 20mm AP";
    displayNameShort = "20mm AP";
    displayNameMFDFormat = "20mm AP";
    descriptionShort = "20mm armor piercing nose cannon ammunition";
    ammo = "STB_B_20mm_AP";
  };
};
