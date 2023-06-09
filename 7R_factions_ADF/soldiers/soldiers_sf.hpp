class 7R_adf_rg_rifleman_01 : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman (M21S)";
	uniformClass = "7R_adf_uniform_ds";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_rifleman_01.jpg";
	backpack = "VSM_OGA_OD_Backpack_Compact";

	linkedItems[] = {"NVGoggles","VSM_Shemagh_Balaclava2_OD_Goggles","7R_adf_spcs_rifleman_alt","7R_adf_boonie","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","VSM_Shemagh_Balaclava2_OD_Goggles","7R_adf_spcs_rifleman_alt","7R_adf_boonie","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};

};

class 7R_adf_rg_rifleman_02 : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman (M4)";
	uniformClass = "7R_adf_uniform_ds_ssl";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_rifleman_02.jpg";
	backpack = "VSM_OGA_OD_Backpack_Compact";

	linkedItems[] = {"NVGoggles","G_Bandanna_blk","7R_adf_spcs_rifleman","7R_adf_opscore","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","G_Bandanna_blk","7R_adf_spcs_rifleman","7R_adf_opscore","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m4_carryhandle_mstock_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4_carryhandle_mstock_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_PMAG"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_PMAG"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_rifleman_03 : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman (FN-FAL PARA)";
	uniformClass = "7R_adf_uniform_ds";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_rifleman_03.jpg";
	backpack = "VSM_OGA_OD_Backpack_Compact";

	linkedItems[] = {"NVGoggles","VSM_Shemagh_Balaclava2_OD","7R_adf_spcs_marksman","7R_adf_opscore_2","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","VSM_Shemagh_Balaclava2_OD","7R_adf_spcs_marksman","7R_adf_opscore_2","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_l1a1_para_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_l1a1_para_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_20Rnd_762x51_m80_fnfal"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_20Rnd_762x51_m80_fnfal"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_rifleman_lat : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman (LAT)";
	icon = "iconManAT";
	uniformClass = "7R_adf_uniform_ds_ssl";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_rifleman_lat.jpg";
	backpack = "VSM_OGA_OD_Backpack_Compact";

	linkedItems[] = {"NVGoggles","rhs_scarf","7R_adf_spcs_rifleman","7R_adf_boonie","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","rhs_scarf","7R_adf_spcs_rifleman","7R_adf_boonie","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m4_carryhandle_mstock_sf","hgun_ACPC2_F_sf","rhs_weap_m72a7","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4_carryhandle_mstock_sf","hgun_ACPC2_F_sf","rhs_weap_m72a7","Binocular","Throw","Put"};

	magazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_PMAG"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_PMAG"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_rifleman_light : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman (Light)";
	uniformClass = "7R_adf_uniform_tank_top";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_rifleman_light.jpg";
	backpack = "VSM_OGA_OD_Backpack_Compact";

	linkedItems[] = {"NVGoggles","G_Bandanna_blk","7R_adf_spcs","7R_adf_patrolcap","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","G_Bandanna_blk","7R_adf_spcs","7R_adf_patrolcap","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_autorifleman : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Autorifleman";
	icon = "iconManMG";

	backpack = "VSM_OGA_OD_Backpack_Kitbag_AR";
	uniformClass = "7R_adf_uniform_tank_top";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_autorifleman.jpg";

	linkedItems[] = {"NVGoggles","rhs_scarf","7R_adf_spcs_autorifleman","7R_adf_opscore","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","rhs_scarf","7R_adf_spcs_autorifleman","7R_adf_opscore","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m249_pip_S_grip","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m249_pip_S_grip","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),"rhsusf_100Rnd_556x45_M855_soft_pouch",MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),"rhsusf_100Rnd_556x45_M855_soft_pouch",MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_machinegunner : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Machinegunner";
	icon = "iconManMG";

	backpack = "VSM_OGA_OD_Backpack_Kitbag_MG";
	uniformClass = "7R_adf_uniform_tank_top";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_machinegunner.jpg";

	linkedItems[] = {"NVGoggles","VSM_Shemagh_Balaclava2_OD","7R_adf_spcs_mg","7R_adf_opscore_2","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","VSM_Shemagh_Balaclava2_OD","7R_adf_spcs_mg","7R_adf_opscore_2","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_fnmag","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_fnmag","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),"rhsusf_100Rnd_762x51",MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),"rhsusf_100Rnd_762x51",MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_mg_assist : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Machinegunner Assistant";

	backpack = "VSM_OGA_OD_Backpack_Kitbag_MG";
	uniformClass = "7R_adf_uniform_ds_ssl";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_mg_assist.jpg";

	linkedItems[] = {"NVGoggles","VSM_Shemagh_Balaclava2_OD_Goggles","7R_adf_spcs_rifleman_alt","7R_adf_boonie","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","VSM_Shemagh_Balaclava2_OD_Goggles","7R_adf_spcs_rifleman_alt","7R_adf_boonie","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP"),MAG_3("rhsusf_100Rnd_762x51")};
	respawnmagazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP"),MAG_3("rhsusf_100Rnd_762x51")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_team_leader : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Team Leader";
	icon = "iconManLeader";
	
	backpack = "VSM_OGA_OD_Backpack_Compact";
	uniformClass = "7R_adf_uniform_ds";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_team_leader.jpg";

	linkedItems[] = {"NVGoggles","G_Balaclava_oli","7R_adf_spcs_grenadier","7R_adf_opscore","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","G_Balaclava_oli","7R_adf_spcs_grenadier","7R_adf_opscore","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m4_carryhandle_m203S_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4_carryhandle_m203S_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_PMAG"),MAG_8("1Rnd_HE_Grenade_shell"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_PMAG"),MAG_8("1Rnd_HE_Grenade_shell"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_squad_leader : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Squad Leader";
	icon = "iconManLeader";
	
	backpack = "VSM_OGA_OD_Backpack_Compact";
	uniformClass = "7R_adf_uniform_ds_ssl";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_squad_leader.jpg";

	linkedItems[] = {"NVGoggles","rhs_scarf","7R_adf_spcs_squad_leader","7R_adf_patrolcap","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","rhs_scarf","7R_adf_spcs_squad_leader","7R_adf_patrolcap","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_4("SmokeShell"),MAG_3("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_4("SmokeShell"),MAG_3("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_officer : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Officer";
	icon = "iconManOfficer";
	uniformClass = "7R_adf_uniform_ds";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_officer.jpg";

	linkedItems[] = {"G_Aviator","7R_adf_spcs","7R_adf_beret_rg","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"G_Aviator","7R_adf_spcs","7R_adf_beret_rg","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_field_officer : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Officer (Field)";
	icon = "iconManOfficer";
	uniformClass = "7R_adf_uniform_tank_top";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_field_officer.jpg";

	linkedItems[] = {"rhs_scarf","7R_adf_spcs_squad_leader","7R_adf_beret_rg","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhs_scarf","7R_adf_spcs_squad_leader","7R_adf_beret_rg","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_4("SmokeShell"),MAG_3("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_4("SmokeShell"),MAG_3("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_anti_tank : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Anti-Tank Specialist";
	icon = "iconManAT";

	backpack = "VSM_OGA_OD_Backpack_Kitbag_AT";
	uniformClass = "7R_adf_uniform_tank_top";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_anti_tank.jpg";

	linkedItems[] = {"NVGoggles","VSM_Shemagh_Balaclava2_OD","7R_adf_spcs_rifleman_alt","7R_adf_opscore_2","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","VSM_Shemagh_Balaclava2_OD","7R_adf_spcs_rifleman_alt","7R_adf_opscore_2","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","rhs_weap_maaws","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","rhs_weap_maaws","Binocular","Throw","Put"};

	magazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_anti_tank_assist : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Anti-Tank Assistant";

	backpack = "VSM_OGA_OD_Backpack_Kitbag_AT";
	uniformClass = "7R_adf_uniform_ds_ssl";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_anti_tank_assist.jpg";

	linkedItems[] = {"NVGoggles","milgp_f_face_shield_shemagh_RGR","7R_adf_spcs_rifleman_alt","7R_adf_boonie","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","milgp_f_face_shield_shemagh_RGR","7R_adf_spcs_rifleman_alt","7R_adf_boonie","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m4_carryhandle_mstock_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4_carryhandle_mstock_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_PMAG"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_PMAG"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_medic : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Medic";
	icon = "iconManMedic";
	attendant = 1;

	backpack = "UK3CB_ION_B_B_RIF_MED_OLI_med";
	uniformClass = "7R_adf_uniform_ds";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_medic.jpg";

	linkedItems[] = {"NVGoggles","G_Balaclava_oli","7R_adf_spcs_medic","7R_adf_opscore","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","G_Balaclava_oli","7R_adf_spcs_medic","7R_adf_opscore","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP")};

};

class 7R_adf_rg_grenadier : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Grenadier";
	uniformClass = "7R_adf_uniform_ds_ssl";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_grenadier.jpg";

	linkedItems[] = {"NVGoggles","G_Balaclava_blk","7R_adf_spcs_grenadier","7R_adf_opscore_2","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","G_Balaclava_blk","7R_adf_spcs_grenadier","7R_adf_opscore_2","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m4_carryhandle_m203S_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4_carryhandle_m203S_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_PMAG"),MAG_8("1Rnd_HE_Grenade_shell"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_PMAG"),MAG_8("1Rnd_HE_Grenade_shell"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_engineer : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Engineer";
	uniformClass = "7R_adf_uniform_ds";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_engineer.jpg";

	backpack = "UK3CB_B_Largepack_ENG";

	linkedItems[] = {"NVGoggles","rhs_scarf","7R_adf_spcs_rifleman_alt","7R_adf_patrolcap","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","rhs_scarf","7R_adf_spcs_rifleman_alt","7R_adf_patrolcap","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_demolitions : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Demolitions";
	uniformClass = "7R_adf_uniform_tank_top";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_demolitions.jpg";

	backpack = "UK3CB_B_Largepack_DEMO";

	linkedItems[] = {"NVGoggles","milgp_f_face_shield_shemagh_RGR","7R_adf_spcs_rifleman","7R_adf_boonie","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","milgp_f_face_shield_shemagh_RGR","7R_adf_spcs_rifleman","7R_adf_boonie","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m4_carryhandle_mstock_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4_carryhandle_mstock_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_PMAG"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_PMAG"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_rto : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "RTO";
	uniformClass = "7R_adf_uniform_tank_top";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_rto.jpg";

	backpack = "UK3CB_B_O_Radio_Backpack";

	linkedItems[] = {"NVGoggles","rhs_scarf","7R_adf_spcs_squad_leader","7R_adf_patrolcap","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","rhs_scarf","7R_adf_spcs_squad_leader","7R_adf_patrolcap","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s_pkas_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsgref_30rnd_556x45_m21"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7R_adf_rg_marksman : 7R_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Marksman";
	
	backpack = "VSM_OGA_OD_Backpack_Compact";
	uniformClass = "7R_adf_uniform_ds_ssl";
	editorSubcategory = "EdSubcat_Recon_Personnel";
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_rg_marksman.jpg";

	linkedItems[] = {"NVGoggles","rhs_scarf","7R_adf_spcs_marksman","7R_adf_boonie","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"NVGoggles","rhs_scarf","7R_adf_spcs_marksman","7R_adf_boonie","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m14ebrri_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m14ebrri_sf","hgun_ACPC2_F_sf","Binocular","Throw","Put"};

	magazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("20Rnd_762x51_Mag"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_4("HandGrenade"),MAG_2("SmokeShell"),MAG_6("20Rnd_762x51_Mag"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};