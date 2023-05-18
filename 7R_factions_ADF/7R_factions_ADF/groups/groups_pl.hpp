class Infantry_pl
{
	name = "Infantry (Patchless)"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7R_adf_pl_RifleSquad
	{
		name = "Squad (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_adf"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_adf_pl_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_light";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_adf_pl_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7R_adf_pl_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7R_adf_pl_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7R_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7R_adf_pl_WeaponSquad
	{
		name = "Squad (Weapons)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_adf"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_adf_pl_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_adf_pl_grenadier";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_adf_pl_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_adf_pl_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7R_adf_pl_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7R_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7R_adf_pl_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7R_adf_pl_autorifleman";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7R_adf_pl_ATSquad
	{
		name = "Squad (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_adf"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_adf_pl_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_03";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_adf_pl_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_adf_pl_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7R_adf_pl_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7R_adf_pl_autorifleman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7R_adf_pl_anti_tank";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7R_adf_pl_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7R_adf_pl_RifleTeam
	{
		name = "Team (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_adf"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_01"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_03";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_adf_pl_autorifleman";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7R_adf_pl_MGTeam
	{
		name = "Team (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_adf"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_adf_pl_mg_assist";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7R_adf_pl_ATTeam
	{
		name = "Team (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_adf"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_01"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_lat";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_adf_pl_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_adf_pl_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7R_adf_pl_EngineerTeam
	{
		name = "Team (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_adf"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_adf_pl_engineer";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_adf_pl_demolitions";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7R_adf_pl_HQTeam
	{
		name = "Team (HQ)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_adf"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_adf_pl_officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_adf_pl_squad_leader";
			rank = "SERGEANT";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_adf_pl_rto";
			rank = "CORPORAL";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_light";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7R_adf_pl_RiflePair_01
	{
		name = "Pair (Rifle-1)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_adf"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_01"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_02";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7R_adf_pl_RiflePair_02
	{
		name = "Pair (Rifle-2)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_adf"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_01"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_03";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7R_adf_pl_RiflePair_03
	{
		name = "Pair (Light)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_adf"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_light"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_adf_pl_rifleman_light";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7R_adf_pl_MGPair
	{
		name = "Pair (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_adf"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_adf_pl_mg_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7R_adf_pl_ATPair
	{
		name = "Pair (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_adf"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_adf_pl_anti_tank_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_adf_pl_anti_tank";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7R_adf_pl_EngineerPair
	{
		name = "Pair (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_adf"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_adf_pl_engineer"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_adf_pl_demolitions";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7R_adf_pl_HQPair
	{
		name = "Pair (Command)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_adf"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_adf_pl_Field_Officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_adf_pl_rto";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
	};
};
// class SupportInf
// {
// 	name = "Support Infantry";
// 	class 7R_adf_pl_WeaponsPair_AT3
// 	{
// 		name = "Weapons Pair (AT-3)"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
// 		faction = "7R_adf"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_Weapons_Carrier_Base"; //Class name of desired solider
// 			rank = "PRIVATE"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_Weapons_Carrier_AT3";
// 			rank = "PRIVATE";
// 			position[] = {3,-2,0};
// 		};
// 	};
// 	class 7R_adf_pl_WeaponsPair_DShKM
// 	{
// 		name = "Weapons Pair (DShKM)"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
// 		faction = "7R_adf"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_Weapons_Carrier_Base"; //Class name of desired solider
// 			rank = "PRIVATE"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_Weapons_Carrier_DShKM";
// 			rank = "PRIVATE";
// 			position[] = {3,-2,0};
// 		};
// 	};
// 	class 7R_adf_pl_WeaponsPair_M20
// 	{
// 		name = "Weapons Pair (Type 56 75mm Recoilless Rifle)"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
// 		faction = "7R_adf"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_Weapons_Carrier_Base"; //Class name of desired solider
// 			rank = "PRIVATE"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_Weapons_Carrier_M20";
// 			rank = "PRIVATE";
// 			position[] = {3,-2,0};
// 		};
// 	};
// 	class 7R_adf_pl_Sniper_Team
// 	{
// 		name = "Sniper Team"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
// 		faction = "7R_adf"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_Sniper"; //Class name of desired solider
// 			rank = "LIEUTENANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_Spotter";
// 			rank = "SERGEANT";
// 			position[] = {3,-2,0};
// 		};
// 	};
// };
// class Mechanized 
// {
// 	name = "Mechanized";
// 	class 7R_adf_pl_BTR80_Inf_Squad
// 	{
// 		name = "Mechanized Infantry Squad (BTR-80)";
// 		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
// 		faction = "7R_adf"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_squad_leader"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_rifleman_light";
// 			rank = "CORPORAL";
// 			position[] = {3,-2,0};
// 		};
// 		class Unit2
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_medic";
// 			rank = "PRIVATE";
// 			position[] = {5,-2,0};
// 		};
// 		class Unit3
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_rifleman_01";
// 			rank = "PRIVATE";
// 			position[] = {7,-2,0};
// 		};
// 		class Unit4
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_rifleman_lat";
// 			rank = "PRIVATE";
// 			position[] = {9,-2,0};
// 		};
// 		class Unit5
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_marksman";
// 			rank = "PRIVATE";
// 			position[] = {11,-2,0};
// 		};
// 		class Unit6
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_mg_assist";
// 			rank = "PRIVATE";
// 			position[] = {13,-2,0};
// 		};
// 		class Unit7
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_machinegunner";
// 			rank = "PRIVATE";
// 			position[] = {15,-2,0};
// 		};
// 		class Unit8
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_BTR_80";
// 			rank = "PRIVATE";
// 			position[] = {-5,-8,0};
// 		};
// 	};
// 	class 7R_adf_pl_BTR70_Inf_Squad
// 	{
// 		name = "Mechanized Infantry Squad (BTR-70)";
// 		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
// 		faction = "7R_adf"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_squad_leader"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_rifleman_light";
// 			rank = "CORPORAL";
// 			position[] = {3,-2,0};
// 		};
// 		class Unit2
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_medic";
// 			rank = "PRIVATE";
// 			position[] = {5,-2,0};
// 		};
// 		class Unit3
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_rifleman_02";
// 			rank = "PRIVATE";
// 			position[] = {7,-2,0};
// 		};
// 		class Unit4
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_rifleman_lat";
// 			rank = "PRIVATE";
// 			position[] = {9,-2,0};
// 		};
// 		class Unit5
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_marksman";
// 			rank = "PRIVATE";
// 			position[] = {11,-2,0};
// 		};
// 		class Unit6
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_mg_assist";
// 			rank = "PRIVATE";
// 			position[] = {13,-2,0};
// 		};
// 		class Unit7
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_machinegunner";
// 			rank = "PRIVATE";
// 			position[] = {15,-2,0};
// 		};
// 		class Unit8
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_BTR_70";
// 			rank = "PRIVATE";
// 			position[] = {-5,-8,0};
// 		};
// 	};
// 	class 7R_adf_pl_BTR40_Inf_Squad
// 	{
// 		name = "Mechanized Infantry Squad (2x BTR-40)";
// 		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
// 		faction = "7R_adf"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_squad_leader"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_rifleman_light";
// 			rank = "CORPORAL";
// 			position[] = {3,-2,0};
// 		};
// 		class Unit2
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_medic";
// 			rank = "PRIVATE";
// 			position[] = {5,-2,0};
// 		};
// 		class Unit3
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_rifleman_02";
// 			rank = "PRIVATE";
// 			position[] = {7,-2,0};
// 		};
// 		class Unit4
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_rifleman_lat";
// 			rank = "PRIVATE";
// 			position[] = {9,-2,0};
// 		};
// 		class Unit5
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_marksman";
// 			rank = "PRIVATE";
// 			position[] = {11,-2,0};
// 		};
// 		class Unit6
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_mg_assist";
// 			rank = "PRIVATE";
// 			position[] = {13,-2,0};
// 		};
// 		class Unit7
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_machinegunner";
// 			rank = "PRIVATE";
// 			position[] = {15,-2,0};
// 		};
// 		class Unit8
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_BTR_40_DHSKM_01";
// 			rank = "PRIVATE";
// 			position[] = {-5,-8,0};
// 		};
// 		class Unit9
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_BTR_40_DHSKM_01";
// 			rank = "PRIVATE";
// 			position[] = {5,-8,0};
// 		};
// 	};			
// 	class 7R_adf_pl_BMD1_Inf_Squad
// 	{
// 		name = "Mechanized Infantry Squad (BMD-1)";
// 		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
// 		faction = "7R_adf"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_squad_leader"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_rifleman_light";
// 			rank = "CORPORAL";
// 			position[] = {3,-2,0};
// 		};
// 		class Unit2
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_medic";
// 			rank = "PRIVATE";
// 			position[] = {5,-2,0};
// 		};
// 		class Unit3
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_rifleman_02";
// 			rank = "PRIVATE";
// 			position[] = {7,-2,0};
// 		};
// 		class Unit4
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_rifleman_lat";
// 			rank = "PRIVATE";
// 			position[] = {9,-2,0};
// 		};
// 		class Unit5
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_marksman";
// 			rank = "PRIVATE";
// 			position[] = {11,-2,0};
// 		};
// 		class Unit6
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_mg_assist";
// 			rank = "PRIVATE";
// 			position[] = {13,-2,0};
// 		};
// 		class Unit7
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_machinegunner";
// 			rank = "PRIVATE";
// 			position[] = {15,-2,0};
// 		};
// 		class Unit8
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_BMD_1";
// 			rank = "PRIVATE";
// 			position[] = {-5,-8,0};
// 		};
// 	};
// 	class 7R_adf_pl_BMP1_Inf_Squad
// 	{
// 		name = "Mechanized Infantry Squad (BMP-1)";
// 		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
// 		faction = "7R_adf"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_squad_leader"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_rifleman_light";
// 			rank = "CORPORAL";
// 			position[] = {3,-2,0};
// 		};
// 		class Unit2
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_medic";
// 			rank = "PRIVATE";
// 			position[] = {5,-2,0};
// 		};
// 		class Unit3
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_rifleman_01";
// 			rank = "PRIVATE";
// 			position[] = {7,-2,0};
// 		};
// 		class Unit4
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_rifleman_lat";
// 			rank = "PRIVATE";
// 			position[] = {9,-2,0};
// 		};
// 		class Unit5
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_marksman";
// 			rank = "PRIVATE";
// 			position[] = {11,-2,0};
// 		};
// 		class Unit6
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_mg_assist";
// 			rank = "PRIVATE";
// 			position[] = {13,-2,0};
// 		};
// 		class Unit7
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_machinegunner";
// 			rank = "PRIVATE";
// 			position[] = {15,-2,0};
// 		};
// 		class Unit8
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_BMP_1";
// 			rank = "PRIVATE";
// 			position[] = {-5,-8,0};
// 		};
// 	};
// 	class 7R_adf_pl_BMD1_Squad
// 	{
// 		name = "Mechanized Squad (BMD-1)";
// 		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
// 		faction = "7R_adf"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_BMD_1"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_BMD_1";
// 			rank = "CORPORAL";
// 			position[] = {10,-10,0};
// 		};
// 	};
// 	class 7R_adf_pl_BMP1_Squad
// 	{
// 		name = "Mechanized Squad (BMP-1)";
// 		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
// 		faction = "7R_adf"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_BMP_1"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_BMP_1";
// 			rank = "CORPORAL";
// 			position[] = {10,-10,0};
// 		};
// 	};
// };
// class Armored
// {
// 	name = "Armored";
// 	class 7R_adf_pl_PT76_Squad
// 	{
// 		name = "Tank Squad (PT-76)";
// 		icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa"; 
// 		faction = "7R_adf"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_PT_76"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_PT_76";
// 			rank = "CORPORAL";
// 			position[] = {10,-10,0};
// 		};
// 	};
// 	class 7R_adf_pl_T34_Squad
// 	{
// 		name = "Tank Squad (T-34)";
// 		icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa"; 
// 		faction = "7R_adf"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_T34_85M"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_T34_85M";
// 			rank = "CORPORAL";
// 			position[] = {10,-10,0};
// 		};
// 	};
// 	class 7R_adf_pl_T55_Squad
// 	{
// 		name = "Tank Squad (T-55)";
// 		icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa"; 
// 		faction = "7R_adf"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_T55"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7R_adf_pl_T55";
// 			rank = "CORPORAL";
// 			position[] = {10,-10,0};
// 		};
// 	};
// };