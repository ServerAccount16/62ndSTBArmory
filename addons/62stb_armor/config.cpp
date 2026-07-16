class CfgPatches
{
   class STB_armor
   {
      units[] =
      {
         "STB_62_Headgear_H_Helmet_ECH55D_Test",
         "STB_62_Headgear_H_Helmet_ECH55D_Test_DP"
      };
      weapons[] =
      {
         "STB_62_H_Helmet_ECH55D_Test",
         "STB_62_H_Helmet_ECH55D_Test_DP",
         "STB_62_V_M43D_ODST_Test"
      };
      requiredVersion = 2.18;
      requiredAddons[] =
      {
         "STB_main",
         "TCP_Characters_BLUFOR_UNSC_Marines_Headgear_helmet_ECH55D",
         "TCP_Characters_BLUFOR_UNSC_Marines_Vests_M43D"
      };
      author = "62nd STB";
   };
};

class CfgWeapons
{
   class TCP_H_Helmet_ECH55D_Black_Blue;
   class TCP_H_Helmet_ECH55D_Black_Blue_DP;
   class TCP_V_M43D_ODST_1_Black;

   class STB_62_H_Helmet_ECH55D_Test: TCP_H_Helmet_ECH55D_Black_Blue
   {
      author = "62nd STB";
      displayName = "[62nd] ECH55D Helmet (Test)";
      TCP_visrClasses[] =
      {
         "STB_62_H_Helmet_ECH55D_Test",
         "STB_62_H_Helmet_ECH55D_Test_DP"
      };
      hiddenSelectionsTextures[] =
      {
         "\z\62stb\addons\62stb_armor\textures\helmet\TEST.paa",
         "\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Blue\helmet_ECH55D_Visor_CO.paa",
         "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
      };
   };

   class STB_62_H_Helmet_ECH55D_Test_DP: TCP_H_Helmet_ECH55D_Black_Blue_DP
   {
      author = "62nd STB";
      displayName = "[62nd] ECH55D Helmet (Test, DP)";
      TCP_visrClasses[] =
      {
         "STB_62_H_Helmet_ECH55D_Test",
         "STB_62_H_Helmet_ECH55D_Test_DP"
      };
      hiddenSelectionsTextures[] =
      {
         "\z\62stb\addons\62stb_armor\textures\helmet\TEST.paa",
         "\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Blue\helmet_ECH55D_Visor_CA.paa",
         "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
      };
   };

   class STB_62_V_M43D_ODST_Test: TCP_V_M43D_ODST_1_Black
   {
      author = "62nd STB";
      displayName = "[62nd] M43D ODST Armor (Test)";
      hiddenSelectionsTextures[] =
      {
         "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
         "\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_Shoulders_ODST_CO.paa",
         "\z\62stb\addons\62stb_armor\textures\vest\M43D_ODST_TEST.paa",
         "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
         "\TCP\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
      };
   };
};

class CfgVehicles
{
   class TCP_Headgear_H_Helmet_ECH55D_Black_Blue;
   class TCP_Headgear_H_Helmet_ECH55D_Black_Blue_DP;

   class STB_62_Headgear_H_Helmet_ECH55D_Test: TCP_Headgear_H_Helmet_ECH55D_Black_Blue
   {
      author = "62nd STB";
      displayName = "[62nd] ECH55D Helmet (Test)";
      class TransportItems
      {
         class _xx_STB_62_H_Helmet_ECH55D_Test
         {
            name = "STB_62_H_Helmet_ECH55D_Test";
            count = 1;
         };
      };
   };

   class STB_62_Headgear_H_Helmet_ECH55D_Test_DP: TCP_Headgear_H_Helmet_ECH55D_Black_Blue_DP
   {
      author = "62nd STB";
      displayName = "[62nd] ECH55D Helmet (Test, DP)";
      scope = 1;
      scopeCurator = 1;
      class TransportItems
      {
         class _xx_STB_62_H_Helmet_ECH55D_Test_DP
         {
            name = "STB_62_H_Helmet_ECH55D_Test_DP";
            count = 1;
         };
      };
   };
};
