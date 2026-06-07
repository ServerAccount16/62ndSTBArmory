class CfgPatches
{
   class g_vehicle_balance
   {
      units[] = {};
      weapons[] = {};
      requiredAddons[] =
      {
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
         "QAV_Merkava"
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
   class APC_Wheeled_01_base_F;
   class B_MBT_01_cannon_F;
   class O_Truck_02_transport_F;
   class AAA_System_01_base_F;
   class Tank_F;

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
      armor = 245;              // Pelican: 4 HEAT; tested 5/5 at 305
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

   class qav_merkava_base: B_MBT_01_cannon_F
   {
      armor = 570;              // Merkava: 3 HEAT
      armorStructural = 3.25;
      damageResistance = 0.0055;
      crewExplosionProtection = 0.65;
   };

   class qav_merkava_mk2D: qav_merkava_base
   {
      armor = 570;              // Merkava: 3 HEAT
      armorStructural = 3.25;
      damageResistance = 0.0055;
      crewExplosionProtection = 0.65;
   };

   class qav_merkava_mk3b: qav_merkava_base
   {
      armor = 570;              // Merkava: 3 HEAT
      armorStructural = 3.25;
      damageResistance = 0.0055;
      crewExplosionProtection = 0.65;
   };

   class DMNS_M511_Springbok_base;

   class DMNS_M511_Springbok_APC: DMNS_M511_Springbok_base
   {
      armor = 285;              // Springbok: 3 HEAT
      armorStructural = 3;
      damageResistance = 0.005;
   };

   class DMNS_M511_Springbok_MGS: DMNS_M511_Springbok_base
   {
      armor = 285;              // Springbok: 3 HEAT
      armorStructural = 3;
      damageResistance = 0.005;
   };

   class DMNS_M511_Springbok_AA: DMNS_M511_Springbok_base
   {
      armor = 285;              // Springbok: 3 HEAT
      armorStructural = 3;
      damageResistance = 0.005;
   };

   class DMNS_M511_Springbok_IFV: DMNS_M511_Springbok_base
   {
      armor = 285;              // Springbok: 3 HEAT
      armorStructural = 3;
      damageResistance = 0.005;
   };

   class DMNS_M808B: B_MBT_01_cannon_F
   {
      armor = 380;
      armorStructural = 3.25;
      damageResistance = 0.0055;
      crewExplosionProtection = 0.65;
   };
};
