/*
* Copyright (C) 2016 MediaTek Inc.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See http://www.gnu.org/licenses/gpl-2.0.html for more details.
*/

#ifndef _MTK_BATTERY_TABLE_H
#define _MTK_BATTERY_TABLE_H

#include "mtk_battery.h"

/* ============================================================
 * define
 * ============================================================
 */

/* Qmax for battery  */
#define Q_MAX_L_CURRENT 0
#define Q_MAX_H_CURRENT 10000

/* multiple battery profile compile options */
#define MTK_GET_BATTERY_ID_BY_AUXADC
#define BATTERY_ID_CHANNEL_NUM 12
#define BATTERY_PROFILE_ID 0
#define TOTAL_BATTERY_NUMBER 3
/*#define MTK_GET_BATTERY_ID_BY_GPIO*/
struct battery_id_voltage
{
	char *vendor_name;
	int id_voltage_low;//mv
	int id_voltage_high;
};
struct battery_id_voltage g_battery_id_voltage[TOTAL_BATTERY_NUMBER] =
{
	{
		.vendor_name="xinwangda",
		.id_voltage_low= 590,
		.id_voltage_high=690
	},
	{
		.vendor_name="desay",
		.id_voltage_low= 250,
		.id_voltage_high=350
	},
	{
		.vendor_name="feimaotui",
		.id_voltage_low= 400,
		.id_voltage_high=510
	}
};


/* Qmax for battery  */
int g_Q_MAX_T0[TOTAL_BATTERY_NUMBER] = { 2946, 2712, 2490};
int g_Q_MAX_T1[TOTAL_BATTERY_NUMBER] = { 2796, 2851, 2468};
int g_Q_MAX_T2[TOTAL_BATTERY_NUMBER] = { 2718, 2432, 2310};
int g_Q_MAX_T3[TOTAL_BATTERY_NUMBER] = { 2535, 1991, 1858};
int g_Q_MAX_T4[TOTAL_BATTERY_NUMBER] = { 2523, 1960, 1843};

int g_Q_MAX_T0_H_CURRENT[TOTAL_BATTERY_NUMBER] = { 2646, 2412, 2190};
int g_Q_MAX_T1_H_CURRENT[TOTAL_BATTERY_NUMBER] = { 2496, 2551, 2168};
int g_Q_MAX_T2_H_CURRENT[TOTAL_BATTERY_NUMBER] = { 2418, 2132, 2010};
int g_Q_MAX_T3_H_CURRENT[TOTAL_BATTERY_NUMBER] = { 2235, 1691, 1558};
int g_Q_MAX_T4_H_CURRENT[TOTAL_BATTERY_NUMBER] = { 2223, 1660, 1543};

int g_Q_MAX_SYS_VOLTAGE[TOTAL_BATTERY_NUMBER] = { 3400, 3400, 3400};

/* 0~0.5V for battery 0, 0.5~1V for battery 1*/
/* 1~1.5V for battery 2, -1 for the last one (battery 3) */

int g_FG_PSEUDO1_T0[TOTAL_BATTERY_NUMBER] = { 5, 6, 7};
int g_FG_PSEUDO1_T1[TOTAL_BATTERY_NUMBER] = { 9, 10, 11};
int g_FG_PSEUDO1_T2[TOTAL_BATTERY_NUMBER] = { 13, 14, 15};
int g_FG_PSEUDO1_T3[TOTAL_BATTERY_NUMBER] = { 17, 18, 19};
int g_FG_PSEUDO1_T4[TOTAL_BATTERY_NUMBER] = { 21, 22, 23};

int g_FG_PSEUDO100_T0[TOTAL_BATTERY_NUMBER] = { 98, 98, 98};
int g_FG_PSEUDO100_T1[TOTAL_BATTERY_NUMBER] = { 95, 95, 94};
int g_FG_PSEUDO100_T2[TOTAL_BATTERY_NUMBER] = { 90, 90, 90};
int g_FG_PSEUDO100_T3[TOTAL_BATTERY_NUMBER] = { 80, 80, 86};
int g_FG_PSEUDO100_T4[TOTAL_BATTERY_NUMBER] = { 80, 80, 82};

/* shutdown_hl_zcv */
int g_SHUTDOWN_HL_ZCV_T0[TOTAL_BATTERY_NUMBER] = {3400, 3410, 3420};
int g_SHUTDOWN_HL_ZCV_T1[TOTAL_BATTERY_NUMBER] = {3450, 3460, 3470};
int g_SHUTDOWN_HL_ZCV_T2[TOTAL_BATTERY_NUMBER] = {3500, 3510, 3520};
int g_SHUTDOWN_HL_ZCV_T3[TOTAL_BATTERY_NUMBER] = {3550, 3460, 3470};
int g_SHUTDOWN_HL_ZCV_T4[TOTAL_BATTERY_NUMBER] = {3600, 3610, 3620};

/* g_FG_PSEUDO1_OFFSET */
int g_FG_PSEUDO1_OFFSET[TOTAL_BATTERY_NUMBER] = {0, 0, 0};

/* pmic_min_vol by temp ,control by MULTI_TEMP_GAUGE0=1, 34000=3.4v */
int g_PMIC_MIN_VOL_T0[TOTAL_BATTERY_NUMBER] = {34000, 34010, 34020};
int g_PMIC_MIN_VOL_T1[TOTAL_BATTERY_NUMBER] = {34500, 34510, 34520};
int g_PMIC_MIN_VOL_T2[TOTAL_BATTERY_NUMBER] = {35000, 35010, 35020};
int g_PMIC_MIN_VOL_T3[TOTAL_BATTERY_NUMBER] = {32000, 32000, 32000};
int g_PMIC_MIN_VOL_T4[TOTAL_BATTERY_NUMBER] = {32000, 32000, 32000};

