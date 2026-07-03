class CfgPatches
{
   class STB_balance_vehicles
   {
      units[] = {};
      weapons[] = {};
      requiredAddons[] =
      {
         "STB_main",
         "OPTRE_Vehicles",
         "OPTRE_Vehicles_Air_Falcon",
         "OPTRE_Vehicles_Hornet",
         "OPTRE_Vehicles_Sparrowhawk",
         "OPTRE_Vehicles_Pelican",
         "OPTRE_Vehicles_Bison",
         "OPTRE_Vehicles_Scorpion",
         "OPTRE_Vehicles_M808B2",
         "OPTRE_Vehicles_Misc",
         "OPTRE_Vehicles_Elephant",
         "Scythe",
         "Lance",
         "OPTRE_ACE_Compat",
         "DMNS_Vehicles_M511_Springbok",
         "DMNS_Vehicles_M808B",
         "DMNS_Armour",
         "QAV_Merkava",
         "OPTRE_Vehicles_M494",
         "OPTRE_Vehicles_Sabre",
         "TKE_Ext_Core_V",
         "tbd_d20_vanilla",
         "Splits_Vehicles_Air_Pelican",
         "DMNS_Shortsword_F"
      };
   };
};

class CfgVehicles
{
   /*
      TCP M41 HEAT reference: TCP_M_102mm_HEAT has hit = 95 and a Titan AT
      penetrator submunition. Global armor values below are scaled around the
      requested number of HEAT hits to kill or disable the vehicle.
   */

   class Heli_Light_01_base_F;
   class Helicopter_Base_H;
   class Car_F;
   class APC_Wheeled_01_base_F;
   class I_APC_Tracked_03_base_F;
   class B_MBT_01_cannon_F;
   class O_Truck_02_transport_F;
   class AAA_System_01_base_F;
   class Tank_F;
   class Plane_Base_F;
   class Plane_Fighter_01_Base_F;
   class B_Heli_Transport_01_F;
   class StaticMortar;
   class TKE_Ext_Heli_BASE;

   class OPTRE_falcon_base: Heli_Light_01_base_F
   {
      armor = 220;              // Falcon: 2 HEAT
      armorStructural = 3;
      damageResistance = 0.00555;
   };

   class OPTRE_Hornet_base: Helicopter_Base_H
   {
      armor = 330;              // Hornet: 1.5 HEAT; tested 1/1 at 220
      armorStructural = 3;
      damageResistance = 0.00555;
   };

   class OPTRE_AV22_Sparrowhawk_Base: Helicopter_Base_H
   {
      armor = 285;              // Sparrowhawk: 3 HEAT
      armorStructural = 3;
      damageResistance = 0.00555;
   };

   class OPTRE_Pelican_F: Helicopter_Base_H
   {
      armor = 195;              // Pelican: 4 HEAT; tested 5/5 at 245
      armorStructural = 3;
      damageResistance = 0.00555;
   };

   class OPTRE_M413_base: APC_Wheeled_01_base_F
   {
      armor = 760;              // Bison / M412 IFV: 2 HEAT; tested 1/1 at 380
      armorStructural = 3;
      damageResistance = 0.005;

      class HitPoints
      {
         class HitBody
         {
            armor = 4.5;
         };
      };
   };

   class OPTRE_M808B_base: B_MBT_01_cannon_F
   {
      armor = 760;              // Scorpion: 4 HEAT; tested 2/2 at 380
      armorStructural = 3.25;
      damageResistance = 0.0055;
      crewExplosionProtection = 0.65;
   };

   class OPTRE_M808B2: B_MBT_01_cannon_F
   {
      armor = 760;              // M808B2 / Sun Devil: 4 HEAT; tested 2/2 at 380
      armorStructural = 3.25;
      damageResistance = 0.0055;
      crewExplosionProtection = 0.65;
   };

   class OPTRE_m1015_mule_ins: O_Truck_02_transport_F
   {
      armor = 95;               // M1015 Mule: 1 HEAT
      armorStructural = 3;
      damageResistance = 0.005;
   };

   class OPTRE_Scythe: AAA_System_01_base_F
   {
      armor = 95;               // Scythe: 1 HEAT
      armorStructural = 2;
      damageResistance = 0.004;
   };

