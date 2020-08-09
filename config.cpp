class CfgPatches
{
	class T_CHDKZ_main
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_c_troops","rhsgref_main","A3_Structures_F_Mil_Flags"};
    version = "1";
		projectName = "chdkzcut";
		author = "bolov1999@mail.ru";
	};
};
class UniformSlotInfo;
class UniformItem;
class CfgWeapons
{
	class Itemcore;
	class Uniform_Base: Itemcore
	{
		scope = 0;
		allowedSlots[] = {901};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Soldier_F";
			containerClass = "Supply0";
			mass = 0;
		};
	};
	class rhs_uniform_flora;
	class rhs_weap_ak74n_gp25;
	class rhs_weap_svdp_wd_npz;
	class rhs_fieldcap;
	class rhs_weap_akmn;
	class rhs_weap_pm63;
	class rhs_weap_aks74n_2;
	class rhs_weap_aks74un;
	class rhs_weap_aks74n;
	class rhs_weap_svd;
	class rhs_weap_ak74n;
	class rhs_weap_m76_pso;
	class rhs_weap_m70ab2;
	class rhs_weap_akmn_gp25;
	class T_CHDKZ_chedak1_uniform: rhs_uniform_flora
	{
		scope = 2;
		displayName = "ChDKZ uniform 1";
		class ItemInfo: UniformItem
		{
			uniformClass = "T_CHDKZ_chedak1";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class T_CHDKZ_chedak2_uniform: rhs_uniform_flora
	{
		scope = 2;
		displayName = "ChDKZ uniform 2";
		class ItemInfo: UniformItem
		{
			uniformClass = "T_CHDKZ_chedak2";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class T_CHDKZ_chedak3_uniform: rhs_uniform_flora
	{
		scope = 2;
		displayName = "ChDKZ uniform 3";
		class ItemInfo: UniformItem
		{
			uniformClass = "T_CHDKZ_chedak3";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class T_CHDKZ_chedak4_uniform: rhs_uniform_flora
	{
		scope = 2;
		displayName = "ChDKZ uniform 4";
		class ItemInfo: UniformItem
		{
			uniformClass = "T_CHDKZ_chedak4";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class T_CHDKZ_chedak5_uniform: rhs_uniform_flora
	{
		scope = 2;
		displayName = "ChDKZ uniform 5";
		class ItemInfo: UniformItem
		{
			uniformClass = "T_CHDKZ_chedak5";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class T_CHDKZ_chedak6_uniform: rhs_uniform_flora
	{
		scope = 2;
		displayName = "ChDKZ uniform 6";
		class ItemInfo: UniformItem
		{
			uniformClass = "T_CHDKZ_chedak6";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class T_CHDKZ_chedak7_uniform: rhs_uniform_flora
	{
		scope = 2;
		displayName = "ChDKZ uniform 7";
		class ItemInfo: UniformItem
		{
			uniformClass = "T_CHDKZ_chedak7";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class T_CHDKZ_chedak8_uniform: rhs_uniform_flora
	{
		scope = 2;
		displayName = "ChDKZ uniform 8";
		class ItemInfo: UniformItem
		{
			uniformClass = "T_CHDKZ_chedak8";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class T_CHDKZ_chedak9_uniform: rhs_uniform_flora
	{
		scope = 2;
		displayName = "ChDKZ uniform 9";
		class ItemInfo: UniformItem
		{
			uniformClass = "T_CHDKZ_chedak9";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class T_CHDKZ_chedak10_uniform: rhs_uniform_flora
	{
		scope = 2;
		displayName = "ChDKZ uniform 10";
		class ItemInfo: UniformItem
		{
			uniformClass = "T_CHDKZ_chedak10";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class T_CHDKZ_Poor_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_Worn_clothes0";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poor_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\T_CHDKZ\c_cloth1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T_CHDKZ_Pilot";
			containerClass = "Supply30";
			mass = 30;
		};
	};