/* POWERON_SYSTEM_IBOOT by temp ,control by MULTI_TEMP_GAUGE0=1 ,5000 = 500ma*/
int g_PON_SYS_IBOOT_T0[TOTAL_BATTERY_NUMBER] = {4000, 4100, 4200};
int g_PON_SYS_IBOOT_T1[TOTAL_BATTERY_NUMBER] = {5000, 5100, 5200};
int g_PON_SYS_IBOOT_T2[TOTAL_BATTERY_NUMBER] = {6000, 6100, 6200};
int g_PON_SYS_IBOOT_T3[TOTAL_BATTERY_NUMBER] = {3000, 3000, 3000};
int g_PON_SYS_IBOOT_T4[TOTAL_BATTERY_NUMBER] = {3000, 3000, 3000};

/* Q_MAX_SYS_VOLTAGE by temp ,control by MULTI_TEMP_GAUGE0=1, */
int g_QMAX_SYS_VOL_T0[TOTAL_BATTERY_NUMBER] = {34000, 34010, 34020};
int g_QMAX_SYS_VOL_T1[TOTAL_BATTERY_NUMBER] = {34500, 34510, 34520};
int g_QMAX_SYS_VOL_T2[TOTAL_BATTERY_NUMBER] = {35000, 35010, 35020};
int g_QMAX_SYS_VOL_T3[TOTAL_BATTERY_NUMBER] = {32500, 32000, 32000};
int g_QMAX_SYS_VOL_T4[TOTAL_BATTERY_NUMBER] = {32500, 32000, 32000};

#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900
#endif

#define RBAT_PULL_UP_VOLT          1800

#define BIF_NTC_R 16000

#if (BAT_NTC_10 == 1)
struct FUELGAUGE_TEMPERATURE Fg_Temperature_Table[21] = {
		{-40, 195652},
		{-35, 148171},
		{-30, 113347},
		{-25, 87559},
		{-20, 68237},
		{-15, 53650},
		{-10, 42506},
		{-5, 33892},
		{0, 27219},
		{5, 22021},
		{10, 17926},
		{15, 14674},
		{20, 12081},
		{25, 10000},
		{30, 8315},
		{35, 6948},
		{40, 5834},
		{45, 4917},
		{50, 4161},
		{55, 3535},
		{60, 3014}
};
#endif

#if (BAT_NTC_47 == 1)
struct FUELGAUGE_TEMPERATURE Fg_Temperature_Table[21] = {
		{-40, 1747920},
		{-35, 1245428},
		{-30, 898485},
		{-25, 655802},
		{-20, 483954},
		{-15, 360850},
		{-10, 271697},
		{-5, 206463},
		{0, 158214},
		{5, 122259},
		{10, 95227},
		{15, 74730},
		{20, 59065},
		{25, 47000},
		{30, 37643},
		{35, 30334},
		{40, 24591},
		{45, 20048},
		{50, 16433},
		{55, 13539},
		{60, 11210}
};
#endif



/* ============================================================
 * <DOD, Battery_Voltage> Table
 * ============================================================
 */

#define TEMPERATURE_T0	50
#define TEMPERATURE_T1	25
#define TEMPERATURE_T2	10
#define TEMPERATURE_T3	0
#define TEMPERATURE_T4	-10
#define TEMPERATURE_TB0	255
#define TEMPERATURE_TB1	254



