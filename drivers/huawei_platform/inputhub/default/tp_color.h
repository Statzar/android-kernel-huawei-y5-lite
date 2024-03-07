#ifndef __LINUX_LCDPARA_H__
#define __LINUX_LCDPARA_H__

#include "contexthub_boot.h"

//lint -save -e732 -e713
enum PHONE_TYPE {
	NEXT = 11,
	KNIGHT,
	EVA,
	FARADAY,
	VIENNA,
	VNS,
	EDISON,
	BTV,
        NATASHA,
	CHICAGO,
	CMB,
	LON,/*22*/
	VICTORIA,
	VICKY,
	BLN,
	PRA,/*26*/
	DUKE,
	WAS,
	ALPS,/*29*/
	BLANC,
	EMILY,/*31*/
	BKL = 32,
	NEO = 33,
	CHARLOTTE = 34,
};

enum PHONE_VERSION {
	V3 = 10,		/*decimal base*/
	V3_A = 101,
	V3_D = 102,
	V4 = 11,
	VN1,
	VN2,
	V1,
};

enum ts_panel_id {
	TS_PANEL_OFILIM 	 	= 0,
	TS_PANEL_EELY		 	= 1,
	TS_PANEL_TRULY	 		= 2,
	TS_PANEL_MUTTO	 		= 3,
	TS_PANEL_GIS		 	= 4,
	TS_PANEL_JUNDA	 		= 5,
	TS_PANEL_LENS 		 	= 6,
	TS_PANEL_YASSY	 		= 7,
	TS_PANEL_JDI 		 	= 6,
	TS_PANEL_SAMSUNG  		= 9,
	TS_PANEL_LG 		 	= 10,
	TS_PANEL_TIANMA 	 	= 11,
	TS_PANEL_CMI 		 	= 12,
	TS_PANEL_BOE  		 	= 13,
	TS_PANEL_CTC 		 	= 14,
	TS_PANEL_EDO 		 	= 15,
	TS_PANEL_SHARP	 		= 16,
	TS_PANEL_AUO 			= 17,
	TS_PANEL_TOPTOUCH 		= 18,
	TS_PANEL_BOE_BAK		= 19,
	TS_PANEL_CTC_BAK 		= 20,
	TS_PANEL_UNKNOWN 		= 0xFF,
};

#define DEFAULT_TPLCD (0)

#define WHITE	0xE1
#define BLACK	0xD2
#define BLACK2   0x4B
#define PINK  	0xC3
#define PINK_GOLD 0x1E
#define RED		0xB4
#define YELLOW	0xA5
#define BLUE	0x96
#define GOLD  0x87
#define GRAY  0x78
#define BROWN  0x69
#define CAFE_2  0x5A
#define SILVER  0x3C

