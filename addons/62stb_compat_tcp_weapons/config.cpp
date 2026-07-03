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
         "ace_huntir"
      };
      author = "62nd STB";
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