/* T0 */
struct FUELGAUGE_PROFILE_STRUCT fg_profile_t0[TOTAL_BATTERY_NUMBER][83] = {
{
{0,43750,1100},
{400,43550,1100},
{800,43370,1100},
{1200,43200,1100},
{1600,43040,1100},
{2000,42880,1100},
{2400,42730,1125},
{2800,42570,1125},
{3200,42420,1150},
{3600,42260,1125},
{4000,42110,1125},
{4400,41960,1150},
{4800,41810,1150},
{5200,41660,1150},
{5600,41510,1150},
{6000,41370,1175},
{6400,41230,1200},
{6800,41090,1200},
{7200,40950,1200},
{7600,40810,1200},
{8000,40680,1225},
{8400,40550,1225},
{8800,40420,1225},
{9190,40300,1250},
{9590,40180,1275},
{9990,40060,1275},
{10390,39950,1300},
{10790,39840,1325},
{11190,39730,1325},
{11590,39620,1325},
{11990,39510,1350},
{12390,39400,1350},
{12790,39270,1325},
{13190,39130,1275},
{13590,38980,1200},
{13990,38850,1175},
{14390,38750,1150},
{14790,38660,1150},
{15190,38580,1150},
{15590,38500,1150},
{15990,38430,1150},
{16390,38370,1175},
{16790,38300,1150},
{17190,38250,1175},
{17590,38190,1175},
{17990,38140,1200},
{18390,38090,1200},
{18790,38040,1225},
{19190,37990,1200},
{19590,37950,1225},
{19990,37910,1250},
{20390,37870,1275},
{20790,37830,1275},
{21190,37790,1300},
{21590,37740,1300},
{21990,37640,1200},
{22390,37540,1175},
{22790,37470,1200},
{23190,37410,1225},
{23590,37340,1200},
{23990,37290,1225},
{24390,37240,1225},
{24790,37190,1225},
{25190,37140,1225},
{25590,37070,1250},
{25990,36990,1225},
{26390,36910,1225},
{26790,36820,1225},
{27190,36720,1225},
{27580,36650,1225},
{27980,36610,1250},
{28380,36550,1275},
{28780,36470,1325},
{29180,36310,1375},
{29580,35880,1350},
{29980,35230,1425},
{30380,34330,1525},
{30780,32950,1850},
{30860,32650,1650},
{30880,32580,1475},
{30900,32550,1400},
{30910,32530,1325},
{30920,32530,1325}
},
{
{0,43740,980},
{400,43560,975},
{800,43390,975},
{1200,43240,975},
{1600,43070,950},
{2000,42910,950},
{2400,42760,975},
{2800,42600,975},
{3200,42440,975},
{3600,42290,1000},
{4000,42130,975},
{4400,41980,1000},
{4800,41820,1000},
{5200,41670,1025},
{5600,41520,1025},
{6000,41370,1025},
{6400,41220,1025},
{6800,41080,1050},
{7200,40940,1050},
{7600,40800,1075},
{8000,40670,1100},
{8400,40530,1100},
{8800,40410,1125},
{9190,40280,1150},
{9590,40150,1150},
{9990,40030,1175},
{10390,39920,1200},
{10790,39800,1200},
{11190,39690,1225},
{11590,39580,1250},
{11990,39480,1325},
{12390,39340,1275},
{12790,39160,1150},
{13190,38990,1050},
{13590,38860,1000},
{13990,38760,975},
{14390,38670,975},
{14790,38590,975},
{15190,38510,975},
{15590,38440,975},
{15990,38380,1000},
{16390,38310,1000},
{16790,38250,1000},
{17190,38190,1000},
{17590,38140,1025},
{17990,38090,1050},
{18390,38040,1050},
{18790,38000,1100},
{19190,37960,1125},
{19590,37920,1125},
{19990,37880,1150},
{20390,37840,1150},
{20790,37790,1150},
{21190,37710,1075},
{21590,37600,1000},
{21990,37530,1025},
{22390,37470,1025},
{22790,37410,1025},
{23190,37350,1025},
{23590,37300,1025},
{23990,37260,1050},
{24390,37210,1050},
{24790,37140,1050},
{25190,37050,1025},
{25590,36980,1050},
{25990,36890,1050},
{26390,36790,975},
{26790,36780,1025},
{27190,36760,1050},
{27580,36750,1125},
{27980,36700,1175},
{28380,36480,1125},
{28780,35920,1125},
{29180,35130,1250},
{29580,33890,1475},
{29820,32700,1775},
{29850,32530,1325},
{29860,32450,1150},
{29870,32410,1050},
{29880,32380,1000},
{29880,32360,950},
{29890,32360,900},
{29890,32360,925}
},
{
{0,43750,1000},
{400,43530,1000},
{800,43350,1025},
{1200,43170,1000},
{1600,43010,1025},
{2000,42850,1025},
{2400,42680,1000},
{2800,42530,1025},
{3200,42370,1025},
{3600,42210,1025},
{4000,42050,1000},
{4400,41910,1050},
{4800,41750,1025},
{5200,41600,1025},
{5600,41450,1025},
{6000,41310,1050},
{6400,41160,1050},
{6800,41020,1075},
{7200,40880,1075},
{7600,40740,1075},
{8000,40600,1075},
{8400,40480,1100},
{8800,40350,1100},
{9190,40220,1125},
{9590,40090,1125},
{9990,39980,1150},
{10390,39860,1125},
{10790,39750,1175},
{11190,39650,1225},
{11590,39540,1225},
{11990,39430,1250},
{12390,39320,1275},
{12790,39190,1250},
{13190,39030,1175},
{13590,38880,1100},
{13990,38750,1050},
{14390,38650,1025},
{14790,38560,1000},
{15190,38480,1000},
{15590,38410,1000},
{15990,38350,1025},
{16390,38280,1000},
{16790,38230,1025},
{17190,38170,1025},
{17590,38120,1050},
{17990,38070,1050},
{18390,38020,1050},
{18790,37970,1050},
{19190,37930,1050},
{19590,37890,1075},
{19990,37850,1075},
{20390,37820,1125},
{20790,37780,1125},
{21190,37730,1125},
{21590,37650,1050},
{21990,37550,1025},
{22390,37490,1025},
{22790,37440,1025},
{23190,37380,1025},
{23590,37330,1025},
{23990,37280,1025},
{24390,37230,1025},
{24790,37180,1050},
{25190,37100,1050},
{25590,37020,1050},
{25990,36940,1075},
{26390,36830,1025},
{26790,36770,1000},
{27190,36760,1050},
{27580,36750,1100},
{27980,36730,1175},
{28380,36650,1225},
{28780,36290,1125},
{29180,35660,1200},
{29580,34730,1300},
{29980,33180,1700},
{30080,32630,1600},
{30110,32520,1325},
{30120,32470,1175},
{30130,32440,1125},
{30130,32410,1050},
{30140,32400,1025},
{30140,32400,1025}
}

};

