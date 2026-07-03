class CfgPatches
{
   class STB_main
   {
      name = "62nd STB Armory - Main";
      units[] = {};
      weapons[] = {};
      requiredVersion = 2.18;
      requiredAddons[] = {};
      author = "62nd STB";
   };
};

class CfgFactionClasses
{
   class 62nd
   {
      displayName = "62nd STB";
      priority = 2;
      side = 1;
   };

   class 62nd_BLUE_62nd_F
   {
      displayName = "62nd STB";
      priority = 2;
      side = 1;
   };

   class 62nd_Ins
   {
      displayName = "62nd Insurrectionists";
      priority = 2;
      side = 0;
   };

   class 62nd_CMA
   {
      displayName = "62nd CMA";
      priority = 2;
      side = 1;
   };
};

class CfgEditorCategories
{
   class 62nd
   {
      displayName = "62nd STB";
   };

   class Turrets
   {
      displayName = "62nd Turrets";
   };

   class 62nd_Ins
   {
      displayName = "62nd Insurrectionists";
   };

   class 62nd_CMA
   {
      displayName = "62nd CMA";
   };
};

class CfgEditorSubcategories
{
   class 62nd_supplies
   {
      displayName = "Supplies";
   };

   class 62nd_Turrets
   {
      displayName = "Turrets";
   };

   class 62nd_INS_Turrets
   {
      displayName = "Insurrectionist Turrets";
   };

   class 62nd_CMA_Turrets
   {
      displayName = "CMA Turrets";
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
