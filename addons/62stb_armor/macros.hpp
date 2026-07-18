#define STB_DECAL_TEXTURE "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
#define STB_M43A_BASE_TEXTURE "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa"
#define STB_M43A_MIDDLE_TEXTURE "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa"
#define STB_M43A_LOWER_TEXTURE "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa"
#define STB_ODST_SHOULDER_TEXTURE "\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_Shoulders_ODST_CO.paa"
#define STB_BREACHER_SHOULDER_TEXTURE "\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_Shoulders_BREACHER_CO.paa"
#define STB_SHARPSHOOTER_SHOULDER_TEXTURE "\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_Shoulders_SHARPSHOOTER_CO.paa"

#define STB_HELMET_VARIANT(CLASS,DP_CLASS,BASE,DP_BASE,CLASS_NAME,DP_CLASS_NAME,DISPLAY,DP_DISPLAY,TEXTURE,VISOR,VISOR_DP) \
   class CLASS: BASE \
   { \
      author = "62nd STB"; \
      displayName = DISPLAY; \
      TCP_visrClasses[] = {CLASS_NAME,DP_CLASS_NAME}; \
      hiddenSelectionsTextures[] = {TEXTURE,VISOR,STB_DECAL_TEXTURE}; \
   }; \
   class DP_CLASS: DP_BASE \
   { \
      author = "62nd STB"; \
      displayName = DP_DISPLAY; \
      TCP_visrClasses[] = {CLASS_NAME,DP_CLASS_NAME}; \
      hiddenSelectionsTextures[] = {TEXTURE,VISOR_DP,STB_DECAL_TEXTURE}; \
   }

#define STB_HELMET_HOLDER(CLASS,DP_CLASS,BASE,DP_BASE,ITEM_NAME,DP_ITEM_NAME,DISPLAY,DP_DISPLAY) \
   class CLASS: BASE \
   { \
      author = "62nd STB"; \
      displayName = DISPLAY; \
      class TransportItems \
      { \
         class Item \
         { \
            name = ITEM_NAME; \
            count = 1; \
         }; \
      }; \
   }; \
   class DP_CLASS: DP_BASE \
   { \
      author = "62nd STB"; \
      displayName = DP_DISPLAY; \
      scope = 1; \
      scopeCurator = 1; \
      class TransportItems \
      { \
         class Item \
         { \
            name = DP_ITEM_NAME; \
            count = 1; \
         }; \
      }; \
   }

#define STB_ODST_VEST_VARIANT(CLASS,BASE,DISPLAY,CHEST,SHOULDERS) \
   class CLASS: BASE \
   { \
      author = "62nd STB"; \
      displayName = DISPLAY; \
      class TCP_equipmentTypes \
      { \
         baseEquipment = #CLASS; \
      }; \
      hiddenSelectionsTextures[] = {STB_M43A_BASE_TEXTURE,SHOULDERS,CHEST,STB_M43A_MIDDLE_TEXTURE,STB_M43A_LOWER_TEXTURE,STB_DECAL_TEXTURE}; \
   }

#define STB_SPECIALTY_VEST_VARIANT(CLASS,BASE,DISPLAY,CHEST,SPECIALTY_SHOULDERS) \
   class CLASS: BASE \
   { \
      author = "62nd STB"; \
      displayName = DISPLAY; \
      class TCP_equipmentTypes \
      { \
         baseEquipment = #CLASS; \
      }; \
      hiddenSelectionsTextures[] = {STB_M43A_BASE_TEXTURE,STB_ODST_SHOULDER_TEXTURE,SPECIALTY_SHOULDERS,CHEST,STB_M43A_MIDDLE_TEXTURE,STB_M43A_LOWER_TEXTURE,STB_DECAL_TEXTURE}; \
   }

#define STB_XTD_ENLISTED_INFO(CLASS,COLOR,SHOULDERS,COLLAR) \
   class CLASS \
   { \
      model = "STB_62_M43D_Enlisted"; \
      color = COLOR; \
      shoulders = SHOULDERS; \
      collar = COLLAR; \
   }
