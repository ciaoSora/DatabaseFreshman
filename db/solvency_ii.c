/*
Database "solvency_ii" contains tables:
	addresses
	agreements
	assets
	assets_in_events
	channels
	events
	finances
	locations
	parties
	parties_in_events
	products
	products_in_events
*/

#ifndef SOLVENCY_II
#define SOLVENCY_II

struct T_addresses {
	double address_id;
	char address_details[60];
};

struct T_agreements {
	double document_id;
	double event_id;	// --> events.event_id
};

struct T_assets {
	double asset_id;
	char other_details[20];
};

struct T_assets_in_events {
	double asset_id;
	double event_id;	// --> events.event_id
};

struct T_channels {
	double channel_id;
	char other_details[4];
};

struct T_events {
	double event_id;
	double address_id;	// --> addresses.address_id
	double channel_id;
	char event_type_code[16];
	double finance_id;	// --> finances.finance_id
	double location_id;	// --> locations.location_id
};

struct T_finances {
	double finance_id;
	char other_details[7];
};

struct T_locations {
	double location_id;
	char other_details[32];
};

struct T_parties {
	double party_id;
	char party_details[46];
};

struct T_parties_in_events {
	double party_id;	// --> parties.party_id
	double event_id;	// --> events.event_id
	char role_code[12];
};

struct T_products {
	double product_id;
	char product_type_code[12];
	char product_name[22];
	double product_price;
};

struct T_products_in_events {
	double product_in_event_id;
	double event_id;	// --> events.event_id
	double product_id;	// --> products.product_id
};

