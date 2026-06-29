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

class CfgUIColors
{
   class IGUI
   {
      class Presets
      {
         class STB_PresetBlack
         {
            displayName = "62nd Black";
            class Variables
            {
               BCG_RGB[] = {0.08,0.09,0.1,0.35};
               TEXT_RGB[] = {0.68,0.72,0.76,0.88};
               WARNING_RGB[] = {1,0.72,0.1,0.95};
               ERROR_RGB[] = {1,0.08,0.06,0.95};
               TACTPING_RGB[] = {1,0.88,0.36,0.95};
            };
         };
         class STB_PresetBlue
         {
            displayName = "62nd Blue";
            class Variables
            {
               BCG_RGB[] = {0.09,0.11,0.15,0.35};
               TEXT_RGB[] = {0.48,0.66,0.84,0.88};
               WARNING_RGB[] = {1,0.72,0.1,0.95};
               ERROR_RGB[] = {1,0.08,0.06,0.95};
               TACTPING_RGB[] = {1,0.88,0.36,0.95};
            };
         };
         class STB_PresetGold
         {
            displayName = "62nd Gold";
            class Variables
            {
               BCG_RGB[] = {0.12,0.11,0.06,0.35};
               TEXT_RGB[] = {0.86,0.68,0.22,0.88};
               WARNING_RGB[] = {1,0.74,0.12,0.95};
               ERROR_RGB[] = {1,0.08,0.06,0.95};
               TACTPING_RGB[] = {1,0.88,0.36,0.95};
            };
         };
         class STB_PresetGreen
         {
            displayName = "62nd Green";
            class Variables
            {
               BCG_RGB[] = {0.1,0.15,0.13,0.35};
               TEXT_RGB[] = {0.42,0.68,0.58,0.88};
               WARNING_RGB[] = {1,0.72,0.1,0.95};
               ERROR_RGB[] = {1,0.08,0.06,0.95};
               TACTPING_RGB[] = {1,0.88,0.36,0.95};
            };
         };
         class STB_PresetPurple
         {
            displayName = "62nd Purple";
            class Variables
            {
               BCG_RGB[] = {0.11,0.08,0.14,0.35};
               TEXT_RGB[] = {0.7,0.48,0.82,0.88};
               WARNING_RGB[] = {1,0.72,0.1,0.95};
               ERROR_RGB[] = {1,0.08,0.06,0.95};
               TACTPING_RGB[] = {1,0.88,0.36,0.95};
            };
         };
         class STB_PresetRed
         {
            displayName = "62nd Red";
            class Variables
            {
               BCG_RGB[] = {0.13,0.08,0.08,0.35};
               TEXT_RGB[] = {0.82,0.34,0.34,0.88};
               WARNING_RGB[] = {1,0.72,0.1,0.95};
               ERROR_RGB[] = {1,0.06,0.06,0.95};
               TACTPING_RGB[] = {1,0.88,0.36,0.95};
            };
         };
         class STB_PresetSilver
         {
            displayName = "62nd Silver";
            class Variables
            {
               BCG_RGB[] = {0.1,0.1,0.11,0.35};
               TEXT_RGB[] = {0.8,0.82,0.86,0.88};
               WARNING_RGB[] = {1,0.72,0.1,0.95};
               ERROR_RGB[] = {1,0.08,0.06,0.95};
               TACTPING_RGB[] = {1,0.88,0.36,0.95};
            };
         };
      };
   };
};
