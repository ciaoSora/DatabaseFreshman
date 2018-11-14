/*
Database "storm_record" contains tables:
	affected_region
	region
	storm
*/

#ifndef STORM_RECORD
#define STORM_RECORD

struct T_affected_region {
	double region_id;	// --> region.region_id
	double storm_id;	// --> storm.storm_id
	double number_city_affected;
};

struct T_region {
	double region_id;
	char region_code[3];
	char region_name[20];
};

struct T_storm {
	double storm_id;
	char name[11];
	char dates_active[24];
	double max_speed;
	double damage_millions_usd;
	double number_deaths;
};

struct T_affected_region
affected_region[] = {
	{  1, 1, 10.0 },
	{  2, 1, 15.0 },
	{  3, 3, 30.0 },
	{  1, 4, 22.0 },
	{ 12, 5, 37.0 },
	{  2, 5, 12.0 }
};

struct T_region
region[] = {
	{  1, "AF",         "Afghanistan" },
	{  2, "AL",             "Albania" },
	{  3, "DZ",             "Algeria" },
	{  4, "DS",      "American Samoa" },
	{  5, "AD",             "Andorra" },
	{  6, "AO",              "Angola" },
	{  7, "AI",            "Anguilla" },
	{  8, "AQ",          "Antarctica" },
	{  9, "AG", "Antigua and Barbuda" },
	{ 10, "CY",              "Cyprus" },
	{ 11, "CZ",      "Czech Republic" },
	{ 12, "DK",             "Denmark" },
	{ 13, "DJ",            "Djibouti" }
};

struct T_storm
storm[] = {
	{  1,        "One",             "May19–May25",  995,  13.0,  0 },
	{  2,        "Two",        "August3–August10",  972, 10.75,  7 },
	{  3,      "Three",        "August5–August14",  972,  13.0, 52 },
	{  4,       "Four",     "August26–September2",  961,  4.05,  7 },
	{  5,       "Five",  "September7–September17",  988,  1.49,  3 },
	{  6,        "Six", "September18–September25", 1002, 0.039,  2 },
	{  7,      "Seven", "September22–September28",  977,  13.0,  0 },
	{  8,      "Eight",     "October20–October24",  983,  13.0,  0 },
	{  9,       "Nine",     "October24–October26", 1007,  13.0,  0 },
	{ 10, "9 cyclones",        "May19 –October26",  961,  29.3, 71 }
};

#endif