class CfgPatches
{
   class g_vehicle_balance
   {
      units[] = {};
      weapons[] = {};
      requiredAddons[] =
      {
         "OPTRE_Vehicles",
         "DMNS_Vehicles_M511_Springbok",
         "DMNS_Vehicles_M808B",
         "DMNS_Armour"
      };
   };
};

class CfgVehicles
{
   class OPTRE_M413_base
   {
      armor = 420;
      armorStructural = 3;
      damageResistance = 0.005;

      class HitPoints
      {
         class HitFuel
         {
            armor = 1.0;
            name = "palivo";
            passThrough = 0.15;
            explosionShielding = 0.4;
            minimalHit = 0.05;
         };

         class HitEngine
         {
            armor = 0.8;
            name = "engine";
            passThrough = 0.2;
            explosionShielding = 0.4;
            minimalHit = 0.05;
         };

         class HitBody
         {
            armor = 1.6;
            name = "zbytek";
            visual = "zbytek";
            passThrough = 0.65;
            explosionShielding = 0.25;
            minimalHit = 0.1;
            radius = 0.3;
         };
      };
   };

   class DMNS_M511_Springbok_base;

   class DMNS_M511_Springbok_APC : DMNS_M511_Springbok_base
   {
      armor = 420;
      armorStructural = 3;
      damageResistance = 0.005;
   };

   class DMNS_M511_Springbok_MGS : DMNS_M511_Springbok_base
   {
      armor = 420;
      armorStructural = 3;
      damageResistance = 0.005;
   };

   class DMNS_M511_Springbok_AA : DMNS_M511_Springbok_base
   {
      armor = 420;
      armorStructural = 3;
      damageResistance = 0.005;
   };

   class DMNS_M511_Springbok_IFV : DMNS_M511_Springbok_base
   {
      armor = 420;
      armorStructural = 3;
      damageResistance = 0.005;
   };
   
   class B_MBT_01_cannon_F;
   class DMNS_M808B : B_MBT_01_cannon_F
   {
      armor = 360;
      armorStructural = 3.25;
      damageResistance = 0.0055;
      crewExplosionProtection = 0.65;
   };
};
