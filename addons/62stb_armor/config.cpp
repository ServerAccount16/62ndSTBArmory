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
         "STB_62_H_Helmet_ECH55D_Test_DP"
      };
      requiredVersion = 2.18;
      requiredAddons[] =
      {
         "STB_main",
         "TCP_Characters_BLUFOR_UNSC_Marines_Headgear_helmet_ECH55D"
      };
      author = "62nd STB";
   };
};

class CfgWeapons
{
   class TCP_H_Helmet_ECH55D_Black_Blue;
   class TCP_H_Helmet_ECH55D_Black_Blue_DP;

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