   class OPTRE_Lance: AAA_System_01_base_F
   {
      armor = 95;               // Lance: 1 HEAT
      armorStructural = 2;
      damageResistance = 0.004;
   };

   class OPTRE_M313_Base: Tank_F
   {
      armor = 855;              // Elephant: 6 HEAT; tested 8/8 at 1140
      armorStructural = 4;
      damageResistance = 0.01;
      crewExplosionProtection = 0.65;
   };

   class OPTRE_M494: I_APC_Tracked_03_base_F
   {
      armor = 570;              // Oryx: 3 HEAT
      armorStructural = 3.25;
      damageResistance = 0.0055;
      crewExplosionProtection = 0.65;
   };

   class OPTRE_Sabre_Base: Plane_Fighter_01_Base_F
   {
      armor = 570;              // Longsword / YSS-1000: 6 HEAT
      armorStructural = 3;
      damageResistance = 0.00555;
   };

   class qav_merkava_base: B_MBT_01_cannon_F
   {
      armor = 1150;             // Merkava: 3 HEAT; tested 2/2 at 770
      armorStructural = 3.25;
      damageResistance = 0.0055;
      crewExplosionProtection = 0.65;

      class HitPoints
      {
         class HitHull
         {
            armor = 5.4;
         };

         class HitEngine
         {
            armor = 2.4;
         };

         class HitFuel
         {
            armor = 1.8;
         };

         class HitLTrack
         {
            armor = -1950;
         };

         class HitRTrack
         {
            armor = -1950;
         };
      };
   };

   class qav_merkava_mk2D: qav_merkava_base
   {
      armor = 1150;             // Merkava: 3 HEAT; tested 2/2 at 770
      armorStructural = 3.25;
      damageResistance = 0.0055;
      crewExplosionProtection = 0.65;
   };

   class qav_merkava_mk3b: qav_merkava_base
   {
      armor = 1150;             // Merkava: 3 HEAT; tested 2/2 at 770
      armorStructural = 3.25;
      damageResistance = 0.0055;
      crewExplosionProtection = 0.65;
   };

   class TKE_Ext_Bearcat_BASE: APC_Wheeled_01_base_F
   {
      armor = 285;              // TC-15 Bearcat: 1.5 HEAT
      armorStructural = 3;
      damageResistance = 0.005;
      crewExplosionProtection = 0.65;
   };

   class TKE_Ext_Dragonfly_S: TKE_Ext_Heli_BASE
   {
      armor = 190;              // Dragonfly: 2 HEAT
      armorStructural = 3;
      damageResistance = 0.00555;
   };

   class TKE_Ext_Dragonfly_A: TKE_Ext_Dragonfly_S
   {
      armor = 190;              // Dragonfly: 2 HEAT
      armorStructural = 3;
      damageResistance = 0.00555;
   };

   class TKE_Ext_Dragonfly_T: TKE_Ext_Heli_BASE
   {
      armor = 190;              // Dragonfly / Locust: 2 HEAT
      armorStructural = 3;
      damageResistance = 0.00555;
   };

   class tbd_d20_vanilla: StaticMortar
   {
      armor = 95;               // D-20 M1955 vanilla: 1 HEAT
      armorStructural = 2;
      damageResistance = 0.004;
   };

   class Splits_Pelican_base: B_Heli_Transport_01_F
   {
      armor = 195;              // Foundries Pelican: 4 HEAT; tested 5/5 at 245
      armorStructural = 3;
      damageResistance = 0.00555;
   };

   class Dmns_Plane_01_base_F: Plane_Base_F
   {
      armor = 380;              // Shortsword: 4 HEAT
      armorStructural = 3;
      damageResistance = 0.00555;

      class HitPoints
      {
         class HitHull
         {
            armor = 2;
            explosionShielding = 3;
            name = "HitHull";
            passThrough = 1;
            visual = "Hit_Hull";
            radius = 0.3;
            minimalHit = 0.05;
            depends = "0";
            material = -1;
         };

         class HitEngine
         {
            armor = 2;
            explosionShielding = 3.5;
            name = "HitEngine";
            passThrough = 1;
            visual = "Hit_Engine";
            radius = 0.3;
            minimalHit = 0.05;
            depends = "0";
         };

