#include "macros.hpp"

class CfgPatches
{
   class STB_armor
   {
      units[] =
      {
         "STB_62_Headgear_H_Helmet_ECH55D_Var1",
         "STB_62_Headgear_H_Helmet_ECH55D_Var1_DP",
         "STB_62_Headgear_H_Helmet_ECH55D_Var2",
         "STB_62_Headgear_H_Helmet_ECH55D_Var2_DP",
         "STB_62_Headgear_H_Helmet_ECH55D_Var3",
         "STB_62_Headgear_H_Helmet_ECH55D_Var3_DP",
         "STB_62_Headgear_H_Helmet_ECH55D_Var4",
         "STB_62_Headgear_H_Helmet_ECH55D_Var4_DP",
         "STB_62_Headgear_H_Helmet_ECH55D_Corpsman",
         "STB_62_Headgear_H_Helmet_ECH55D_Corpsman_DP",
         "STB_62_Headgear_H_Helmet_ECH55D_NCO",
         "STB_62_Headgear_H_Helmet_ECH55D_NCO_DP"
      };
      weapons[] =
      {
         "STB_62_H_Helmet_ECH55D_Var1",
         "STB_62_H_Helmet_ECH55D_Var1_DP",
         "STB_62_H_Helmet_ECH55D_Var2",
         "STB_62_H_Helmet_ECH55D_Var2_DP",
         "STB_62_H_Helmet_ECH55D_Var3",
         "STB_62_H_Helmet_ECH55D_Var3_DP",
         "STB_62_H_Helmet_ECH55D_Var4",
         "STB_62_H_Helmet_ECH55D_Var4_DP",
         "STB_62_H_Helmet_ECH55D_Corpsman",
         "STB_62_H_Helmet_ECH55D_Corpsman_DP",
         "STB_62_H_Helmet_ECH55D_NCO",
         "STB_62_H_Helmet_ECH55D_NCO_DP",
         "STB_62_V_M43D_ODST_4_Var1",
         "STB_62_V_M43D_BREACHER_4_Var1",
         "STB_62_V_M43D_SHARPSHOOTER_4_Var1",
         "STB_62_V_M43D_ODST_4_1_Var1",
         "STB_62_V_M43D_ODST_4_2_Var1",
         "STB_62_V_M43D_BREACHER_4_1_Var1",
         "STB_62_V_M43D_BREACHER_4_2_Var1",
         "STB_62_V_M43D_ODST_4_Var2",
         "STB_62_V_M43D_BREACHER_4_Var2",
         "STB_62_V_M43D_SHARPSHOOTER_4_Var2",
         "STB_62_V_M43D_ODST_4_1_Var2",
         "STB_62_V_M43D_ODST_4_2_Var2",
         "STB_62_V_M43D_BREACHER_4_1_Var2",
         "STB_62_V_M43D_BREACHER_4_2_Var2",
         "STB_62_V_M43D_ODST_4_Var3",
         "STB_62_V_M43D_BREACHER_4_Var3",
         "STB_62_V_M43D_SHARPSHOOTER_4_Var3",
         "STB_62_V_M43D_ODST_4_1_Var3",
         "STB_62_V_M43D_ODST_4_2_Var3",
         "STB_62_V_M43D_BREACHER_4_1_Var3",
         "STB_62_V_M43D_BREACHER_4_2_Var3",
         "STB_62_V_M43D_ODST_4_Var4",
         "STB_62_V_M43D_BREACHER_4_Var4",
         "STB_62_V_M43D_SHARPSHOOTER_4_Var4",
         "STB_62_V_M43D_ODST_4_1_Var4",
         "STB_62_V_M43D_ODST_4_2_Var4",
         "STB_62_V_M43D_BREACHER_4_1_Var4",
         "STB_62_V_M43D_BREACHER_4_2_Var4",
         "STB_62_V_M43D_ODST_4_Corpsman",
         "STB_62_V_M43D_ODST_4_NCO"
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
   class TCP_H_Helmet_ECH55D_Black_Green;
   class TCP_H_Helmet_ECH55D_Black_Green_DP;
   class TCP_H_Helmet_ECH55D_Black_Gold;
   class TCP_H_Helmet_ECH55D_Black_Gold_DP;
   class TCP_V_M43D_ODST_4_Black;
   class TCP_V_M43D_BREACHER_4_Black;
   class TCP_V_M43D_SHARPSHOOTER_4_Black;
   class TCP_V_M43D_ODST_4_1_Black;
   class TCP_V_M43D_ODST_4_2_Black;
   class TCP_V_M43D_BREACHER_4_1_Black;
   class TCP_V_M43D_BREACHER_4_2_Black;

   STB_HELMET_VARIANT(STB_62_H_Helmet_ECH55D_Var1,STB_62_H_Helmet_ECH55D_Var1_DP,TCP_H_Helmet_ECH55D_Black_Blue,TCP_H_Helmet_ECH55D_Black_Blue_DP,"STB_62_H_Helmet_ECH55D_Var1","STB_62_H_Helmet_ECH55D_Var1_DP","[62nd] ECH55D Helmet (Var 1)","[62nd] ECH55D Helmet (Var 1, DP)","\z\62stb\addons\62stb_armor\textures\helmet\helmet_ECH55D_Var1_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Blue\helmet_ECH55D_Visor_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Blue\helmet_ECH55D_Visor_CA.paa");
   STB_HELMET_VARIANT(STB_62_H_Helmet_ECH55D_Var2,STB_62_H_Helmet_ECH55D_Var2_DP,TCP_H_Helmet_ECH55D_Black_Blue,TCP_H_Helmet_ECH55D_Black_Blue_DP,"STB_62_H_Helmet_ECH55D_Var2","STB_62_H_Helmet_ECH55D_Var2_DP","[62nd] ECH55D Helmet (Var 2)","[62nd] ECH55D Helmet (Var 2, DP)","\z\62stb\addons\62stb_armor\textures\helmet\helmet_ECH55D_Var2_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Blue\helmet_ECH55D_Visor_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Blue\helmet_ECH55D_Visor_CA.paa");
   STB_HELMET_VARIANT(STB_62_H_Helmet_ECH55D_Var3,STB_62_H_Helmet_ECH55D_Var3_DP,TCP_H_Helmet_ECH55D_Black_Blue,TCP_H_Helmet_ECH55D_Black_Blue_DP,"STB_62_H_Helmet_ECH55D_Var3","STB_62_H_Helmet_ECH55D_Var3_DP","[62nd] ECH55D Helmet (Var 3)","[62nd] ECH55D Helmet (Var 3, DP)","\z\62stb\addons\62stb_armor\textures\helmet\helmet_ECH55D_Var3_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Blue\helmet_ECH55D_Visor_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Blue\helmet_ECH55D_Visor_CA.paa");
   STB_HELMET_VARIANT(STB_62_H_Helmet_ECH55D_Var4,STB_62_H_Helmet_ECH55D_Var4_DP,TCP_H_Helmet_ECH55D_Black_Blue,TCP_H_Helmet_ECH55D_Black_Blue_DP,"STB_62_H_Helmet_ECH55D_Var4","STB_62_H_Helmet_ECH55D_Var4_DP","[62nd] ECH55D Helmet (Var 4)","[62nd] ECH55D Helmet (Var 4, DP)","\z\62stb\addons\62stb_armor\textures\helmet\helmet_ECH55D_Var4_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Blue\helmet_ECH55D_Visor_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Blue\helmet_ECH55D_Visor_CA.paa");
   STB_HELMET_VARIANT(STB_62_H_Helmet_ECH55D_Corpsman,STB_62_H_Helmet_ECH55D_Corpsman_DP,TCP_H_Helmet_ECH55D_Black_Green,TCP_H_Helmet_ECH55D_Black_Green_DP,"STB_62_H_Helmet_ECH55D_Corpsman","STB_62_H_Helmet_ECH55D_Corpsman_DP","[62nd] ECH55D Helmet (Corpsman)","[62nd] ECH55D Helmet (Corpsman, DP)","\z\62stb\addons\62stb_armor\textures\helmet\helmet_ECH55D_Corpsman_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Green\helmet_ECH55D_Visor_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Green\helmet_ECH55D_Visor_CA.paa");
   STB_HELMET_VARIANT(STB_62_H_Helmet_ECH55D_NCO,STB_62_H_Helmet_ECH55D_NCO_DP,TCP_H_Helmet_ECH55D_Black_Gold,TCP_H_Helmet_ECH55D_Black_Gold_DP,"STB_62_H_Helmet_ECH55D_NCO","STB_62_H_Helmet_ECH55D_NCO_DP","[62nd] ECH55D Helmet (NCO)","[62nd] ECH55D Helmet (NCO, DP)","\z\62stb\addons\62stb_armor\textures\helmet\helmet_ECH55D_NCO_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Gold\helmet_ECH55D_Visor_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Gold\helmet_ECH55D_Visor_CA.paa");

   STB_ODST_VEST_VARIANT(STB_62_V_M43D_ODST_4_Var1,TCP_V_M43D_ODST_4_Black,"[62nd] M43D ODST 4 Armor (Var 1)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var1_CO.paa",STB_ODST_SHOULDER_TEXTURE);
   STB_SPECIALTY_VEST_VARIANT(STB_62_V_M43D_BREACHER_4_Var1,TCP_V_M43D_BREACHER_4_Black,"[62nd] M43D Breacher 4 Armor (Var 1)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var1_CO.paa",STB_BREACHER_SHOULDER_TEXTURE);
   STB_SPECIALTY_VEST_VARIANT(STB_62_V_M43D_SHARPSHOOTER_4_Var1,TCP_V_M43D_SHARPSHOOTER_4_Black,"[62nd] M43D Sharpshooter 4 Armor (Var 1)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var1_CO.paa",STB_SHARPSHOOTER_SHOULDER_TEXTURE);
   STB_ODST_VEST_VARIANT(STB_62_V_M43D_ODST_4_1_Var1,TCP_V_M43D_ODST_4_1_Black,"[62nd] M43D ODST 4-1 Armor (Var 1)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var1_CO.paa",STB_ODST_SHOULDER_TEXTURE);
   STB_ODST_VEST_VARIANT(STB_62_V_M43D_ODST_4_2_Var1,TCP_V_M43D_ODST_4_2_Black,"[62nd] M43D ODST 4-2 Armor (Var 1)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var1_CO.paa",STB_ODST_SHOULDER_TEXTURE);
   STB_SPECIALTY_VEST_VARIANT(STB_62_V_M43D_BREACHER_4_1_Var1,TCP_V_M43D_BREACHER_4_1_Black,"[62nd] M43D Breacher 4-1 Armor (Var 1)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var1_CO.paa",STB_BREACHER_SHOULDER_TEXTURE);
   STB_SPECIALTY_VEST_VARIANT(STB_62_V_M43D_BREACHER_4_2_Var1,TCP_V_M43D_BREACHER_4_2_Black,"[62nd] M43D Breacher 4-2 Armor (Var 1)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var1_CO.paa",STB_BREACHER_SHOULDER_TEXTURE);

   STB_ODST_VEST_VARIANT(STB_62_V_M43D_ODST_4_Var2,TCP_V_M43D_ODST_4_Black,"[62nd] M43D ODST 4 Armor (Var 2)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var2_CO.paa",STB_ODST_SHOULDER_TEXTURE);
   STB_SPECIALTY_VEST_VARIANT(STB_62_V_M43D_BREACHER_4_Var2,TCP_V_M43D_BREACHER_4_Black,"[62nd] M43D Breacher 4 Armor (Var 2)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var2_CO.paa",STB_BREACHER_SHOULDER_TEXTURE);
   STB_SPECIALTY_VEST_VARIANT(STB_62_V_M43D_SHARPSHOOTER_4_Var2,TCP_V_M43D_SHARPSHOOTER_4_Black,"[62nd] M43D Sharpshooter 4 Armor (Var 2)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var2_CO.paa",STB_SHARPSHOOTER_SHOULDER_TEXTURE);
   STB_ODST_VEST_VARIANT(STB_62_V_M43D_ODST_4_1_Var2,TCP_V_M43D_ODST_4_1_Black,"[62nd] M43D ODST 4-1 Armor (Var 2)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var2_CO.paa",STB_ODST_SHOULDER_TEXTURE);
   STB_ODST_VEST_VARIANT(STB_62_V_M43D_ODST_4_2_Var2,TCP_V_M43D_ODST_4_2_Black,"[62nd] M43D ODST 4-2 Armor (Var 2)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var2_CO.paa",STB_ODST_SHOULDER_TEXTURE);
   STB_SPECIALTY_VEST_VARIANT(STB_62_V_M43D_BREACHER_4_1_Var2,TCP_V_M43D_BREACHER_4_1_Black,"[62nd] M43D Breacher 4-1 Armor (Var 2)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var2_CO.paa",STB_BREACHER_SHOULDER_TEXTURE);
   STB_SPECIALTY_VEST_VARIANT(STB_62_V_M43D_BREACHER_4_2_Var2,TCP_V_M43D_BREACHER_4_2_Black,"[62nd] M43D Breacher 4-2 Armor (Var 2)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var2_CO.paa",STB_BREACHER_SHOULDER_TEXTURE);

   STB_ODST_VEST_VARIANT(STB_62_V_M43D_ODST_4_Var3,TCP_V_M43D_ODST_4_Black,"[62nd] M43D ODST 4 Armor (Var 3)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var3_CO.paa",STB_ODST_SHOULDER_TEXTURE);
   STB_SPECIALTY_VEST_VARIANT(STB_62_V_M43D_BREACHER_4_Var3,TCP_V_M43D_BREACHER_4_Black,"[62nd] M43D Breacher 4 Armor (Var 3)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var3_CO.paa",STB_BREACHER_SHOULDER_TEXTURE);
   STB_SPECIALTY_VEST_VARIANT(STB_62_V_M43D_SHARPSHOOTER_4_Var3,TCP_V_M43D_SHARPSHOOTER_4_Black,"[62nd] M43D Sharpshooter 4 Armor (Var 3)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var3_CO.paa",STB_SHARPSHOOTER_SHOULDER_TEXTURE);
   STB_ODST_VEST_VARIANT(STB_62_V_M43D_ODST_4_1_Var3,TCP_V_M43D_ODST_4_1_Black,"[62nd] M43D ODST 4-1 Armor (Var 3)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var3_CO.paa",STB_ODST_SHOULDER_TEXTURE);
   STB_ODST_VEST_VARIANT(STB_62_V_M43D_ODST_4_2_Var3,TCP_V_M43D_ODST_4_2_Black,"[62nd] M43D ODST 4-2 Armor (Var 3)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var3_CO.paa",STB_ODST_SHOULDER_TEXTURE);
   STB_SPECIALTY_VEST_VARIANT(STB_62_V_M43D_BREACHER_4_1_Var3,TCP_V_M43D_BREACHER_4_1_Black,"[62nd] M43D Breacher 4-1 Armor (Var 3)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var3_CO.paa",STB_BREACHER_SHOULDER_TEXTURE);
   STB_SPECIALTY_VEST_VARIANT(STB_62_V_M43D_BREACHER_4_2_Var3,TCP_V_M43D_BREACHER_4_2_Black,"[62nd] M43D Breacher 4-2 Armor (Var 3)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var3_CO.paa",STB_BREACHER_SHOULDER_TEXTURE);

   STB_ODST_VEST_VARIANT(STB_62_V_M43D_ODST_4_Var4,TCP_V_M43D_ODST_4_Black,"[62nd] M43D ODST 4 Armor (Var 4)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var4_CO.paa",STB_ODST_SHOULDER_TEXTURE);
   STB_SPECIALTY_VEST_VARIANT(STB_62_V_M43D_BREACHER_4_Var4,TCP_V_M43D_BREACHER_4_Black,"[62nd] M43D Breacher 4 Armor (Var 4)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var4_CO.paa",STB_BREACHER_SHOULDER_TEXTURE);
   STB_SPECIALTY_VEST_VARIANT(STB_62_V_M43D_SHARPSHOOTER_4_Var4,TCP_V_M43D_SHARPSHOOTER_4_Black,"[62nd] M43D Sharpshooter 4 Armor (Var 4)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var4_CO.paa",STB_SHARPSHOOTER_SHOULDER_TEXTURE);
   STB_ODST_VEST_VARIANT(STB_62_V_M43D_ODST_4_1_Var4,TCP_V_M43D_ODST_4_1_Black,"[62nd] M43D ODST 4-1 Armor (Var 4)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var4_CO.paa",STB_ODST_SHOULDER_TEXTURE);
   STB_ODST_VEST_VARIANT(STB_62_V_M43D_ODST_4_2_Var4,TCP_V_M43D_ODST_4_2_Black,"[62nd] M43D ODST 4-2 Armor (Var 4)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var4_CO.paa",STB_ODST_SHOULDER_TEXTURE);
   STB_SPECIALTY_VEST_VARIANT(STB_62_V_M43D_BREACHER_4_1_Var4,TCP_V_M43D_BREACHER_4_1_Black,"[62nd] M43D Breacher 4-1 Armor (Var 4)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var4_CO.paa",STB_BREACHER_SHOULDER_TEXTURE);
   STB_SPECIALTY_VEST_VARIANT(STB_62_V_M43D_BREACHER_4_2_Var4,TCP_V_M43D_BREACHER_4_2_Black,"[62nd] M43D Breacher 4-2 Armor (Var 4)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Var4_CO.paa",STB_BREACHER_SHOULDER_TEXTURE);

   STB_ODST_VEST_VARIANT(STB_62_V_M43D_ODST_4_Corpsman,TCP_V_M43D_ODST_4_Black,"[62nd] M43D ODST 4 Armor (Corpsman)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_Corpsman_CO.paa","\z\62stb\addons\62stb_armor\textures\shoulder\vest_Shoulders_ODST_Corpsman_CO.paa");
   STB_ODST_VEST_VARIANT(STB_62_V_M43D_ODST_4_NCO,TCP_V_M43D_ODST_4_Black,"[62nd] M43D ODST 4 Armor (NCO)","\z\62stb\addons\62stb_armor\textures\vest\vest_M43D_NCO_CO.paa","\z\62stb\addons\62stb_armor\textures\shoulder\vest_Shoulders_ODST_NCO_CO.paa");
};

class CfgVehicles
{
   class TCP_Headgear_H_Helmet_ECH55D_Black_Blue;
   class TCP_Headgear_H_Helmet_ECH55D_Black_Blue_DP;
   class TCP_Headgear_H_Helmet_ECH55D_Black_Green;
   class TCP_Headgear_H_Helmet_ECH55D_Black_Green_DP;
   class TCP_Headgear_H_Helmet_ECH55D_Black_Gold;
   class TCP_Headgear_H_Helmet_ECH55D_Black_Gold_DP;

