/*
Database "company_employee" contains tables:
	company
	employment
	people
*/

#ifndef COMPANY_EMPLOYEE
#define COMPANY_EMPLOYEE

struct T_company {
	double company_id;
	char name[40];
	char headquarters[12];
	char industry[13];
	double sales_in_billion;
	double profits_in_billion;
	double assets_in_billion;
	double market_value_in_billion;
};

struct T_employment {
	double company_id;	// --> company.company_id
	double people_id;	// --> people.people_id
	double year_working;
};

struct T_people {
	double people_id;
	double age;
	char name[15];
	char nationality[14];
	char graduation_college[24];
};

struct T_company
company[] = {
	{  1.0,                              "ExxonMobil",         "USA",  "Oil and gas", 433.5, 41.1,  331.1, 407.4 },
	{  2.0,                          "JPMorgan Chase",         "USA",      "Banking", 110.8, 19.0, 2265.8, 170.1 },
	{  3.0,                        "General Electric",         "USA", "Conglomerate", 147.3, 14.2,  717.2, 213.7 },
	{  4.0,                       "Royal Dutch Shell", "Netherlands",  "Oil and gas", 470.2, 30.9,  340.5, 227.6 },
	{  5.0, "Industrial and Commercial Bank of China",       "China",      "Banking",  82.6, 25.1, 2039.1, 237.4 },
	{  6.0,                                    "HSBC",          "UK",      "Banking", 102.0, 16.2, 2550.0, 164.3 },
	{  7.0,                              "PetroChina",       "China",  "Oil and gas", 310.1, 20.6,  304.7, 294.7 },
	{  8.0,                      "Berkshire Hathaway",         "USA", "Conglomerate", 143.7, 10.3,  392.6, 202.2 },
	{  9.0,                             "Wells Fargo",         "USA",      "Banking",  87.6, 15.9, 1313.9, 178.7 },
	{ 10.0,                               "Petrobras",      "Brazil",  "Oil and gas", 145.9, 20.1,  319.4, 180.0 },
	{ 11.0,                                      "BP",          "UK",  "Oil and gas", 375.5, 25.7,  292.5, 147.4 },
	{ 12.0,                                 "Chevron",         "USA",  "Oil and gas", 236.3, 26.9,  209.5, 218.0 },
	{ 13.0,                 "China Construction Bank",       "China",      "Banking",  68.7, 20.5, 1637.8, 201.9 },
	{ 14.0,                               "Citigroup",         "USA",      "Banking", 102.6, 11.1, 1873.9, 107.5 },
	{ 15.0,                                 "Gazprom",      "Russia",  "Oil and gas", 117.6, 31.7,  302.6, 159.8 },
	{ 16.0,                                 "Walmart",         "USA",    "Retailing", 447.0, 15.7,  193.4, 208.4 },
	{ 17.0,                        "Volkswagen Group",     "Germany",   "Automotive", 221.9, 21.5,  328.7,  79.5 },
	{ 18.0,                                   "Total",      "France",  "Oil and gas", 216.2, 15.9,  213.0, 132.4 },
	{ 19.0,              "Agricultural Bank of China",       "China",      "Banking",  62.4, 14.4, 1563.9, 154.8 }
};

struct T_employment
employment[] = {
	{ 11, 3, 2 },
	{ 13, 2, 3 },
	{ 17, 7, 4 },
	{ 15, 1, 1 },
	{  7, 4, 1 }
};

struct T_people
people[] = {
	{ 1, 27,   "Reggie Lewis", "United States",            "Northeastern" },
	{ 2, 25,    "Brad Lohaus", "United States",                    "Iowa" },
	{ 3, 37,    "Tom Sheehey", "United Kindom",                "Virginia" },
	{ 4, 31, "Darryl Kennedy", "United States",                "Oklahoma" },
	{ 5, 34,   "David Butler", "United Kindom",              "California" },
	{ 6, 37,    "Tim Naegeli", "United States", "Wisconsin–Stevens Point" },
	{ 7, 30, "Jerry Corcoran", "United States",            "Northeastern" }
};

#endif