         class HitAvionics
         {
            armor = 1.5;
            explosionShielding = 3.5;
            name = "HitAvionics";
            passThrough = 0.5;
            visual = "";
            radius = 0.2;
            minimalHit = 0.05;
            depends = "0";
         };

         class HitFuel
         {
            armor = 2.25;
            explosionShielding = 4;
            name = "HitFuel";
            passThrough = 0.8;
            visual = "";
            radius = 0.3;
            minimalHit = 0.1;
            depends = "0";
         };

         class HitFuel_Lead_Left
         {
            armor = 1;
            explosionShielding = 3;
            name = "HitFuel1_Leads";
            passThrough = 0;
            visual = "Hit_AileronL";
            radius = 0.13;
            minimalHit = 0.1;
         };

         class HitFuel_Lead_Right
         {
            armor = 1;
            explosionShielding = 3;
            name = "HitFuel2_leads";
            passThrough = 0;
            visual = "Hit_AileronR";
            radius = 0.13;
            minimalHit = 0.1;
         };

         class HitFuel_Left
         {
            armor = 1.25;
            explosionShielding = 5;
            name = "HitFuel1";
            passThrough = 0.2;
            visual = "Hit_Fuel2a";
            radius = 0.2;
            minimalHit = 0.1;
            depends = "HitFuel_Lead_Left";
         };

         class HitFuel_Right
         {
            armor = 1.25;
            explosionShielding = 5;
            name = "HitFuel2";
            passThrough = 0.2;
            visual = "Hit_Fuel2b";
            radius = 0.2;
            minimalHit = 0.1;
            depends = "HitFuel_Lead_Right";
         };

         class HitFuel2
         {
            armor = 2.25;       // Override inherited 999 aggregate fuel armor.
            depends = "0";
            name = "HitFuel2";
            visual = "";
            radius = 0.2;
            minimalHit = 0.1;
            explosionShielding = 1;
            passThrough = 1;
         };

         class HitGlass1
         {
            armor = 1.2;
            explosionShielding = 3;
            name = "HitGlass1";
            passThrough = 0;
            visual = "glass1";
            radius = 0.2;
            minimalHit = 0.1;
            depends = "0";
         };

         class HitGlass2
         {
            armor = 1.2;
            explosionShielding = 3;
            name = "HitGlass2";
            passThrough = 0;
            visual = "glass2";
            radius = 0.2;
            minimalHit = 0.1;
         };

         class HitGlass3
         {
            armor = 1.2;
            explosionShielding = 3;
            name = "HitGlass3";
            passThrough = 0;
            visual = "glass3";
            radius = 0.2;
            minimalHit = 0.1;
         };

         class HitLAileron_Link
         {
            armor = 1;
            explosionShielding = 3.5;
            name = "HitLAileron_Link";
            passThrough = 0;
            visual = "Hit_AileronL";
            radius = 0.09;
            minimalHit = 0.1;
            depends = "0";
         };

         class HitRAileron_Link
         {
            armor = 1;
            explosionShielding = 3.5;
            name = "HitRAileron_Link";
            passThrough = 0;
            visual = "Hit_AileronR";
            radius = 0.09;
            minimalHit = 0.1;
            depends = "0";
         };

         class HitLAileron
         {
            armor = 1;
            explosionShielding = 3;
            name = "HitLAileron";
            passThrough = 0.3;
            visual = "Hit_AileronL";
            radius = 0.2;
            minimalHit = 0.1;
            depends = "HitLAileron_Link";
         };

         class HitRAileron
         {
            armor = 1;
            explosionShielding = 3;
            name = "HitRAileron";
            passThrough = 0.3;
            visual = "Hit_AileronR";
            radius = 0.2;
            minimalHit = 0.1;
            depends = "HitRAileron_Link";
         };

         class HitLCRudder
         {
            armor = 1;
            explosionShielding = 3;
            name = "HitLCRudder";
            passThrough = 0.3;
            visual = "Hit_RudderC";
            radius = 0.2;
            minimalHit = 0.1;
            depends = "0";
         };

         class HitLCElevator
         {
            armor = 1;
            explosionShielding = 3;
            name = "HitLCElevator";
            passThrough = 0.3;
            visual = "Hit_ElevatorL";
            radius = 0.2;
            minimalHit = 0.1;
            depends = "0";
         };

