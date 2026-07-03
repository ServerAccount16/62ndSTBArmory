#include "config_macros.hpp"

/*
  Copied from 12th MEU config.cpp as I am the original author.
  Mod: 12th MEU (12th Marine Expeditionary Unit)
  ==============================================================================
  config.cpp

  This file configures all custom turret assets for the 62nd MEU mod. 
  We use a macro (DEFINE_TURRET) to reduce repetitive definitions for multiple
  turret variants (UNSC, Insurrectionist, CMA, etc.).

  Key Points:
    - CfgPatches: Identifies this addon, lists requiredAddons, and enumerates 
      the units it introduces.
    - Turret base classes: We reference OPTRE turret classes (e.g., OPTRE_Static_M41).
      Make sure your requiredAddons[] includes the mod that provides these base classes.
    - DEFINE_TURRET macro: Simplifies creation of new turret classes. It sets scope, 
      displayName, faction, etc.

  Macro usage example:
    DEFINE_TURRET(62nd_Static_M41, 
                  OPTRE_Static_M41, 
                  "[62nd] M41 LAAG Turret", 
                  "62nd", 
                  "62nd", 
                  "62nd_Turrets")

  expands to:
    class 62nd_Static_M41 : OPTRE_Static_M41 {
      scope = 2;
      scopeCurator = 2;
      author = "Weber";
      displayName = "[62nd] M41 LAAG Turret";
      faction = "62nd";
      editorCategory = "62nd";
      editorSubcategory = "62nd_Turrets";
      armor = 200;
    };
  ==============================================================================
*/

class CfgPatches {
  class 62nd_Weapons_Turrets {
    /*
      units[]: This lists all classes recognized as units by the game (placeable
               in editor). If you add or remove turret classes, update them here.
    */
    units[] = {
      "62nd_Static_M41",
      "62nd_Static_Gauss",
      "62nd_Static_ATGM",
      "62nd_Static_AA",
      "62nd_Static_M41_Ins",
      "62nd_Static_AA_Ins",
      "62nd_Static_ATGM_Ins",
      "62nd_Static_Gauss_CMA",
      "62nd_Static_M41_CMA",
      "62nd_Static_AA_CMA",
      "62nd_Static_ATGM_CMA"
    };
    weapons[] = {};
    ammo[] = {};
    magazines[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
      "OPTRE_Weapons_Turrets",
      "A3_Weapons_F",
      "A3_Weapons_F_Exp"
    /*
      requiredAddons: The mod will not load unless these are present.
      - OPTRE_Weapons_Turrets: Contains the base turret classes 
        (OPTRE_Static_M41, etc.)
      - A3_Weapons_F, A3_Weapons_F_Exp: Typically needed for certain inherited
        parameters or references in Arma 3.
    */
    };
  };
};

// -----------------------------------------------------------------------------
//  Pre-declare base classes from OPTRE so we can inherit from them
// -----------------------------------------------------------------------------
class OPTRE_Static_M41;
class OPTRE_Static_Gauss;
class OPTRE_Static_ATGM;
class OPTRE_Static_AA;
class OPTRE_Static_Base_Turret;
class OPTRE_Static_M41_Ins;
class OPTRE_Static_AA_Ins;
class OPTRE_Static_ATGM_Ins;
class OPTRE_Static_Gauss_Ins;
class OPTRE_Static_Gauss_CMA;
class OPTRE_Static_M41_CMA;
class OPTRE_Static_AA_CMA;
class OPTRE_Static_ATGM_CMA;

// -----------------------------------------------------------------------------
//  Macro: DEFINE_TURRET
//  Creates a new turret class inheriting from a base class, with scope, display, 
//  faction, and armor set.
// -----------------------------------------------------------------------------
#define DEFINE_TURRET(CLASSNAME, BASECLASS, DISPLAY, FACTION, CATEGORY, SUBCATEGORY) \
  class CLASSNAME : BASECLASS { \
    scope = 2; \
    scopeCurator = 2; \
    author = "Weber"; \
    displayName = DISPLAY; \
    faction = FACTION; \
    editorCategory = CATEGORY; \
    editorSubcategory = SUBCATEGORY; \
    armor = 100; \
  };
  
// -----------------------------------------------------------------------------
//  CfgVehicles
//  Where we define actual turret classes using our macro. 
// -----------------------------------------------------------------------------
class CfgVehicles {
  // -------------------- UNSC Turrets --------------------
  DEFINE_TURRET(62nd_Static_M41, OPTRE_Static_M41, "[62nd] M41 LAAG Turret", "62nd_BLUE_62nd_F", "Turrets", "62nd_Turrets")
  DEFINE_TURRET(62nd_Static_Gauss, OPTRE_Static_Gauss, "[62nd] M41 Gauss Turret", "62nd_BLUE_62nd_F", "Turrets", "62nd_Turrets")
  DEFINE_TURRET(62nd_Static_ATGM, OPTRE_Static_ATGM, "[62nd] M41 ATGM Turret", "62nd_BLUE_62nd_F", "Turrets", "62nd_Turrets")
  DEFINE_TURRET(62nd_Static_AA, OPTRE_Static_AA, "[62nd] M41 AA Turret", "62nd_BLUE_62nd_F", "Turrets", "62nd_Turrets")

  // ----------------- Insurrectionist Turrets -----------------
  DEFINE_TURRET(62nd_Static_M41_Ins, OPTRE_Static_M41_Ins, "[62nd] M41 LAAG Turret (Insurrectionist)", "62nd_Ins", "62nd_Ins", "62nd_INS_Turrets")
  DEFINE_TURRET(62nd_Static_Gauss_Ins, OPTRE_Static_Gauss_Ins, "[62nd] M41 Gauss Turret (Insurrectionist)", "62nd_Ins", "62nd_Ins", "62nd_INS_Turrets")
  DEFINE_TURRET(62nd_Static_ATGM_Ins, OPTRE_Static_ATGM_Ins, "[62nd] M41 ATGM Turret (Insurrectionist)", "62nd_Ins", "62nd_Ins", "62nd_INS_Turrets")
  DEFINE_TURRET(62nd_Static_AA_Ins, OPTRE_Static_AA_Ins, "[62nd] M41 AA Turret (Insurrectionist)", "62nd_Ins", "62nd_Ins", "62nd_INS_Turrets")

  // -------------------- CMA Turrets --------------------
  DEFINE_TURRET(62nd_Static_M41_CMA, OPTRE_Static_M41_CMA, "[62nd] M41 LAAG Turret (CMA)", "62nd_CMA", "62nd_CMA", "62nd_CMA_Turrets")
  DEFINE_TURRET(62nd_Static_Gauss_CMA, OPTRE_Static_Gauss_CMA, "[62nd] M41 Gauss Turret (CMA)", "62nd_CMA", "62nd_CMA", "62nd_CMA_Turrets")
  DEFINE_TURRET(62nd_Static_ATGM_CMA, OPTRE_Static_ATGM_CMA, "[62nd] M41 ATGM Turret (CMA)", "62nd_CMA", "62nd_CMA", "62nd_CMA_Turrets")
  DEFINE_TURRET(62nd_Static_AA_CMA, OPTRE_Static_AA_CMA, "[62nd] M41 AA Turret (CMA)", "62nd_CMA", "62nd_CMA", "62nd_CMA_Turrets")
};