/* T1 */
struct FUELGAUGE_PROFILE_STRUCT fg_profile_t1[TOTAL_BATTERY_NUMBER][83] = {
{
{0,43600,1580},
{400,43390,1575},
{800,43230,1625},
{1200,43060,1625},
{1600,42900,1625},
{2000,42750,1650},
{2400,42590,1650},
{2800,42440,1675},
{3200,42280,1675},
{3600,42130,1700},
{4000,41980,1700},
{4400,41830,1725},
{4800,41680,1725},
{5200,41530,1750},
{5600,41390,1775},
{6000,41240,1750},
{6400,41100,1775},
{6800,40960,1800},
{7200,40830,1800},
{7600,40700,1850},
{8000,40570,1850},
{8400,40440,1875},
{8800,40320,1900},
{9190,40200,1900},
{9590,40080,1900},
{9990,39970,1925},
{10390,39850,1925},
{10790,39740,1950},
{11190,39630,1950},
{11590,39510,1950},
{11990,39380,1900},
{12390,39250,1875},
{12790,39110,1800},
{13190,38980,1750},
{13590,38860,1700},
{13990,38760,1675},
{14390,38660,1675},
{14790,38580,1675},
{15190,38510,1675},
{15590,38440,1675},
{15990,38370,1675},
{16390,38310,1700},
{16790,38250,1700},
{17190,38190,1700},
{17590,38140,1725},
{17990,38090,1725},
{18390,38050,1750},
{18790,38010,1775},
{19190,37970,1800},
{19590,37930,1825},
{19990,37890,1825},
{20390,37850,1825},
{20790,37810,1825},
{21190,37770,1825},
{21590,37730,1825},
{21990,37670,1800},
{22390,37610,1775},
{22790,37550,1775},
{23190,37490,1775},
{23590,37440,1800},
{23990,37390,1800},
{24390,37340,1800},
{24790,37290,1825},
{25190,37220,1850},
{25590,37140,1850},
{25990,37060,1875},
{26390,36970,1875},
{26790,36860,1875},
{27190,36770,1875},
{27580,36720,1950},
{27980,36660,2025},
{28380,36580,2150},
{28780,36440,2325},
{29180,36100,2400},
{29580,35460,2550},
{29980,34570,2950},
{30330,33400,3500},
{30400,33140,2850},
{30440,33010,2550},
{30460,32940,2350},
{30480,32900,2250},
{30490,32860,2175},
{30500,32860,2150}
},
{
{0,43580,1530},
{400,43390,1525},
{800,43230,1550},
{1200,43060,1550},
{1600,42900,1550},
{2000,42740,1550},
{2400,42590,1575},
{2800,42430,1575},
{3200,42270,1575},
{3600,42120,1600},
{4000,41960,1575},
{4400,41810,1575},
{4800,41670,1625},
{5200,41510,1625},
{5600,41370,1650},
{6000,41220,1675},
{6400,41080,1700},
{6800,40930,1675},
{7200,40800,1700},
{7600,40690,1750},
{8000,40560,1800},
{8400,40410,1825},
{8800,40260,1825},
{9190,40120,1825},
{9590,40000,1875},
{9990,39880,1875},
{10390,39770,1875},
{10790,39670,1900},
{11190,39570,1925},
{11590,39440,1875},
{11990,39280,1800},
{12390,39100,1625},
{12790,38950,1525},
{13190,38830,1475},
{13590,38740,1475},
{13990,38650,1450},
{14390,38570,1450},
{14790,38500,1450},
{15190,38430,1475},
{15590,38370,1500},
{15990,38300,1475},
{16390,38250,1525},
{16790,38190,1500},
{17190,38140,1525},
{17590,38100,1575},
{17990,38050,1575},
{18390,38010,1600},
{18790,37970,1600},
{19190,37930,1625},
{19590,37890,1625},
{19990,37850,1600},
{20390,37810,1625},
{20790,37760,1575},
{21190,37710,1575},
{21590,37650,1525},
{21990,37600,1525},
{22390,37550,1525},
{22790,37490,1500},
{23190,37450,1500},
{23590,37410,1550},
{23990,37350,1550},
{24390,37270,1550},
{24790,37200,1550},
{25190,37130,1600},
{25590,37020,1575},
{25990,36940,1550},
{26390,36920,1600},
{26790,36900,1650},
{27190,36880,1750},
{27580,36840,1875},
{27980,36600,1850},
{28380,36000,1850},
{28780,35130,2025},
{29180,33700,2475},
{29320,32960,2400},
{29360,32810,2050},
{29390,32750,1900},
{29400,32720,1825},
{29420,32690,1750},
{29430,32680,1700},
{29440,32670,1675},
{29460,32650,1625},
{29470,32650,1650}
},
{
{0,43610,1550},
{400,43400,1550},
{800,43220,1550},
{1200,43050,1550},
{1600,42890,1550},
{2000,42730,1550},
{2400,42560,1525},
{2800,42410,1525},
{3200,42250,1525},
{3600,42100,1525},
{4000,41950,1550},
{4400,41790,1525},
{4800,41640,1525},
{5200,41500,1550},
{5600,41350,1550},
{6000,41200,1550},
{6400,41060,1575},
{6800,40920,1600},
{7200,40790,1600},
{7600,40670,1625},
{8000,40540,1650},
{8400,40400,1700},
{8800,40250,1700},
{9190,40110,1725},
{9590,39980,1725},
{9990,39870,1750},
{10390,39760,1750},
{10790,39660,1775},
{11190,39550,1775},
{11590,39440,1800},
{11990,39320,1775},
{12390,39180,1725},
{12790,39030,1625},
{13190,38890,1525},
{13590,38770,1500},
{13990,38670,1450},
{14390,38580,1425},
{14790,38500,1425},
{15190,38430,1425},
{15590,38360,1425},
{15990,38300,1425},
{16390,38240,1425},
{16790,38190,1450},
{17190,38140,1450},
{17590,38090,1475},
{17990,38040,1475},
{18390,38000,1475},
{18790,37960,1500},
{19190,37920,1500},
{19590,37880,1525},
{19990,37850,1525},
{20390,37810,1525},
{20790,37780,1525},
{21190,37740,1525},
{21590,37700,1500},
{21990,37650,1475},
{22390,37600,1450},
{22790,37550,1450},
{23190,37500,1475},
{23590,37450,1475},
{23990,37410,1500},
{24390,37350,1500},
{24790,37270,1525},
{25190,37190,1525},
{25590,37110,1550},
{25990,37000,1550},
{26390,36920,1525},
{26790,36910,1575},
{27190,36890,1625},
{27580,36870,1700},
{27980,36820,1825},
{28380,36580,1875},
{28780,35970,1925},
{29180,35100,2200},
{29580,33660,2750},
{29710,32980,2475},
{29750,32830,2100},
{29770,32780,1975},
{29790,32750,1900},
{29800,32730,1850},
{29820,32720,1825},
{29830,32710,1775},
{29840,32710,1800}
}

};