/* Although the GRAY and Black TP's RGB ink is same ,but some product may has both the GRAY
and Black TP,so must set the als para for  GRAY and Black TP

Although the CAFE_2 and BROWN TP's RGB ink is same ,but some product may has both the CAFE_2
and BROWN TP,so must set the als para for  CAFE_2 and BROWN TP
*/
BH1745_ALS_PARA_TABLE als_para_diff_tp_color_table[] = {
	{ALPS, V1, DEFAULT_TPLCD, GOLD,
	{278,247,180,1450,1443,278,732,2299,100,-2489,10630,-4085,
	 8811,1349,1734,5421,2020,3624,4206,1331,435,3496,8119,6000,150}},
	{ALPS, V1, DEFAULT_TPLCD, BLACK,
	{272,212,205,1188,1009,272,631,1899,100,-2580,9747,-4087,
	 7817,1376,1668,4914,1970,4443,5334,1963,553,3870,8506,6000,150}},
	{ALPS, V1, DEFAULT_TPLCD, GRAY,
	{272,212,205,1188,1009,272,631,1899,100,-2580,9747,-4087,
	 7817,1376,1668,4914,1970,4443,5334,1963,553,3870,8506,6000,150}},
	{ALPS, V1, DEFAULT_TPLCD, WHITE,
	{201,63,68,306,264,201,454,1347,100,-2316,6708,-3320,
	 5631,1048,1662,2476,1956,10342,15975,8151,1556,2769,8115,6000,150}},
	 {ALPS, V3, DEFAULT_TPLCD, GOLD,
	{227,357,307,1938,1831,227,698,2044,100,-2166,9692,-3951,
	 8560,1062,1827,4010,1947,3194,3787,1203,385,3496,8119,6000,150}},
	{ALPS, V3, DEFAULT_TPLCD, WHITE,
	{202,92,109,422,355,202,455,1269,100,-2100,6412,-3539,
	 5768,907,1742,2433,1883,9740,14171,7196,1442,3769,8115,5000,200}},
	{ALPS, V3, DEFAULT_TPLCD, BLACK,
	{272,212,205,1188,1009,272,631,1899,100,-2580,9747,-4087,
	 7817,1376,1668,4914,1970,4443,5334,1963,553,3870,8506,6000,150}},
	{ALPS, V3, DEFAULT_TPLCD, GRAY,
	{272,212,205,1188,1009,272,631,1899,100,-2580,9747,-4087,
	 7817,1376,1668,4914,1970,4443,5334,1963,553,3870,8506,6000,150}},
	{ALPS, V3_D, DEFAULT_TPLCD, GOLD,
	{169,269,332,1211,989,169,416,1178,100,-2082,6273,-3328,
	 5220,889,1742,2182,1905,2831,4745,2482,445,3253,8191,6000,150}},
	{ALPS, V3, DEFAULT_TPLCD, BROWN,
	{247,180,168,1305,1175,247,609,1959,100,-2390,8743,-3767,
	 7190,1396,1819,4486,2044,4717,4679,1852,532,3467,4521,6000,150}},
	{ALPS, V3_D, DEFAULT_TPLCD, BLACK,
	{272,212,205,1188,1009,272,631,1899,100,-2580,9747,-4087,
	 7817,1376,1668,4914,1970,4443,5334,1963,553,3870,8506,6000,150}},
	{ALPS, V3_D, DEFAULT_TPLCD, GRAY,
	{272,212,205,1188,1009,272,631,1899,100,-2580,9747,-4087,
	 7817,1376,1668,4914,1970,4443,5334,1963,553,3870,8506,6000,150}},
	{ALPS, V3_D, DEFAULT_TPLCD, BROWN,
	{247,180,168,1305,1175,247,609,1959,100,-2390,8743,-3767,
	 7190,1396,1819,4486,2044,4717,4679,1852,532,3467,4521,6000,150}},
	{ALPS, VN1, DEFAULT_TPLCD, GOLD,
	{169,269,332,1211,989,169,416,1178,100,-2082,6273,-3328,
	 5220,889,1742,2182,1905,2831,4745,2482,445,3253,8191,5000,200}},
	{ALPS, VN1, DEFAULT_TPLCD, BROWN,
	{247,180,168,1305,1175,247,609,1959,100,-2390,8743,-3767,
	 7190,1396,1819,4486,2044,4717,4679,1852,532,3467,4521,5000,200}},
	{ALPS, VN1, DEFAULT_TPLCD, BLACK,
	{272,212,205,1188,1009,272,631,1899,100,-2580,9747,-4087,
	 7817,1376,1668,4914,1970,4443,5334,1963,553,3870,8506,5000,200}},
	{ALPS, VN1, DEFAULT_TPLCD, BLACK2,
	{272,212,205,1188,1009,272,631,1899,100,-2580,9747,-4087,
	 7817,1376,1668,4914,1970,4443,5334,1963,553,3870,8506,5000,200}},
	{ALPS, VN1, DEFAULT_TPLCD, GRAY,
	{272,212,205,1188,1009,272,631,1899,100,-2580,9747,-4087,
	 7817,1376,1668,4914,1970,4443,5334,1963,553,3870,8506,5000,200}},
	{ALPS, VN1, DEFAULT_TPLCD, PINK_GOLD,
	{269,58,46,392,392,269,774,2483,100,-2532,11739,-4033,
	 8865,1514,1786,5431,2045,14636,13294,4475,1652,3171,6991,4000,250}},
	{BLANC, V3, DEFAULT_TPLCD, PINK_GOLD,
	{247,316,265,2630,2328,247,465,1635,100,-2288,6127,-3330,
	  5313,1340,1833,3350,2115,2525,2343,1342,296,3171,6991,4000,250}},
	{BLANC, V3, DEFAULT_TPLCD, BROWN,
	{239,187,147,1030,916,239,512,1639,100,-2272,7173,-3419,
	 6110,1105,1734,3254,2026,4971,6059,2992,648,3171,6991,4000,250}},
	{BLANC, V3, DEFAULT_TPLCD, BLUE,
	{202,439,167,3249,1427,202,954,4211,100,-2389,8069,-2132,
	 10123,1398,1811,1930,2288,3192,2048,932,405,3171,6991,4000,250}},
	{BLANC, V3, DEFAULT_TPLCD, GOLD,
	{160,166,155,739,676,160,420,1259,100,-2177,6303,-3241,
	 5158,926,1693,2153,1963,4733,7681,3809,739,3171,6991,4000,250}},
	{BLANC, VN1, DEFAULT_TPLCD, BLUE,
	{405,441,166,3348,3505,405,1158,3969,100,-2220,12642,-5075,
	 13359,1314,1953,14578,1863,1878,1630,412,201,3171,6991,4000,250}},
	{BLANC, VN1, DEFAULT_TPLCD, BLACK,
	{305,227,152,1431,1517,305,829,2706,100,-2119,9795,-4237,
	 9731,1111,1896,6029,1798,3611,3802,1202,432,3171,6991,4000,250}},
	{BLANC, VN1, DEFAULT_TPLCD, BLACK2,
	{305,227,152,1431,1517,305,829,2706,100,-2119,9795,-4237,
	 9731,1111,1896,6330,1888,3611,3802,1202,432,3171,6991,4000,250}},
	{BLANC, VN1, DEFAULT_TPLCD, GRAY,
	{305,261,159,1643,1579,305,829,2706,100,-2119,9795,-4237,
	 9731,1111,1896,6872,2050,3611,3802,1202,432,3171,6991,4000,250}},
	{BLANC, VN1, DEFAULT_TPLCD, BROWN,
	{308,138,102,1018,993,308,714,2464,100,-2199,8517,-3912,
	 8224,1245,1899,5437,1966,5629,5288,1998,627,3171,6991,4000,250}},
	{BLANC, VN1, DEFAULT_TPLCD, PINK_GOLD,
	{264,65,47,489,470,264,859,2859,100,-2421,11443,-4167,
	 9788,1489,1866,6699,2092,10810,10131,3162,1186,3171,6991,4000,250}},

	{BKL, V3, DEFAULT_TPLCD, BLACK,
	{600, 1513, 119, 8644, 7443, 836, 1086, 3890, 100, -2470, 6320, -3633,
	8942, 1229, 1620, 6955, 2213, 839, 535, 343, 88, 2714, 5545, 30000, 0}},
	{BKL, V3, DEFAULT_TPLCD, WHITE,
	{202, 222, 112, 928, 837, 202, 927, 2330,100, -2571, 9630, -2872, 8819,
	1144, 1582, 2352, 1972, 6284, 6431, 2317, 687, 3698, 6921, 30000, 0}},
	{BKL, V3, DEFAULT_TPLCD, BLUE,
	{360, 2538, 886, 2280, 1478, 360, 169, 304, 100, -6216, 4030, -2196,
	2228, 616, 458, 556, 1413, 525, 2802, 5825, 301, 3500, 6000, 30000, 0}},
	{NEO, V3, DEFAULT_TPLCD, GOLD,
	{405,530,196,4019,4133,405,1158,3969,100,-2220,12642,-5075,
	 13359,1314,1953,16379,2093,1878,1630,412,201,3171,6991,4000,250}},
	{NEO, V3, DEFAULT_TPLCD, BLUE,
	{405,530,196,4019,4133,405,1158,3969,100,-2220,12642,-5075,
	 13359,1314,1953,16379,2093,1878,1630,412,201,3171,6991,4000,250}},
	{NEO, V3, DEFAULT_TPLCD, BLACK,
	{305,261,159,1643,1579,305,829,2706,100,-2119,9795,-4237,
	 9731,1111,1896,6872,2050,5391,3722,1116,524,3761,6000,4000,250}},
	{NEO, V3, DEFAULT_TPLCD, BLACK2,
	{305,261,159,1643,1579,305,829,2706,100,-2119,9795,-4237,
	 9731,1111,1896,6872,2050,5391,3722,1116,524,3761,6000,4000,250}},
	{NEO, V3, DEFAULT_TPLCD, BROWN,
	{308,170,121,1257,1175,308,714,2464,100,-2199,8517,-3912,
	 8224,1245,1899,5784,2091,5629,5288,1998,627,3171,6991,4000,250}},
	{NEO, V3, DEFAULT_TPLCD, PINK_GOLD,
	{247,316,265,2630,2328,247,465,1635,100,-2288,6127,-3330,
	 5313,1340,1833,3350,2115,2525,2343,1342,296,3171,6991,4000,250}},
};

