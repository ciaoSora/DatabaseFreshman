/*
Database "company_office" contains tables:
	buildings
	companies
	office_locations
*/

#ifndef COMPANY_OFFICE
#define COMPANY_OFFICE

struct T_buildings {
	double id;
	char name[36];
	char city[12];
	double height;
	double stories;
	char status[19];
};

struct T_companies {
	double id;
	char name[40];
	char headquarters[12];
	char industry[19];
	double sales_billion;
	double profits_billion;
	double assets_billion;
	char market_value_billion[6];
};

struct T_office_locations {
	double building_id;	// --> buildings.id
	double company_id;	// --> companies.id
	double move_in_year;
};

struct T_buildings
buildings[] = {
	{  1,                           "Torre KOI",   "Monterrey", 220,  67, "under construction" },
	{  2,                       "Torre Mitikah", "Mexico City", 210,  60, "under construction" },
	{  3,                   "Punto Chapultepec", "Mexico City", 210,  59,           "proposed" },
	{  4,                       "Torre Reforma", "Mexico City", 330,  57, "under construction" },
	{  5,           "Corporativo BBVA Bancomer", "Mexico City", 220,  50, "under construction" },
	{  6,                         "Reforma 432", "Mexico City", 300, 100, "under construction" },
	{  7,                 "Torre New York Life", "Mexico City",  50,   6, "under construction" },
	{  8,                            "LIU East",   "Monterrey",  73,  20, "under construction" },
	{  9, "Residencial Vidalta Torre Altaire 2", "Mexico City", 150,  44,            "on-hold" },
	{ 10, "Residencial Vidalta Torre Altaire 3", "Mexico City", 200,  44,            "on-hold" },
	{ 11,                          "Reforma 90", "Mexico City", 200,  42,            "on-hold" },
	{ 12,            "Ritz-Carlton Mexico City", "Mexico City", 100,  34,            "on-hold" }
};

struct T_companies
companies[] = {
	{  1,                          "JPMorgan Chase",         "USA",            "Banking", 115.5, 17.4, 2117.6, "182.2" },
	{  2,                                    "HSBC",          "UK",            "Banking", 103.3, 13.3, 2467.9, "186.5" },
	{  3,                        "General Electric",         "USA",       "Conglomerate", 156.2, 11.6,  751.2, "216.2" },
	{  4,                              "ExxonMobil",         "USA",        "Oil and gas", 341.6, 30.5,  302.5, "407.2" },
	{  5,                       "Royal Dutch Shell", "Netherlands",        "Oil and gas", 369.1, 20.1,  317.2, "212.9" },
	{  6,                              "PetroChina",       "China",        "Oil and gas", 222.3, 21.2,  251.3, "320.8" },
	{  7, "Industrial and Commercial Bank of China",       "China",            "Banking",  69.2, 18.8, 1723.5, "239.5" },
	{  8,                      "Berkshire Hathaway",         "USA",       "Conglomerate", 136.2, 13.0,  372.2,   "211" },
	{  9,                               "Petrobras",      "Brazil",        "Oil and gas", 121.3, 21.2,  313.2, "238.8" },
	{ 10,                               "Citigroup",         "USA",            "Banking", 111.5, 10.6, 1913.9, "132.8" },
	{ 11,                             "BNP Paribas",      "France",            "Banking", 130.4, 10.5, 2680.7,    "88" },
	{ 12,                             "Wells Fargo",         "USA",            "Banking",  93.2, 12.4, 1258.1, "170.6" },
	{ 13,                         "Santander Group",       "Spain",            "Banking", 109.7, 12.8, 1570.6,  "94.7" },
	{ 14,                               "AT&T Inc.",         "USA", "Telecommunications", 124.3, 19.9,  268.5, "168.2" },
	{ 15,                                 "Gazprom",      "Russia",        "Oil and gas",  98.7, 25.7,  275.9, "172.9" },
	{ 16,                                 "Chevron",         "USA",        "Oil and gas", 189.6, 19.0,  184.8, "200.6" },
	{ 17,                 "China Construction Bank",       "China",            "Banking",  58.2, 15.6, 1408.0, "224.8" },
	{ 18,                                 "Walmart",         "USA",          "Retailing", 421.8, 16.4,  180.7, "187.3" },
	{ 19,                                   "Total",      "France",        "Oil and gas", 188.1, 14.2,  192.8,   "138" }
};

struct T_office_locations
office_locations[] = {
	{  1,  1, 2021 },
	{  2,  2, 2022 },
	{  3,  4, 2023 },
	{  4,  3, 2024 },
	{  5,  3, 2025 },
	{  5,  7, 2026 },
	{ 11,  5, 2027 },
	{  7,  4, 2027 },
	{  3,  2, 2028 },
	{  3,  9, 2029 },
	{ 10,  9, 2031 },
	{  6,  9, 2022 },
	{  8, 19, 2022 },
	{  9, 10, 2019 },
	{  3, 11, 2020 },
	{  2, 11, 2025 }
};

#endif