   STB_HELMET_HOLDER(STB_62_Headgear_H_Helmet_ECH55D_Var1,STB_62_Headgear_H_Helmet_ECH55D_Var1_DP,TCP_Headgear_H_Helmet_ECH55D_Black_Blue,TCP_Headgear_H_Helmet_ECH55D_Black_Blue_DP,"STB_62_H_Helmet_ECH55D_Var1","STB_62_H_Helmet_ECH55D_Var1_DP","[62nd] ECH55D Helmet (Var 1)","[62nd] ECH55D Helmet (Var 1, DP)");
   STB_HELMET_HOLDER(STB_62_Headgear_H_Helmet_ECH55D_Var2,STB_62_Headgear_H_Helmet_ECH55D_Var2_DP,TCP_Headgear_H_Helmet_ECH55D_Black_Blue,TCP_Headgear_H_Helmet_ECH55D_Black_Blue_DP,"STB_62_H_Helmet_ECH55D_Var2","STB_62_H_Helmet_ECH55D_Var2_DP","[62nd] ECH55D Helmet (Var 2)","[62nd] ECH55D Helmet (Var 2, DP)");
   STB_HELMET_HOLDER(STB_62_Headgear_H_Helmet_ECH55D_Var3,STB_62_Headgear_H_Helmet_ECH55D_Var3_DP,TCP_Headgear_H_Helmet_ECH55D_Black_Blue,TCP_Headgear_H_Helmet_ECH55D_Black_Blue_DP,"STB_62_H_Helmet_ECH55D_Var3","STB_62_H_Helmet_ECH55D_Var3_DP","[62nd] ECH55D Helmet (Var 3)","[62nd] ECH55D Helmet (Var 3, DP)");
   STB_HELMET_HOLDER(STB_62_Headgear_H_Helmet_ECH55D_Var4,STB_62_Headgear_H_Helmet_ECH55D_Var4_DP,TCP_Headgear_H_Helmet_ECH55D_Black_Blue,TCP_Headgear_H_Helmet_ECH55D_Black_Blue_DP,"STB_62_H_Helmet_ECH55D_Var4","STB_62_H_Helmet_ECH55D_Var4_DP","[62nd] ECH55D Helmet (Var 4)","[62nd] ECH55D Helmet (Var 4, DP)");
   STB_HELMET_HOLDER(STB_62_Headgear_H_Helmet_ECH55D_Corpsman,STB_62_Headgear_H_Helmet_ECH55D_Corpsman_DP,TCP_Headgear_H_Helmet_ECH55D_Black_Green,TCP_Headgear_H_Helmet_ECH55D_Black_Green_DP,"STB_62_H_Helmet_ECH55D_Corpsman","STB_62_H_Helmet_ECH55D_Corpsman_DP","[62nd] ECH55D Helmet (Corpsman)","[62nd] ECH55D Helmet (Corpsman, DP)");
   STB_HELMET_HOLDER(STB_62_Headgear_H_Helmet_ECH55D_NCO,STB_62_Headgear_H_Helmet_ECH55D_NCO_DP,TCP_Headgear_H_Helmet_ECH55D_Black_Gold,TCP_Headgear_H_Helmet_ECH55D_Black_Gold_DP,"STB_62_H_Helmet_ECH55D_NCO","STB_62_H_Helmet_ECH55D_NCO_DP","[62nd] ECH55D Helmet (NCO)","[62nd] ECH55D Helmet (NCO, DP)");
};

class XtdGearModels
{
   class CfgWeapons
   {
      class STB_62_M43D_Enlisted
      {
         label = "[62nd] M43D Enlisted";
         author = "62nd STB";
         options[] = {"color","shoulders","collar"};
         class color
         {
            label = "Color";
            values[] = {"Var1","Var2","Var3","Var4"};
            class Var1 { label = "Var 1"; };
            class Var2 { label = "Var 2"; };
            class Var3 { label = "Var 3"; };
            class Var4 { label = "Var 4"; };
         };
         class shoulders
         {
            label = "Shoulders";
            values[] = {"ODST","BREACHER","SHARPSHOOTER"};
            class ODST { label = "ODST"; };
            class BREACHER { label = "Breacher"; };
            class SHARPSHOOTER { label = "Sharpshooter"; };
         };
         class collar
         {
            label = "Collar";
            values[] = {"None","Flak","Armored"};
            class None { label = "None"; };
            class Flak { label = "Flak"; };
            class Armored { label = "Armored"; };
         };
      };