/* Although the GRAY and Black TP's RGB ink is same ,but some product may has both the GRAY
and Black TP,so must set the als para for  GRAY and Black TP

Although the CAFE_2 and BROWN TP's RGB ink is same ,but some product may has both the CAFE_2
and BROWN TP,so must set the als para for  CAFE_2 and BROWN TP
*/
APDS9251_ALS_PARA_TABLE apds_als_para_diff_tp_color_table[] = {
	{ALPS, V1, DEFAULT_TPLCD, GOLD,
	 {30165, -1970, 1572, 1377, 1056, 1019, 728, 1019, 415, 171, 163,
	  5800, 7806, 2138, 220, 3705, 9149, 5000, 200, 1, 24} },
	{ALPS, V1, DEFAULT_TPLCD, BLACK,
	 {22462, -887, 1285, 1142, 967, 1010, 806, 1010, 400, 168, 162,
	  6890, 9198, 2932, 260, 3283, 8671, 5000, 200, 1, 29} },
	{ALPS, V1, DEFAULT_TPLCD, GRAY,
	 {22462, -887, 1285, 1142, 967, 1010, 806, 1010, 400, 168, 162,
	  6890, 9198, 2932, 260, 3283, 8671, 5000, 200, 1, 29} },
	{ALPS, V1, DEFAULT_TPLCD, WHITE,
	 {8136, 1274, 364, 328, 299, 1000,1062, 1000, 294, 123, 121,
	  18316, 28410, 12294, 752, 2872, 6735, 5000, 200, 1, 42} },
	{ALPS, V3, DEFAULT_TPLCD, GOLD,
	 {20507, -451, 2091, 1942, 1671, 1002, 861, 1002, 350, 144, 138,
	  4956, 6660, 2042, 172, 3246, 8932, 5000, 200, 1, 26} },
	{ALPS, V3, DEFAULT_TPLCD, WHITE,
	 {9728, 926, 520, 474, 426, 1001,1000, 1001, 337, 138, 135,
	  15040, 22156, 10120, 576, 2872, 6735, 5000, 200, 1, 40} },
	{ALPS, V3, DEFAULT_TPLCD, BLACK,
	 {22462, -887, 1440, 1234, 967, 1010, 806, 1010, 400, 168, 162,
	  6890, 9198, 2932, 260, 3283, 8671, 5000, 200, 1, 29} },
	{ALPS, V3, DEFAULT_TPLCD, GRAY,
	 {22462, -887, 1440, 1234, 967, 1010, 806, 1010, 400, 168, 162,
	  6890, 9198, 2932, 260, 3283, 8671, 5000, 200, 1, 29} },
	{ALPS, V3_D, DEFAULT_TPLCD, GOLD,
	 {8371,1186, 1488, 1400, 1317, 1000, 967, 1000, 234, 93, 91,
	  4758, 7618, 3362, 174, 3148, 7100, 5000, 200, 1, 45} },
	{ALPS, V3, DEFAULT_TPLCD, BROWN,
	 {24058, -470, 1451, 1336, 1159, 1004, 789, 1004, 244, 100, 98,
	  7846, 8724, 2828, 236, 3605, 4203, 5000, 150, 1, 26} },
	{ALPS, V3_D, DEFAULT_TPLCD, BLACK,
	 {22462, -887, 1440, 1234, 967, 1010, 806, 1010, 400, 168, 162,
	  6890, 9198, 2932, 260, 3283, 8671, 5000, 200, 1, 29} },
	{ALPS, V3_D, DEFAULT_TPLCD, GRAY,
	 {22462, -887, 1440, 1234, 967, 1010, 806, 1010, 400, 168, 162,
	  6890, 9198, 2932, 260, 3283, 8671, 5000, 200, 1, 29} },
	{ALPS, V3_D, DEFAULT_TPLCD, BROWN,
	 {24058, -470, 1451, 1336, 1159, 1004, 789, 1004, 244, 100, 98,
	  7846, 8724, 2828, 236, 3605, 4203, 5000, 150, 1, 26} },
	{ALPS, VN1, DEFAULT_TPLCD, GOLD,
	 {8371,1186, 1488, 1400, 1317, 1000, 967, 1000, 234, 93, 91,
	  4758, 7618, 3362, 174, 3148, 7100, 5000, 200, 1, 45} },
	{ALPS, VN1, DEFAULT_TPLCD, BROWN,
	 {24058, -470, 1451, 1336, 1159, 1004, 789, 1004, 244, 100, 98,
	  7846, 8724, 2828, 236, 3605, 4203, 5000, 200, 1, 26} },
	{ALPS, VN1, DEFAULT_TPLCD, BLACK,
	 {22462, -887, 1440, 1234, 967, 1010, 806, 1010, 400, 168, 162,
	  6890, 9198, 2932, 260, 3283, 8671, 5000, 200, 1, 29} },
	{ALPS, VN1, DEFAULT_TPLCD, BLACK2,
	 {22462, -887, 1440, 1234, 967, 1010, 806, 1010, 400, 168, 162,
	  6890, 9198, 2932, 260, 3283, 8671, 5000, 200, 1, 29} },
	{ALPS, VN1, DEFAULT_TPLCD, GRAY,
	 {22462, -887, 1440, 1234, 967, 1010, 806, 1010, 400, 168, 162,
	  6890, 9198, 2932, 260, 3283, 8671, 5000, 200, 1, 29} },
	{BLANC, V3, DEFAULT_TPLCD, GOLD,
	 {7841, 1321, 950, 895, 848, 1000, 978, 1000, 218, 87, 83,
	  7628, 12020, 5516, 252,3171, 6991, 5000, 200, 1, 46} },
	{BLANC, V3, DEFAULT_TPLCD, BROWN,
	 {11115, 712, 1239, 1075, 966, 1001, 969, 1001, 354, 143, 140,
	  7520, 9700, 4386, 268,3171, 6991, 4000, 300, 1, 38} },
	{BLANC, V3, DEFAULT_TPLCD, PINK_GOLD,
	 {12036, 1206, 2909, 2633, 2198, 1000, 936, 1000, 224, 89, 86,
	  3974,4188, 1908, 116,3171, 6991, 4000, 300, 1, 32} },
	{BLANC, V3, DEFAULT_TPLCD, BLUE,
	 {20835, -1610, 3901, 1516, 843, 1010, 1182, 1010, 1110, 491, 447,
	  3750,3388, 1552, 490,3171, 6991, 4000, 300, 1, 25} },
	{BLANC, VN1, DEFAULT_TPLCD, BLACK,
	 {13021, 861, 1893, 1911, 1819, 1000, 891, 1000, 1093, 388, 357,
	  4254, 6672, 1991, 232, 3304, 6936, 4000, 300, 1, 34} },
	{BLANC, VN1, DEFAULT_TPLCD, BLACK2,
	 {13021, 861, 1893, 1911, 1819, 1000, 891, 1000, 1093, 388, 357,
	  4254, 6672, 1991, 232, 3304, 6936, 4000, 300, 1, 34} },
	{BLANC, VN1, DEFAULT_TPLCD, GRAY,
	 {13021, 861, 1893, 1911, 1819, 1000, 891, 1000, 1093, 388, 357,
	  4254, 6672, 1991, 232, 3304, 6936, 4000, 300, 1, 34} },
	{BLANC, VN1, DEFAULT_TPLCD, BROWN,
	 {12422, 940, 1294, 1319, 1295, 1000, 882, 1000,968, 352, 330,
	  6600, 9194, 3186, 348, 3304, 6936, 4000, 300, 1, 35} },
	{BLANC, VN1, DEFAULT_TPLCD, BLUE,
	 {12755, 1579, 4214, 4396, 4027, 1007, 1047, 1007, 1416, 496, 458,
	  2181, 3071, 755, 130, 3304, 6936, 4000, 300, 1, 24} },
	{BLANC, VN1, DEFAULT_TPLCD, PINK_GOLD,
	 {12036, 1206, 2909, 2633, 2198, 1000, 936, 1000, 224, 89, 86,
	  3974,4188, 1908, 116,3171, 6991, 4000, 300, 1, 32} },

	{BKL, V3, DEFAULT_TPLCD, BLACK,
	 {4399, 1650, 9764, 7384, 7357 , 992, 1082 , 851, 3098, 1954, 797,
	  601, 914, 521,  101, 3171, 6991, 30000, 0, 0, 32} },
	{BKL, V3, DEFAULT_TPLCD, WHITE,
	 {7196, 1616, 890, 874, 928, 957, 988, 901, 529, 300, 116,
	 7714, 12430, 4190,314,3171, 6991, 30000, 0, 0, 32} },
	{BKL, V3, DEFAULT_TPLCD, BLUE,
	 {348, 1418, 3674, 2449, 3144, 1198, 1165, 1184, 10509, 6263, 2270,
	  622, 3748, 9040, 314, 3171, 6991, 30000, 0, 0, 32} },

	{NEO, V3, DEFAULT_TPLCD, GOLD,
	 {7841, 1321, 950, 895, 848, 1000, 978, 1000, 218, 87, 83,
	  7628, 12020, 5516, 252,3171, 6991, 5000, 200, 1, 46} },
	{NEO, V3, DEFAULT_TPLCD, BLACK,
	 {7107, 1171, 1302, 1294, 1310, 1000, 964, 1000, 1783, 613, 593,
	  5841, 10446, 4140, 407, 3761, 6000, 4000, 250, 1, 53} },
	{NEO, V3, DEFAULT_TPLCD, BLACK2,
	 {7107, 1171, 1302, 1294, 1310, 1000, 964, 1000, 1783, 613, 593,
	  5841, 10446, 4140, 407, 3761, 6000, 4000, 250, 1, 53} },
	{NEO, V3, DEFAULT_TPLCD, BROWN,
	 {12422, 940, 1294, 1319, 1295, 1000, 882, 1000,968, 352, 330,
	  6600, 9194, 3186, 348, 3304, 6936, 4000, 300, 1, 35} },
	{NEO, V3, DEFAULT_TPLCD, BLUE,
	 {12755, 1579, 4214, 4396, 4027, 1007, 1047, 1007, 1416, 496, 458,
	  2181, 3071, 755, 130, 3304, 6936, 4000, 300, 1, 24} },
	{NEO, V3, DEFAULT_TPLCD, PINK_GOLD,
	 {12036, 1206, 2909, 2633, 2198, 1000, 936, 1000, 224, 89, 86,
	  3974,4188, 1908, 116,3171, 6991, 4000, 300, 1, 32} },
};