/* T2 */
struct FUELGAUGE_PROFILE_STRUCT fg_profile_t2[TOTAL_BATTERY_NUMBER][83] = {
{
{0,43390,2380},
{400,43150,2375},
{800,42960,2450},
{1200,42790,2475},
{1600,42620,2500},
{2000,42460,2550},
{2400,42310,2600},
{2800,42150,2600},
{3200,41990,2625},
{3600,41840,2650},
{4000,41690,2675},
{4400,41540,2700},
{4800,41390,2725},
{5200,41250,2750},
{5600,41110,2775},
{6000,40970,2800},
{6400,40830,2800},
{6800,40690,2800},
{7200,40560,2850},
{7600,40440,2875},
{8000,40310,2875},
{8400,40190,2900},
{8800,40070,2925},
{9190,39950,2925},
{9590,39830,2950},
{9990,39720,2950},
{10390,39600,2950},
{10790,39480,2925},
{11190,39350,2875},
{11590,39220,2825},
{11990,39080,2775},
{12390,38950,2725},
{12790,38830,2675},
{13190,38730,2700},
{13590,38640,2700},
{13990,38550,2700},
{14390,38480,2725},
{14790,38410,2750},
{15190,38340,2750},
{15590,38280,2775},
{15990,38220,2775},
{16390,38170,2825},
{16790,38120,2850},
{17190,38070,2875},
{17590,38020,2875},
{17990,37980,2925},
{18390,37940,2950},
{18790,37890,2950},
{19190,37860,2975},
{19590,37830,3050},
{19990,37790,3050},
{20390,37760,3050},
{20790,37730,3075},
{21190,37690,3100},
{21590,37650,3075},
{21990,37600,3100},
{22390,37540,3100},
{22790,37480,3100},
{23190,37430,3125},
{23590,37380,3175},
{23990,37310,3225},
{24390,37230,3275},
{24790,37140,3300},
{25190,37060,3400},
{25590,36960,3550},
{25990,36830,3600},
{26390,36720,3775},
{26790,36640,4025},
{27190,36560,4450},
{27580,36460,5050},
{27980,36290,5925},
{28380,35890,7200},
{28700,35350,8375},
{28850,35060,7650},
{28960,34830,7100},
{29040,34650,6675},
{29100,34510,6275},
{29150,34390,6025},
{29190,34290,5750},
{29230,34210,5550},
{29260,34140,5375},
{29280,34080,5225},
{29300,34080,5225}
},
{
{0,43180,2980},
{400,42900,2975},
{800,42710,3050},
{1200,42540,3100},
{1600,42370,3075},
{2000,42220,3125},
{2400,42060,3125},
{2800,41910,3150},
{3200,41760,3150},
{3600,41600,3150},
{4000,41460,3200},
{4400,41310,3200},
{4800,41160,3225},
{5200,41020,3275},
{5600,40890,3300},
{6000,40770,3350},
{6400,40660,3450},
{6800,40520,3500},
{7200,40330,3450},
{7600,40140,3400},
{8000,39990,3400},
{8400,39880,3450},
{8800,39790,3525},
{9190,39680,3475},
{9590,39570,3475},
{9990,39470,3450},
{10390,39320,3350},
{10790,39160,3250},
{11190,39000,3175},
{11590,38870,3075},
{11990,38760,3050},
{12390,38670,3075},
{12790,38590,3075},
{13190,38510,3050},
{13590,38440,3075},
{13990,38370,3100},
{14390,38310,3125},
{14790,38250,3175},
{15190,38190,3200},
{15590,38140,3175},
{15990,38090,3200},
{16390,38050,3275},
{16790,38000,3300},
{17190,37960,3350},
{17590,37920,3325},
{17990,37880,3350},
{18390,37850,3400},
{18790,37810,3400},
{19190,37790,3475},
{19590,37760,3475},
{19990,37730,3525},
{20390,37690,3575},
{20790,37650,3550},
{21190,37600,3625},
{21590,37550,3700},
{21990,37500,3725},
{22390,37450,3850},
{22790,37370,3925},
{23190,37290,3975},
{23590,37210,4075},
{23990,37120,4250},
{24390,37010,4325},
{24790,36960,4600},
{25190,36930,4800},
{25590,36900,5100},
{25990,36870,5625},
{26390,36750,6075},
{26790,36270,6500},
{27190,35490,7300},
{27440,34830,7100},
{27570,34390,6000},
{27660,34070,5225},
{27720,33840,4625},
{27760,33660,4175},
{27780,33550,3900},
{27800,33470,3700},
{27810,33410,3525},
{27820,33360,3450},
{27830,33320,3350},
{27830,33300,3250},
{27840,33290,3250},
{27840,33270,3225},
{27840,33270,3200}
},
{
{0,43280,3230},
{400,42990,3225},
{800,42800,3375},
{1200,42620,3375},
{1600,42460,3350},
{2000,42290,3375},
{2400,42130,3325},
{2800,41980,3350},
{3200,41830,3350},
{3600,41680,3350},
{4000,41530,3325},
{4400,41390,3400},
{4800,41240,3450},
{5200,41100,3475},
{5600,40960,3475},
{6000,40830,3500},
{6400,40720,3550},
{6800,40600,3650},
{7200,40440,3625},
{7600,40250,3600},
{8000,40070,3525},
{8400,39940,3575},
{8800,39840,3575},
{9190,39740,3600},
{9590,39650,3650},
{9990,39550,3550},
{10390,39450,3575},
{10790,39320,3600},
{11190,39170,3525},
{11590,39020,3325},
{11990,38880,3325},
{12390,38760,3275},
{12790,38650,3175},
{13190,38560,3175},
{13590,38480,3200},
{13990,38410,3225},
{14390,38340,3275},
{14790,38280,3350},
{15190,38210,3325},
{15590,38160,3250},
{15990,38110,3325},
{16390,38070,3425},
{16790,38020,3475},
{17190,37980,3400},
{17590,37930,3400},
{17990,37900,3475},
{18390,37870,3550},
{18790,37840,3650},
{19190,37810,3550},
{19590,37790,3675},
{19990,37770,3775},
{20390,37750,3750},
{20790,37720,3775},
{21190,37680,3950},
{21590,37640,3850},
{21990,37590,3975},
{22390,37530,4100},
{22790,37480,4075},
{23190,37420,4150},
{23590,37340,4325},
{23990,37250,4525},
{24390,37170,4575},
{24790,37060,4800},
{25190,36970,4925},
{25590,36920,5300},
{25990,36890,5500},
{26390,36860,6000},
{26790,36810,6650},
{27190,36630,7400},
{27580,36070,8100},
{27910,35400,8525},
{28060,35040,7650},
{28170,34740,6875},
{28250,34500,6275},
{28310,34300,5750},
{28360,34130,5325},
{28390,33990,4975},
{28420,33900,4775},
{28440,33820,4575},
{28460,33730,4375},
{28470,33680,4250},
{28480,33640,4125},
{28490,33640,4125}
}

};