      class STB_62_M43D_Corpsman
      {
         label = "[62nd] M43D Corpsman";
         author = "62nd STB";
         options[] = {"role"};
         class role
         {
            label = "Role";
            values[] = {"Corpsman"};
            class Corpsman { label = "Corpsman"; };
         };
      };

      class STB_62_M43D_NCO
      {
         label = "[62nd] M43D NCO";
         author = "62nd STB";
         options[] = {"role"};
         class role
         {
            label = "Role";
            values[] = {"NCO"};
            class NCO { label = "NCO"; };
         };
      };
   };
};

class XtdGearInfos
{
   class CfgWeapons
   {
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_ODST_4_Var1,"Var1","ODST","None");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_ODST_4_1_Var1,"Var1","ODST","Flak");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_ODST_4_2_Var1,"Var1","ODST","Armored");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_BREACHER_4_Var1,"Var1","BREACHER","None");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_BREACHER_4_1_Var1,"Var1","BREACHER","Flak");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_BREACHER_4_2_Var1,"Var1","BREACHER","Armored");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_SHARPSHOOTER_4_Var1,"Var1","SHARPSHOOTER","None");

      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_ODST_4_Var2,"Var2","ODST","None");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_ODST_4_1_Var2,"Var2","ODST","Flak");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_ODST_4_2_Var2,"Var2","ODST","Armored");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_BREACHER_4_Var2,"Var2","BREACHER","None");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_BREACHER_4_1_Var2,"Var2","BREACHER","Flak");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_BREACHER_4_2_Var2,"Var2","BREACHER","Armored");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_SHARPSHOOTER_4_Var2,"Var2","SHARPSHOOTER","None");

      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_ODST_4_Var3,"Var3","ODST","None");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_ODST_4_1_Var3,"Var3","ODST","Flak");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_ODST_4_2_Var3,"Var3","ODST","Armored");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_BREACHER_4_Var3,"Var3","BREACHER","None");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_BREACHER_4_1_Var3,"Var3","BREACHER","Flak");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_BREACHER_4_2_Var3,"Var3","BREACHER","Armored");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_SHARPSHOOTER_4_Var3,"Var3","SHARPSHOOTER","None");

      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_ODST_4_Var4,"Var4","ODST","None");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_ODST_4_1_Var4,"Var4","ODST","Flak");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_ODST_4_2_Var4,"Var4","ODST","Armored");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_BREACHER_4_Var4,"Var4","BREACHER","None");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_BREACHER_4_1_Var4,"Var4","BREACHER","Flak");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_BREACHER_4_2_Var4,"Var4","BREACHER","Armored");
      STB_XTD_ENLISTED_INFO(STB_62_V_M43D_SHARPSHOOTER_4_Var4,"Var4","SHARPSHOOTER","None");

      class STB_62_V_M43D_ODST_4_Corpsman
      {
         model = "STB_62_M43D_Corpsman";
         role = "Corpsman";
      };
      class STB_62_V_M43D_ODST_4_NCO
      {
         model = "STB_62_M43D_NCO";
         role = "NCO";
      };
   };
};

