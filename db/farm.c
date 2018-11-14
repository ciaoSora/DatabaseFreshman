/*
Database "farm" contains tables:
	city
	competition_record
	farm
	farm_competition
*/

#ifndef FARM
#define FARM

struct T_city {
	double city_id;
	char official_name[24];
	char status[8];
	double area_km_2;
	double population;
	char census_ranking[14];
};

struct T_competition_record {
	double competition_id;	// --> farm_competition.competition_id
	double farm_id;	// --> farm.farm_id
	double rank;
};

struct T_farm {
	double farm_id;
	double year;
	double total_horses;
	double working_horses;
	double total_cattle;
	double oxen;
	double bulls;
	double cows;
	double pigs;
	double sheep_and_goats;
};

struct T_farm_competition {
	double competition_id;
	double year;
	char theme[20];
	double host_city_id;	// --> city.city_id
	char hosts[37];
};

struct T_city
city[] = {
	{ 1, "Grand Falls/Grand-Sault",    "Town", 18.06, 5706.0,   "636 of 5008" },
	{ 2,           "Perth-Andover", "Village",  8.89, 1778.0, "1442 of 5,008" },
	{ 3,            "Plaster Rock", "Village",  3.09, 1135.0, "1936 of 5,008" },
	{ 4,                "Drummond", "Village",  8.91,  775.0,  "2418 of 5008" },
	{ 5,               "Aroostook", "Village",  2.24,  351.0,  "3460 of 5008" }
};

struct T_competition_record
competition_record[] = {
	{ 1, 8, 1 },
	{ 1, 2, 2 },
	{ 1, 3, 3 },
	{ 2, 1, 3 },
	{ 2, 4, 1 },
	{ 2, 3, 2 },
	{ 3, 7, 1 },
	{ 3, 1, 3 },
	{ 4, 3, 2 },
	{ 4, 1, 4 },
	{ 5, 5, 1 },
	{ 5, 3, 2 }
};

struct T_farm
farm[] = {
	{ 1, 1927, 5056.5, 3900.1, 8374.5, 805.5, 31.6, 3852.1, 4412.4, 7956.3 },
	{ 2, 1928, 5486.9, 4090.5, 8604.8, 895.3, 32.8, 3987.0, 6962.9, 8112.2 },
	{ 3, 1929, 5607.5, 4198.8, 7611.0, 593.7, 26.9, 3873.0, 4161.2, 7030.8 },
	{ 4, 1930, 5308.2, 3721.6, 6274.1, 254.8, 49.6, 3471.6, 3171.8, 4533.4 },
	{ 5, 1931, 4781.3, 3593.7, 6189.5, 113.8, 40.0, 3377.0, 3373.3, 3364.8 },
	{ 6, 1932, 3658.9, 3711.6, 5006.7, 105.2, 71.6, 2739.5, 2623.7, 2109.5 },
	{ 7, 1933, 2604.8, 3711.2, 4446.3, 116.9, 37.6, 2407.2, 2089.2, 2004.7 },
	{ 8, 1934, 2546.9, 2197.3, 5277.5, 156.5, 46.7, 2518.0, 4236.7, 2197.1 }
};

struct T_farm_competition
farm_competition[] = {
	{ 1, 2013, "Carnival M is back!", 1, "Miley Cyrus Jared Leto and Karen Mok" },
	{ 2, 2006,         "Codehunters", 2,        "Leehom Wang and Kelly Rowland" },
	{ 3, 2005,        "MTV Asia Aid", 3,                          "Alicia Keys" },
	{ 4, 2004,     "Valentine's Day", 4,       "Vanness Wu and Michelle Branch" },
	{ 5, 2003,            "MTV Cube", 5,                  "Shaggy and Coco Lee" },
	{ 6, 2002,              "Aliens", 5,        "Mandy Moore and Ronan Keating" }
};

#endif