         class HitRElevator
         {
            armor = 1;
            explosionShielding = 3;
            name = "HitRElevator";
            passThrough = 0.3;
            visual = "Hit_ElevatorR";
            radius = 0.2;
            minimalHit = 0.1;
            depends = "0";
         };
      };
   };

   class DMNS_Shortsword_01_F: Dmns_Plane_01_base_F
   {
      armor = 380;              // Shortsword: 4 HEAT
      armorStructural = 3;
      damageResistance = 0.00555;

      class HitPoints
      {
         class HitHull
         {
            armor = 2;
            explosionShielding = 1;
            name = "HitHull";
            passThrough = 1;
            visual = "Hit_Hull";
            radius = 0.5;
            minimalHit = 0.01;
            depends = "0";
            material = -1;
         };

         class HitEngine
         {
            armor = 2;
            explosionShielding = 1;
            name = "HitEngine";
            passThrough = 1;
            visual = "Hit_Engine";
            radius = 0.5;
            minimalHit = 0.01;
            depends = "0";
         };

         class HitAvionics
         {
            armor = 1.5;
            explosionShielding = 1;
            name = "HitAvionics";
            passThrough = 0.5;
            visual = "";
            radius = 0.3;
            minimalHit = 0.01;
            depends = "0";
         };

         class HitFuel
         {
            armor = 2.25;
            explosionShielding = 1;
            name = "HitFuel";
            passThrough = 1;
            visual = "";
            radius = 0.5;
            minimalHit = 0.01;
            depends = "0";
         };

         class HitFuel_Lead_Left
         {
            armor = 1;
            explosionShielding = 1;
            name = "HitFuel1_Leads";
            passThrough = 0.5;
            visual = "Hit_AileronL";
            radius = 0.2;
            minimalHit = 0.01;
         };

         class HitFuel_Lead_Right
         {
            armor = 1;
            explosionShielding = 1;
            name = "HitFuel2_leads";
            passThrough = 0.5;
            visual = "Hit_AileronR";
            radius = 0.2;
            minimalHit = 0.01;
         };

         class HitFuel_Left
         {
            armor = 1.25;
            explosionShielding = 1;
            name = "HitFuel1";
            passThrough = 0.5;
            visual = "Hit_Fuel2a";
            radius = 0.3;
            minimalHit = 0.01;
            depends = "HitFuel_Lead_Left";
         };

         class HitFuel_Right
         {
            armor = 1.25;
            explosionShielding = 1;
            name = "HitFuel2";
            passThrough = 0.5;
            visual = "Hit_Fuel2b";
            radius = 0.3;
            minimalHit = 0.01;
            depends = "HitFuel_Lead_Right";
         };

         class HitFuel2
         {
            armor = 2.25;
            depends = "0";
            name = "HitFuel2";
            visual = "";
            radius = 0.3;
            minimalHit = 0.01;
            explosionShielding = 1;
            passThrough = 1;
         };
      };
   };

   class DMNS_M511_Springbok_base: Car_F
   {
      armor = 760;              // Springbok: 3 HEAT; tested 3/4 at 855
      armorStructural = 3;
      damageResistance = 0.005;
   };

   class DMNS_M511_Springbok_APC: DMNS_M511_Springbok_base
   {
      armor = 760;              // Springbok: 3 HEAT; tested 3/4 at 855
      armorStructural = 3;
      damageResistance = 0.005;
   };

   class DMNS_M511_Springbok_MGS: DMNS_M511_Springbok_base
   {
      armor = 760;              // Springbok: 3 HEAT; tested 3/4 at 855
      armorStructural = 3;
      damageResistance = 0.005;
   };

   class DMNS_M511_Springbok_AA: DMNS_M511_Springbok_base
   {
      armor = 760;              // Springbok: 3 HEAT; tested 3/4 at 855
      armorStructural = 3;
      damageResistance = 0.005;
   };

   class DMNS_M511_Springbok_IFV: DMNS_M511_Springbok_base
   {
      armor = 760;              // Springbok: 3 HEAT; tested 3/4 at 855
      armorStructural = 3;
      damageResistance = 0.005;
   };

   class DMNS_M808B: B_MBT_01_cannon_F
   {
      armor = 760;              // Foundries Scorpion: 4 HEAT
      armorStructural = 3.25;
      damageResistance = 0.0055;
      crewExplosionProtection = 0.65;
   };
};