/*
   Legacy test classes (disabled for possible reuse).

   class STB_62_H_Helmet_ECH55D_Test: TCP_H_Helmet_ECH55D_Black_Blue
   {
      author = "62nd STB";
      displayName = "[62nd] ECH55D Helmet (Test)";
      TCP_visrClasses[] = {"STB_62_H_Helmet_ECH55D_Test","STB_62_H_Helmet_ECH55D_Test_DP"};
      hiddenSelectionsTextures[] =
      {
         "\z\62stb\addons\62stb_armor\textures\helmet\TEST.paa",
         "\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Blue\helmet_ECH55D_Visor_CO.paa",
         STB_DECAL_TEXTURE
      };
   };

   class STB_62_H_Helmet_ECH55D_Test_DP: TCP_H_Helmet_ECH55D_Black_Blue_DP
   {
      author = "62nd STB";
      displayName = "[62nd] ECH55D Helmet (Test, DP)";
      TCP_visrClasses[] = {"STB_62_H_Helmet_ECH55D_Test","STB_62_H_Helmet_ECH55D_Test_DP"};
      hiddenSelectionsTextures[] =
      {
         "\z\62stb\addons\62stb_armor\textures\helmet\TEST.paa",
         "\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Blue\helmet_ECH55D_Visor_CA.paa",
         STB_DECAL_TEXTURE
      };
   };

   class STB_62_V_M43D_ODST_Test: TCP_V_M43D_ODST_1_Black
   {
      author = "62nd STB";
      displayName = "[62nd] M43D ODST Armor (Test)";
      hiddenSelectionsTextures[] =
      {
         STB_M43A_BASE_TEXTURE,
         STB_ODST_SHOULDER_TEXTURE,
         "\z\62stb\addons\62stb_armor\textures\vest\M43D_ODST_TEST.paa",
         STB_M43A_LOWER_TEXTURE,
         STB_DECAL_TEXTURE
      };
   };

   The matching legacy CfgVehicles holders were:
   STB_62_Headgear_H_Helmet_ECH55D_Test
   STB_62_Headgear_H_Helmet_ECH55D_Test_DP
*/

#undef STB_SPECIALTY_VEST_VARIANT
#undef STB_ODST_VEST_VARIANT
#undef STB_XTD_ENLISTED_INFO
#undef STB_HELMET_HOLDER
#undef STB_HELMET_VARIANT
#undef STB_SHARPSHOOTER_SHOULDER_TEXTURE
#undef STB_BREACHER_SHOULDER_TEXTURE
#undef STB_ODST_SHOULDER_TEXTURE
#undef STB_M43A_LOWER_TEXTURE
#undef STB_M43A_MIDDLE_TEXTURE
#undef STB_M43A_BASE_TEXTURE
#undef STB_DECAL_TEXTURE
