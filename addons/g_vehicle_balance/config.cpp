class CfgPatches
{
  class g_vehicle_balance
  {
    units[] = {};
    weapons[] = {};
    requiredAddons[] =
    {
      "OPTRE_Vehicles"
    };
  };
};

class CfgVehicles
{
  class Car;
  class Car_F: Car
  {
      class HitPoints;
  };

  class Wheeled_APC_F;
  class APC_Wheeled_01_base_F;

  class OPTRE_M413_base;

  class OPTRE_M413_base: APC_Wheeled_01_base_F
  {
    armor = 420;              // lower from 535
    armorStructural = 3;      // lower from 4
    damageResistance = 0.005;

    class HitPoints: HitPoints
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
};