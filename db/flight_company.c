/*
Database "flight_company" contains tables:
	airport
	flight
	operate_company
*/

#ifndef FLIGHT_COMPANY
#define FLIGHT_COMPANY

struct T_airport {
	double id;
	char city[10];
	char country[14];
	char iata[4];
	char icao[5];
	char name[29];
};

struct T_flight {
	double id;
	char vehicle_flight_number[10];
	char date[18];
	char pilot[9];
	double velocity;
	double altitude;
	double airport_id;	// --> airport.id
	double company_id;	// --> operate_company.id
};

struct T_operate_company {
	double id;
	char name[46];
	char type[14];
	char principal_activities[18];
	char incorporated_in[10];
	double group_equity_shareholding;
};

struct T_airport
airport[] = {
	{ 1,  "Akureyri",       "Iceland", "AEY", "BIAR",             "Akureyri Airport" },
	{ 2, "Amsterdam",   "Netherlands", "AMS", "EHAM",             "Schiphol Airport" },
	{ 3, "Anchorage", "United States", "ANC", "PANC",          "Ted Stevens Airport" },
	{ 4, "Baltimore", "United States", "BWI", "KBWI", "Baltimore-Washington Airport" },
	{ 5, "Barcelona",         "Spain", "BCN", "LEBL",              "El Prat Airport" },
	{ 6,    "Bergen",        "Norway", "BGO", "ENBR",               "Bergen Airport" },
	{ 7,   "Billund",       "Denmark", "BLL", "EKBI",              "Billund Airport" },
	{ 8,    "Boston", "United States", "BOS", "KBOS",  "Logan International Airport" },
	{ 9,  "Brussels",       "Belgium", "BRU", "EBBR",             "National Airport" }
};

struct T_flight
flight[] = {
	{  1,  "M2-F1 #0",     "March 1, 1963", "Thompson", 135.0,    0.0, 1,  2 },
	{  2,  "M2-F1 #1",   "August 16, 1963", "Thompson", 240.0, 3650.0, 2,  3 },
	{  3,  "M2-F1 #6", "September 3, 1963", "Thompson", 240.0, 3650.0, 2,  4 },
	{  4, "M2-F1 #13",  "October 25, 1963", "Thompson", 240.0, 3650.0, 3,  4 },
	{  5, "M2-F1 #14",  "November 8, 1963", "Thompson", 240.0, 3650.0, 4,  5 },
	{  6, "M2-F1 #21",  "January 29, 1964", "Thompson", 240.0, 3650.0, 4,  6 },
	{  7, "M2-F1 #33",    "March 30, 1964", "Peterson", 240.0, 3650.0, 5, 11 },
	{  8, "M2-F1 #39",      "May 19, 1964", "Peterson", 240.0, 3650.0, 2, 13 },
	{  9, "M2-F1 #61",     "July 16, 1965", "Thompson", 240.0, 3650.0, 6, 11 },
	{ 10, "M2-F1 #64",   "August 30, 1965", "Thompson", 240.0, 3650.0, 9,  1 },
	{ 11, "M2-F1 #70",   "October 8, 1965", "Thompson", 240.0, 3650.0, 4,  5 },
	{ 12, "M2-F1 #71",    "March 28, 1966", "Thompson", 240.0, 3650.0, 6,  7 },
	{ 13, "M2-F1 #73",    "August 4, 1966", "Peterson", 240.0, 3650.0, 8,  9 }
};

struct T_operate_company
operate_company[] = {
	{  1,                                     "Air China",     "Corporate",           "Airline",     "China", 18.77 },
	{  2,                               "Air China Cargo", "Joint Venture",     "Cargo airline",     "China",  49.0 },
	{  3,                                 "Air Hong Kong", "Joint Venture",     "Cargo airline", "Hong Kong",  60.0 },
	{  4,                                     "Dragonair",    "Subsidiary",           "Airline", "Hong Kong", 100.0 },
	{  5,                          "Cathay Pacific Cargo",    "Subsidiary",     "Cargo airline", "Hong Kong", 100.0 },
	{  6, "Cathay Pacific Catering Services (HK) Limited",    "Subsidiary", "Catering services", "Hong Kong", 100.0 },
	{  7,               "Cathay Pacific Services Limited",    "Subsidiary",             "Cargo", "Hong Kong", 100.0 },
	{  8,                       "Cathay Pacific Holidays",    "Subsidiary",     "Travel agency", "Hong Kong", 100.0 },
	{  9,                            "Dragonair Holidays",    "Subsidiary",     "Travel agency", "Hong Kong", 100.0 },
	{ 10,                    "Hong Kong Airport Services",    "Subsidiary",   "Ground handling", "Hong Kong", 100.0 },
	{ 11,                 "Vogue Laundry Service Limited",    "Subsidiary",           "Laundry", "Hong Kong", 100.0 },
	{ 12,                "China Pacific Laundry Services", "Joint Venture",           "Laundry",    "Taiwan",  45.0 },
	{ 13,               "VN/CX Catering Services Limited", "Joint Venture", "Catering services",   "Vietnam",  40.0 },
	{ 14,                 "CLS Catering Services Limited", "Joint Venture", "Catering services",    "Canada",  30.0 }
};

#endif