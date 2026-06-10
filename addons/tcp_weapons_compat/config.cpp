class CfgPatches
{
   class STB_tcp_weapons_compat
   {
      units[] = {};
      weapons[] = {};
      requiredVersion = 2.18;
      requiredAddons[] =
      {
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
      STB_tcp_weapons_compat[] =
      {
         "ACE_HuntIR_M203"
      };
   };
};