/* Although the GRAY and Black TP's RGB ink is same ,but some product may has both the GRAY
and Black TP,so must set the als para for  GRAY and Black TP

Although the CAFE_2 and BROWN TP's RGB ink is same ,but some product may has both the CAFE_2
and BROWN TP,so must set the als para for  CAFE_2 and BROWN TP
*/
TMD3725_ALS_PARA_TABLE tmd3725_als_para_diff_tp_color_table[] = {
	{EMILY, V3, DEFAULT_TPLCD, BLACK,
	 {100, 128, 1482, 2260, -1130, 1410, -2190, 3857, 739, 3369, 1247,
	  63, 64,87, 183, 3731, 5957, 4000,200} },
	{EMILY, V3, DEFAULT_TPLCD, GOLD,
	 {100, 128, 1482, 2260, -1130, 1410, -2190, 3857, 739, 3369, 1247,
	  63, 64,87, 183, 3731, 5957, 4000,200} },
	{EMILY, V3, DEFAULT_TPLCD, BLACK2,
	 {100, 128, 1482, 2260, -1130, 1410, -2190, 3857, 739, 3369, 1247,
	  63, 64,87, 183, 3731, 5957, 4000,200} },
	{EMILY, V3, DEFAULT_TPLCD, BROWN,
	{100, 128, 1482, 2260, -1130, 1410, -2190, 3857, 739, 3369, 1247,
	  63, 64,87, 183, 3731, 5957, 4000,200} },
	{EMILY, V3, DEFAULT_TPLCD, BLUE,
	{100, 128, 1482, 2260, -1130, 1410, -2190, 3857, 739, 3369, 1247,
	  63, 64,87, 183, 3731, 5957, 4000,200} },
	{EMILY, V3, DEFAULT_TPLCD, PINK_GOLD,
	 {100, 128, 1482, 2260, -1130, 1410, -2190, 3857, 739, 3369, 1247,
	  63, 64,87, 183, 3731, 5957, 4000,200} },

	{CHARLOTTE, V3, DEFAULT_TPLCD, BLACK,
	 {100, 128, 973, 4510, -4420, 6190, -6370, 3390, 2125, 2637, 1974,
	  63, 64,87, 183, 3731, 5957, 4000,200} },
	{CHARLOTTE, V3, DEFAULT_TPLCD, GOLD,
	 {100, 128, 973, 4510, -4420, 6190, -6370, 3390, 2125, 2637, 1974,
	  63, 64, 87, 183, 3731, 5957, 4000, 200 } },
	{CHARLOTTE, V3, DEFAULT_TPLCD, BLACK2,
	 {100, 128, 973, 4510, -4420, 6190, -6370, 3390, 2125, 2637, 1974,
	  63, 64, 87, 183, 3731, 5957, 4000, 200 } },
	{CHARLOTTE, V3, DEFAULT_TPLCD, BROWN,
	 {100, 128, 973, 4510, -4420, 6190, -6370, 3390, 2125, 2637, 1974,
	  63, 64, 87, 183, 3731, 5957, 4000, 200 } },
	{CHARLOTTE, V3, DEFAULT_TPLCD, BLUE,
	 {100, 128, 973, 4510, -4420, 6190, -6370, 3390, 2125, 2637, 1974,
	  63, 64, 87, 183, 3731, 5957, 4000, 200 } },
	{CHARLOTTE, V3, DEFAULT_TPLCD, PINK_GOLD,
	 {100, 128, 973, 4510, -4420, 6190, -6370, 3390, 2125, 2637, 1974,
	  63, 64, 87, 183, 3731, 5957, 4000, 200 } },

};