/* T3 */
struct FUELGAUGE_PROFILE_STRUCT fg_profile_t3[TOTAL_BATTERY_NUMBER][83] = {
{
{0,43070,3780},
{400,42770,3775},
{800,42560,3950},
{1200,42370,4025},
{1600,42200,4100},
{2000,42030,4175},
{2400,41870,4250},
{2800,41710,4275},
{3200,41560,4300},
{3600,41410,4350},
{4000,41260,4400},
{4400,41110,4400},
{4800,40970,4450},
{5200,40830,4500},
{5600,40700,4550},
{6000,40560,4550},
{6400,40430,4575},
{6800,40300,4600},
{7200,40170,4650},
{7600,40040,4675},
{8000,39930,4700},
{8400,39810,4725},
{8800,39680,4725},
{9190,39560,4700},
{9590,39440,4725},
{9990,39300,4650},
{10390,39170,4650},
{10790,39040,4600},
{11190,38910,4600},
{11590,38800,4625},
{11990,38700,4625},
{12390,38600,4625},
{12790,38520,4700},
{13190,38440,4725},
{13590,38370,4725},
{13990,38300,4825},
{14390,38240,4850},
{14790,38180,4900},
{15190,38120,4950},
{15590,38070,4975},
{15990,38020,5050},
{16390,37970,5050},
{16790,37930,5150},
{17190,37890,5150},
{17590,37850,5225},
{17990,37820,5275},
{18390,37790,5300},
{18790,37760,5400},
{19190,37730,5425},
{19590,37710,5500},
{19990,37680,5600},
{20390,37640,5650},
{20790,37590,5650},
{21190,37530,5725},
{21590,37480,5875},
{21990,37420,6000},
{22390,37350,6125},
{22790,37270,6275},
{23190,37180,6500},
{23590,37080,6800},
{23990,36980,7150},
{24390,36860,7575},
{24790,36720,8100},
{25190,36590,8875},
{25590,36480,10000},
{25920,36400,11025},
{26130,36360,10925},
{26290,36320,10825},
{26420,36290,10725},
{26540,36260,10675},
{26640,36230,10575},
{26740,36190,10500},
{26820,36160,10450},
{26890,36120,10325},
{26960,36090,10250},
{27020,36050,10150},
{27070,36000,10050},
{27120,35960,9925},
{27170,35910,9800},
{27210,35860,9650},
{27250,35820,9575},
{27290,35770,9475},
{27320,35770,9425}
},
{
{0,43360,4330},
{400,43130,4325},
{800,42920,4450},
{1200,42650,4475},
{1600,42110,4650},
{2000,41830,6100},
{2400,41650,6425},
{2800,41490,6525},
{3200,41340,6575},
{3600,41180,6500},
{4000,41040,6500},
{4400,40920,6675},
{4800,40800,6775},
{5200,40680,6750},
{5600,40510,6800},
{6000,40310,6825},
{6400,40100,6775},
{6800,39940,6700},
{7200,39800,6650},
{7600,39690,6750},
{8000,39570,6750},
{8400,39440,6675},
{8800,39300,6675},
{9190,39150,6600},
{9590,39020,6475},
{9990,38900,6400},
{10390,38790,6500},
{10790,38700,6450},
{11190,38610,6475},
{11590,38530,6475},
{11990,38460,6625},
{12390,38390,6675},
{12790,38320,6575},
{13190,38260,6775},
{13590,38200,6675},
{13990,38150,6825},
{14390,38090,6900},
{14790,38050,6825},
{15190,38000,7050},
{15590,37950,6950},
{15990,37920,7125},
{16390,37880,7050},
{16790,37860,7225},
{17190,37830,7250},
{17590,37800,7375},
{17990,37770,7575},
{18390,37730,7550},
{18790,37690,7750},
{19190,37650,7850},
{19590,37600,7900},
{19990,37550,8225},
{20390,37490,8325},
{20790,37410,8450},
{21190,37340,8650},
{21590,37260,9025},
{21990,37160,9250},
{22390,37050,9425},
{22790,36990,9725},
{23190,36950,10175},
{23590,36920,10950},
{23990,36870,11500},
{24330,36790,12000},
{24580,36650,11625},
{24770,36440,11125},
{24910,36230,10575},
{25040,36020,10100},
{25140,35840,9600},
{25220,35660,9150},
{25290,35510,8800},
{25350,35380,8475},
{25400,35250,8150},
{25450,35130,7850},
{25490,35040,7625},
{25520,34960,7425},
{25540,34890,7275},
{25570,34830,7075},
{25590,34770,6925},
{25610,34720,6850},
{25620,34690,6775},
{25630,34660,6675},
{25640,34640,6625},
{25650,34600,6550},
{25660,34600,6525}
},
{
{0,43350,5580},
{400,43120,5575},
{800,42840,5675},
{1200,42380,5775},
{1600,42060,6600},
{2000,41850,6975},
{2400,41680,7250},
{2800,41520,7400},
{3200,41360,7375},
{3600,41210,7250},
{4000,41070,7125},
{4400,40940,7400},
{4800,40820,7525},
{5200,40700,7300},
{5600,40550,7425},
{6000,40350,7500},
{6400,40150,7450},
{6800,39980,7250},
{7200,39840,7125},
{7600,39730,7250},
{8000,39620,7325},
{8400,39510,7300},
{8800,39390,7375},
{9190,39250,7350},
{9590,39110,7075},
{9990,38960,6900},
{10390,38840,7125},
{10790,38730,6925},
{11190,38640,6950},
{11590,38550,6925},
{11990,38470,7150},
{12390,38400,7150},
{12790,38330,6950},
{13190,38270,7275},
{13590,38210,7050},
{13990,38160,7225},
{14390,38100,7375},
{14790,38050,7150},
{15190,38010,7550},
{15590,37960,7350},
{15990,37930,7575},
{16390,37900,7450},
{16790,37870,7650},
{17190,37850,7625},
{17590,37830,7750},
{17990,37800,8100},
{18390,37760,7925},
{18790,37730,8150},
{19190,37690,8325},
{19590,37640,8225},
{19990,37600,8700},
{20390,37550,8825},
{20790,37480,8925},
{21190,37410,9000},
{21590,37330,9575},
{21990,37250,9850},
{22390,37140,9950},
{22790,37030,10125},
{23190,36960,10500},
{23590,36920,11400},
{23990,36890,11850},
{24310,36860,12150},
{24550,36830,12075},
{24780,36780,11975},
{24960,36700,11750},
{25110,36610,11550},
{25250,36440,11125},
{25360,36290,10725},
{25460,36140,10375},
{25530,36010,10050},
{25610,35860,9675},
{25680,35730,9375},
{25730,35640,9150},
{25770,35550,8900},
{25810,35460,8675},
{25850,35380,8475},
{25880,35300,8300},
{25910,35240,8125},
{25930,35180,8000},
{25960,35120,7850},
{25980,35070,7725},
{26000,35010,7575},
{26020,35010,7550}
}

};

