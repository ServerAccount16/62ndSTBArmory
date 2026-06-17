class CfgPatches
{
   class ammo_balance
   {
      units[] = {};
      weapons[] = {};
      requiredAddons[] =
      {
         "DMNS_Weapons_Ammo"
      };
   };
};

class CfgAmmo
{
   /*
      TCP M41 HEAT reference: TCP_M_102mm_HEAT has hit = 95,
      indirectHit = 20, indirectHitRange = 3.3, and a Titan AT
      penetrator submunition. The M96 LAW is set to 1.5x those values.
   */

   class M_NLAW_AT_F;
   class DMNS_M96_Rocket_HEAT: M_NLAW_AT_F
   {
      hit = 142.5;
      indirectHit = 30;
      indirectHitRange = 4.95;
      submunitionAmmo = "ammo_Penetrator_Titan_AT";
      submunitionInitSpeed = 1000;
   };
};