/*in the array of pinhole_als_para_diff_tp_color_table, these figures represent the parameter
for the als sensor */
PINHOLE_ALS_PARA_TABLE pinhole_als_para_diff_tp_color_table[] = {
	{BLN, V4, APDS9922, TS_PANEL_UNKNOWN, {1200, 400, 268, 327, 400,1}},
	{BLN, V4, APDS9922, TS_PANEL_OFILIM, {1200, 400, 314, 380, 536,1}},
	{BLN, V4, APDS9922, TS_PANEL_LENS, {1200, 400, 268, 327, 400,1}},
	{BLN, V4, APDS9922, TS_PANEL_EELY, {1300, 400, 303, 348, 560,1}},

	{BLN, V4, LTR578, TS_PANEL_UNKNOWN, {1200, 300, 570, 570, 930,1}},
	{BLN, V4, LTR578, TS_PANEL_OFILIM, {1200, 300, 600, 600, 800,1}},
	{BLN, V4, LTR578, TS_PANEL_LENS, {1200, 300, 450, 530, 620,1}},
	{BLN, V4, LTR578, TS_PANEL_EELY, {1200, 300, 570, 570, 930,1}},

	{PRA, V4, APDS9922, TS_PANEL_UNKNOWN, {980, 350, 306, 366, 558,1}},
	{PRA, V4, APDS9922, TS_PANEL_OFILIM, {980, 350, 330, 366, 620,1}},
	{PRA, V4, APDS9922, TS_PANEL_TRULY, {980, 350, 306, 366, 558,1}},
	{PRA, V4, APDS9922, TS_PANEL_EELY, {980, 350, 310, 390, 656,1}},

	{PRA, V4, LTR578, TS_PANEL_UNKNOWN, {1150, 350, 600, 600, 724,1}},
	{PRA, V4, LTR578, TS_PANEL_OFILIM, {1150, 350, 600, 600, 800,1}},
	{PRA, V4, LTR578, TS_PANEL_TRULY, {1150, 350, 600, 600, 724,1}},
	{PRA, V4, LTR578, TS_PANEL_EELY, {1150, 350, 480, 560, 900,1}},

	{WAS, V4, APDS9922, DEFAULT_TPLCD, {1100, 320, 250, 220, 500,0}},
	{WAS, V4, APDS9922, TM_TPLCD, {1100, 300, 246, 220, 438,0}},
	{WAS, V4, APDS9922, AUO_TPLCD, {1100, 300, 262, 204, 430,0}},
	{WAS, V4, APDS9922, EBBG_TPLCD, {1200, 300, 215, 214, 460,0}},
	{WAS, V4, APDS9922, JDI_TPLCD, {1100, 300, 240, 225, 460,0}},

	{WAS, V4, LTR578, DEFAULT_TPLCD, {1300, 320, 500, 500, 800,0}},
	{WAS, V4, LTR578, TM_TPLCD, {1350, 320, 550, 525, 900,0}},
	{WAS, V4, LTR578, AUO_TPLCD, {1200, 320, 553, 500, 861,0}},
	{WAS, V4, LTR578, EBBG_TPLCD, {1350, 320, 530, 510, 820,0}},
	{WAS, V4, LTR578, JDI_TPLCD, {1200, 320, 510, 490, 850,0}},
};

TMD2745_ALS_PARA_TABLE tmd2745_als_para_diff_tp_color_table[] = {
	/* tp_color reserved for future use */
	/* AMS TMD2745: Extend-Data Format -- {D_Factor, B_Coef, C_Coef, D_Coef, is_min_algo, is_auto_gain} */
	/* Here use WAS as an example */
	{WAS, V4, DEFAULT_TPLCD, 0, {538, 95, 1729, 190, 0, 0}},
};
RPR531_ALS_PARA_TABLE rpr531_als_para_diff_tp_color_table[] ={
	/* Here use PRA as an example */
	{PRA, V4, TS_PANEL_UNKNOWN,
		{12816,7653,2881,2727,7395,4179,1117,1087,1000,1580,1840,2506}},
};
#endif //__LINUX_LCDPARA_H__
