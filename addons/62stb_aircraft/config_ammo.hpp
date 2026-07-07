class CfgAmmo
{
  class OPTRE_M_ANVIL_1_Rocket;
  class STB_M_ANVIL_1_Vanilla_HE: OPTRE_M_ANVIL_1_Rocket
  {
    author = "Weber";
    hit = 400;
    indirectHit = 60;
    indirectHitRange = 15;
    warheadName = "HE";
    cost = 100;
  };

  class B_20mm;
  class STB_B_20mm_AP: B_20mm
  {
    author = "Weber";
    hit = 65;
    indirectHit = 0;
    indirectHitRange = 0;
    explosive = 0;
    caliber = 3.4;
    warheadName = "AP";
    cost = 20;
    CraterEffects = "";
    explosionEffects = "";
  };
};