/* T4 */
struct FUELGAUGE_PROFILE_STRUCT fg_profile_t4[TOTAL_BATTERY_NUMBER][83] = {
{
{0,42340,6930},
{400,41940,6925},
{800,41690,7425},
{1200,41490,7650},
{1600,41310,7850},
{2000,41150,7950},
{2400,40980,8000},
{2800,40830,8125},
{3200,40690,8250},
{3600,40540,8250},
{4000,40390,8325},
{4400,40250,8400},
{4800,40110,8500},
{5200,39980,8600},
{5600,39850,8575},
{6000,39720,8675},
{6400,39590,8650},
{6800,39470,8675},
{7200,39340,8775},
{7600,39210,8750},
{8000,39080,8750},
{8400,38960,8750},
{8800,38840,8775},
{9200,38730,8825},
{9600,38620,8850},
{10000,38530,9000},
{10400,38440,9050},
{10800,38360,9100},
{11200,38290,9150},
{11600,38220,9200},
{12000,38160,9300},
{12400,38100,9425},
{12800,38050,9425},
{13200,38000,9575},
{13600,37960,9625},
{14000,37910,9700},
{14400,37880,9850},
{14800,37840,9900},
{15200,37810,9950},
{15610,37780,10175},
{16010,37750,10200},
{16410,37720,10300},
{16810,37680,10425},
{17210,37650,10650},
{17610,37610,10800},
{18010,37560,11025},
{18410,37510,11275},
{18810,37450,11550},
{19210,37390,11925},
{19610,37310,12250},
{20010,37230,12675},
{20340,37170,12925},
{20580,37130,12825},
{20780,37100,12775},
{20940,37060,12650},
{21090,37030,12575},
{21220,37010,12525},
{21340,36990,12500},
{21460,36960,12425},
{21560,36940,12350},
{21660,36920,12300},
{21750,36900,12250},
{21840,36880,12200},
{21920,36860,12175},
{21990,36840,12100},
{22060,36820,12050},
{22130,36810,12050},
{22190,36790,12000},
{22250,36780,11975},
{22310,36760,11900},
{22360,36740,11875},
{22410,36730,11825},
{22460,36720,11825},
{22510,36700,11750},
{22560,36690,11725},
{22600,36680,11750},
{22640,36670,11725},
{22680,36660,11650},
{22720,36650,11675},
{22760,36640,11600},
{22790,36630,11650},
{22830,36620,11575},
{22860,36620,11575}
},
{ 
{0,42760,10030},
{400,42510,10025},
{800,42300,10350},
{1200,42100,10450},
{1600,41910,10525},
{2000,41740,10475},
{2400,41590,10600},
{2800,41430,10525},
{3200,41220,10500},
{3600,40940,10500},
{4000,40520,10575},
{4400,40050,12050},
{4800,39780,13475},
{5200,39580,13975},
{5600,39420,14200},
{6000,39280,14325},
{6400,39150,14075},
{6800,39030,14250},
{7200,38920,14025},
{7600,38820,13975},
{8000,38730,14150},
{8400,38640,14025},
{8800,38560,14000},
{9200,38480,13900},
{9600,38410,13975},
{10000,38340,14025},
{10400,38280,14050},
{10800,38210,14250},
{11200,38150,14200},
{11600,38100,14250},
{12000,38050,14375},
{12400,38000,14375},
{12800,37960,14425},
{13200,37910,14725},
{13600,37860,14600},
{13950,37810,14525},
{14270,37760,14425},
{14520,37720,14300},
{14790,37680,14200},
{15010,37640,14100},
{15210,37600,14025},
{15390,37560,13900},
{15580,37530,13825},
{15750,37490,13750},
{15930,37450,13650},
{16080,37420,13550},
{16210,37390,13475},
{16340,37360,13425},
{16470,37330,13325},
{16580,37310,13300},
{16690,37270,13175},
{16790,37240,13100},
{16890,37220,13075},
{16990,37190,12975},
{17080,37170,12925},
{17160,37150,12875},
{17240,37140,12875},
{17320,37130,12850},
{17390,37120,12825},
{17460,37110,12775},
{17540,37100,12750},
{17600,37090,12725},
{17670,37090,12725},
{17740,37080,12700},
{17810,37070,12700},
{17880,37060,12675},
{17950,37060,12650},
{18020,37050,12625},
{18070,37050,12650},
{18140,37040,12625},
{18200,37040,12600},
{18260,37030,12600},
{18320,37030,12600},
{18380,37020,12575},
{18440,37020,12575},
{18490,37010,12525},
{18550,37010,12525},
{18610,37000,12525},
{18650,37000,12525},
{18700,36990,12500},
{18760,36980,12475},
{18810,36970,12450},
{18850,36970,12450}
},
{
{0,42980,11300},
{400,42760,11300},
{800,42560,11775},
{1200,42370,11550},
{1600,42180,11475},
{2000,42000,11500},
{2400,41810,11600},
{2800,41650,11400},
{3200,41430,11350},
{3600,41050,11525},
{4000,40580,12950},
{4400,40310,13500},
{4800,40070,13750},
{5200,39840,13875},
{5600,39650,13700},
{6000,39480,13525},
{6400,39340,13500},
{6800,39210,13725},
{7200,39100,13525},
{7600,38990,13625},
{8000,38900,13375},
{8400,38800,13250},
{8800,38720,13275},
{9200,38630,13250},
{9600,38550,13300},
{10000,38480,13525},
{10400,38410,13550},
{10800,38340,13550},
{11200,38270,13275},
{11600,38210,13575},
{12000,38150,13400},
{12400,38090,13325},
{12800,38030,13400},
{13200,37980,13700},
{13600,37920,13600},
{14000,37860,13775},
{14400,37800,13650},
{14800,37730,14075},
{15200,37660,13925},
{15580,37580,13975},
{15830,37530,13825},
{16110,37470,13675},
{16310,37420,13575},
{16510,37380,13450},
{16700,37330,13325},
{16880,37290,13225},
{17030,37250,13125},
{17150,37230,13075},
{17280,37190,12975},
{17400,37170,12925},
{17500,37150,12900},
{17620,37130,12850},
{17730,37110,12800},
{17830,37100,12750},
{17930,37090,12750},
{18030,37080,12725},
{18120,37060,12675},
{18190,37060,12650},
{18280,37060,12650},
{18360,37050,12625},
{18430,37040,12625},
{18520,37030,12575},
{18580,37030,12575},
{18660,37020,12550},
{18740,37010,12525},
{18820,37000,12525},
{18880,36990,12475},
{18960,36980,12450},
{19020,36970,12450},
{19080,36970,12450},
{19140,36950,12375},
{19200,36940,12375},
{19250,36930,12325},
{19300,36910,12300},
{19360,36890,12250},
{19400,36880,12200},
{19450,36850,12175},
{19500,36830,12075},
{19530,36820,12050},
{19570,36790,11975},
{19610,36760,11925},
{19640,36730,11875},
{19680,36730,11850}
}

};

/* ============================================================
 * function prototype
 * ============================================================
 */

#endif