struct T_addresses
addresses[] = {
	{  1,                     "465 Emely Bypass
West Mafalda, CO 23309" },
	{  2,                "669 Carter Trafficway
Port Delbert, OK 66249" },
	{  3,       "38247 Ernser Gateway Suite 442
Bogisichland, VT 71460" },
	{  4,        "732 Greenholt Valleys
East Marionfort, VT 89477-0433" },
	{  5,                      "382 Demond Alley
Luellamouth, MT 67912" },
	{  6,           "3851 Quigley Flats
O'Reillychester, CA 92522-9526" },
	{  7,             "78950 Kamryn Centers
Chelsealand, NE 22947-6129" },
	{  8,       "682 Kautzer Forest Apt. 509
Jaydenfurt, NE 85011-5059" },
	{  9,                "11093 Balistreri Forge
Gaylordtown, VT 05705" },
	{ 10,           "9113 Wisoky Glen Apt. 601
Lake Immanuel, UT 01388" },
	{ 11,          "73409 Linnea Loop Apt. 778
Haagberg, AK 41204-1496" },
	{ 12, "8220 Concepcion Neck Suite 394
East Beauview, LA 19968-4755" },
	{ 13,         "513 Lindgren River
North Scottymouth, IN 85224-1392" },
	{ 14,                  "9694 Wava Roads
Ricechester, DC 70816-9058" },
	{ 15,            "068 O'Connell Tunnel
West Colemanburgh, MO 87777" }
};

struct T_agreements
agreements[] = {
	{  1, 13 },
	{  2, 13 },
	{  3, 15 },
	{  4,  9 },
	{  5, 11 },
	{  6,  8 },
	{  7, 10 },
	{  8, 15 },
	{  9,  6 },
	{ 10, 11 },
	{ 11,  8 },
	{ 12,  9 },
	{ 13,  5 },
	{ 14, 12 },
	{ 15, 15 }
};

struct T_assets
assets[] = {
	{ 1, "Transportation Cars" },
	{ 2,       "Meeting Rooms" },
	{ 3,      "Dinning Tables" }
};

struct T_assets_in_events
assets_in_events[] = {
	{ 1,  4 },
	{ 1,  5 },
	{ 1,  9 },
	{ 1, 10 },
	{ 2,  8 },
	{ 2, 14 },
	{ 3,  2 },
	{ 3,  5 },
	{ 3,  8 },
	{ 3,  9 },
	{ 3, 10 },
	{ 3, 12 }
};

struct T_channels
channels[] = {
	{  1, "145" },
	{  2, "348" },
	{  3, "933" },
	{  4, "631" },
	{  5, "681" },
	{  6, "993" },
	{  7, "249" },
	{  8, "644" },
	{  9, "668" },
	{ 10, "058" },
	{ 11, "163" },
	{ 12, "285" },
	{ 13, "943" },
	{ 14, "292" },
	{ 15, "177" }
};

struct T_events
events[] = {
	{  1,  3, 12,      "Trade Show",  2, 13 },
	{  2, 15, 13, "Press Conferenc",  8, 11 },
	{  3, 12,  1, "Press Conferenc", 12,  6 },
	{  4, 13, 10,      "Ceremonies",  7,  6 },
	{  5,  9,  4,      "Trade Show", 15,  6 },
	{  6, 15, 12,         "Seminar", 15,  9 },
	{  7, 15,  6,      "Trade Show", 13, 15 },
	{  8,  3, 15,      "Trade Show",  1,  6 },
	{  9, 12,  3, "Press Conferenc",  3, 11 },
	{ 10, 15, 10,      "Conference",  7, 12 },
	{ 11, 10,  4,      "Trade Show",  2,  8 },
	{ 12, 14,  9,      "Trade Show", 14,  7 },
	{ 13, 12, 13,      "Trade Show", 12, 12 },
	{ 14, 10, 11,         "Seminar",  5, 10 },
	{ 15,  2,  2,      "Conference", 10,  5 }
};

struct T_finances
finances[] = {
	{  1, "Mutual" },
	{  2,   "Good" },
	{  3,    "Bad" },
	{  4, "Mutual" },
	{  5,    "Bad" },
	{  6,   "Good" },
	{  7,   "Good" },
	{  8, "Mutual" },
	{  9,    "Bad" },
	{ 10,    "Bad" },
	{ 11, "Mutual" },
	{ 12, "Mutual" },
	{ 13,   "Good" },
	{ 14,   "Good" },
	{ 15, "Mutual" }
};

struct T_locations
locations[] = {
	{  1,                        "Rowe PLC" },
	{  2,       "Ebert, Green and Bogisich" },
	{  3,                    "Prohaska LLC" },
	{  4,     "White, Kassulke and Barrows" },
	{  5,                "Wintheiser-Sauer" },
	{  6,                   "Morar-Denesik" },
	{  7,                "Rowe-Stoltenberg" },
	{  8,                     "Price-Lynch" },
	{  9,                      "Ryan-Wyman" },
	{ 10,                       "Hilll Ltd" },
	{ 11,                     "Fritsch LLC" },
	{ 12,                 "Kuvalis-Goodwin" },
	{ 13,                     "Sanford Inc" },
	{ 14,                  "Waelchi-Wehner" },
	{ 15, "Daugherty, Nader and Balistreri" }
};

struct T_parties
parties[] = {
	{ 3,                       "European People's Party" },
	{ 4,                        "European Free Alliance" },
	{ 5,                 "European Alliance for Freedom" },
	{ 6,         "European Christian Political Movement" },
	{ 7,  "Movement for a Europe of Nations and Freedom" },
	{ 8, "Alliance of Liberals and Democrats for Europe" },
	{ 9,                                   "EUDemocrats" }
};

struct T_parties_in_events
parties_in_events[] = {
	{ 3,  7,   "Organizer" },
	{ 3,  8, "Participant" },
	{ 4,  1,   "Organizer" },
	{ 4,  3, "Participant" },
	{ 4,  8,   "Organizer" },
	{ 5,  9, "Participant" },
	{ 5, 10, "Participant" },
	{ 5, 15,   "Organizer" },
	{ 6,  6,   "Organizer" },
	{ 6, 12, "Participant" },
	{ 6, 13,   "Organizer" },
	{ 9,  3, "Participant" },
	{ 9,  4, "Participant" },
	{ 9, 10,   "Organizer" },
	{ 9, 12,   "Organizer" }
};

struct T_products
products[] = {
	{  1,       "Books",       "Business Policy", 1336.26 },
	{  3,        "Food",       "Special Dinning", 2894.94 },
	{  5,     "Clothes",             "Men suits", 3298.84 },
	{  6, "Electronics",         "TV Equipments",  932.25 },
	{  7,       "Books",     "Business Policy B", 3215.66 },
	{ 10, "Electronics",         "TV Equipments", 4427.49 },
	{ 11, "Electronics", "Conference Equipments", 3289.47 },
	{ 18,       "Books",        "Trading Policy", 3228.49 },
	{ 20,       "Books",      "Trading Policy B", 4343.83 },
	{ 22,        "Food",               "Dinning", 3574.56 },
	{ 24,        "Food",               "Dinning", 4895.86 },
	{ 26,        "Food",               "Dinning", 2339.97 },
	{ 29,        "Food",       "Special Dinning",  502.15 },
	{ 34, "Electronics",         "TV Equipments",  970.77 },
	{ 45,     "Clothes",             "Men suits", 3541.17 }
};

struct T_products_in_events
products_in_events[] = {
	{ 13,  4, 29 },
	{ 23,  8,  3 },
	{ 32, 14, 10 },
	{ 33,  5, 18 },
	{ 43,  4, 45 },
	{ 46,  7,  3 },
	{ 50, 14,  6 },
	{ 61,  7,  3 },
	{ 63,  6, 34 },
	{ 64, 15,  6 },
	{ 69,  8, 20 },
	{ 74,  1,  6 },
	{ 79,  4, 45 },
	{ 90, 14, 26 },
	{ 99, 10, 11 }
};

#endif