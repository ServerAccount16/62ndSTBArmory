class CfgWeapons
{
  class OPTRE_missiles_Anvil1;
  class STB_Falcon_Anvil1_Launcher: OPTRE_missiles_Anvil1
  {
    author = "Weber";
    displayName = "[62nd] ANVIL I Rocket Pods";
    descriptionShort = "'ANVIL I' rockets with vanilla HE damage";
    magazines[] =
    {
      "STB_8Rnd_Anvil1_Vanilla_HE",
      "STB_16Rnd_Anvil1_Vanilla_HE"
    };
  };

  class OPTRE_M638_Pylon
  {
    class FullAuto;
    class close;
    class short;
    class medium;
  };
  class STB_Falcon_Nose_20mm: OPTRE_M638_Pylon
  {
    author = "Weber";
    displayName = "[62nd] M638 20mm Nose Cannon";
    descriptionShort = "20mm nose cannon";
    magazines[] =
    {
      "STB_1000Rnd_20mm_HE_Pylon",
      "STB_1000Rnd_20mm_AP_Pylon"
    };

    class FullAuto: FullAuto
    {
      displayName = "20mm Nose Cannon";
      reloadTime = 0.08;
    };
    class close: close
    {
      reloadTime = 0.08;
    };
    class short: short
    {
      reloadTime = 0.08;
    };
    class medium: medium
    {
      reloadTime = 0.08;
    };
  };
};
