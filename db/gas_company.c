/*
Database "gas_company" contains tables:
	company
	gas_station
	station_company
*/

#ifndef GAS_COMPANY
#define GAS_COMPANY

struct T_company {
	double company_id;
	double rank;
	char company[40];
	char headquarters[12];
	char main_industry[13];
	double sales_billion;
	double profits_billion;
	double assets_billion;
	double market_value;
};

struct T_gas_station {
	double station_id;
	double open_year;
	char location[14];
	char manager_name[24];
	char vice_manager_name[21];
	char representative_name[20];
};

struct T_station_company {
	double station_id;	// --> gas_station.station_id
	double company_id;	// --> company.company_id
	double rank_of_the_year;
};

struct T_company
company[] = {
	{  1,  1,                              "ExxonMobil",         "USA",  "Oil and gas", 433.5, 41.1,  331.1, 407.4 },
	{  2,  3,                        "General Electric",         "USA", "Conglomerate", 147.3, 14.2,  717.2, 213.7 },
	{  3,  4,                       "Royal Dutch Shell", "Netherlands",  "Oil and gas", 470.2, 30.9,  340.5, 227.6 },
	{  4,  5, "Industrial and Commercial Bank of China",       "China",      "Banking",  82.6, 25.1, 2039.1, 237.4 },
	{  5,  6,                                    "HSBC",          "UK",      "Banking", 102.0, 16.2, 2550.0, 164.3 },
	{  6,  7,                              "PetroChina",       "China",  "Oil and gas", 310.1, 20.6,  304.7, 294.7 },
	{  7,  8,                      "Berkshire Hathaway",         "USA", "Conglomerate", 143.7, 10.3,  392.6, 202.2 },
	{  8,  9,                             "Wells Fargo",         "USA",      "Banking",  87.6, 15.9, 1313.9, 178.7 },
	{  9, 10,                               "Petrobras",      "Brazil",  "Oil and gas", 145.9, 20.1,  319.4, 180.0 },
	{ 10, 11,                                      "BP",          "UK",  "Oil and gas", 375.5, 25.7,  292.5, 147.4 }
};

struct T_gas_station
gas_station[] = {
	{  1, 1998,    "Herne Hill",           "BrianWingrave",       "Russell Denman",          "Clive Burr" },
	{  2, 1999,  "Channel Hill",             "SimonMarloe",        "Russell Brown",      "Rob Jefferies " },
	{  3, 2000, "Reading North", "Simon Cope Derek Marloe",         "James Colin ", "Dave Edwards Roger " },
	{  4, 2002,      "Herne St",            "Colin Denman",       "Martin Garnham",          "Ray Hughes" },
	{  5, 2003,       "Reading",            "Colin Denman",       "Martin Freeman",      "Andrew Russell" },
	{  6, 2004,     "Herne Ave",                "Tom Whit",        "Simon Gaywood",           "Tony Gibb" },
	{  7, 2005,   "Hennry Hill",            "Bryan Taylor", "James Holland-Leader",       "Simon Gaywood" },
	{  8, 2006,      "Jane Ave",             "BryanDenman", "James Holland-Leader",       "Simon Gaywood" },
	{  9, 2007,   "Maindy Hill",            "Tony Bristow",           "JameMarloe",       "Courtney Rowe" },
	{ 10, 2008,    "Maindy Ave",               "Luke Rowe",          "TonyBristow",         "Chris Pyatt" },
	{ 11, 2009,    "Newport Rd",                "Jon Rowe",        "Steve Parsons",            "Tim Read" }
};

struct T_station_company
station_company[] = {
	{ 11,  1,  1 },
	{  1,  3,  2 },
	{  6,  6,  3 },
	{  7,  9,  4 },
	{ 10, 10,  9 },
	{  4,  1, 13 }
};

#endif