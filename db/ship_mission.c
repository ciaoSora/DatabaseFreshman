/*
Database "ship_mission" contains tables:
	mission
	ship
*/

#ifndef SHIP_MISSION
#define SHIP_MISSION

struct T_mission {
	double mission_id;
	double ship_id;	// --> ship.ship_id
	char code[23];
	double launched_year;
	char location[23];
	double speed_knots;
	char fate[28];
};

struct T_ship {
	double ship_id;
	char name[14];
	char type[12];
	char nationality[15];
	double tonnage;
};

struct T_mission
mission[] = {
	{ 1, 1,                  "VMV-1", 1930,                "Germany", 25,         "Decommissioned 1950" },
	{ 2, 2,                  "VMV-2", 1930,                "Germany", 25,         "Decommissioned 1950" },
	{ 3, 3,                  "VMV-3", 1930,     "Helsinki , Finland", 23,          "Lost (burned) 1931" },
	{ 4, 5, "VMV-4 Former: Sterling", 1916,                 "Norway", 16,                "Retired 1939" },
	{ 5, 6,                  "VMV-5", 1931, "Uusikaupunki , Finland", 23,         "Decommissioned 1959" },
	{ 6, 7,                  "VMV-6", 1931, "Uusikaupunki , Finland", 23,         "Decommissioned 1960" },
	{ 7, 8,                  "VMV-7", 1932,        "Turku , Finland", 23, "Lost (burned and sunk) 1933" }
};

struct T_ship
ship[] = {
	{ 1,     "Corbridge",  "Cargo ship", "United Kingdom", 3687 },
	{ 2,   "Farringford", "Battle ship",  "United States", 3146 },
	{ 3,      "Dromonby",  "Cargo ship", "United Kingdom", 3627 },
	{ 4,        "Author",  "Cargo ship", "United Kingdom", 3496 },
	{ 5,        "Trader", "Battle ship", "United Kingdom", 3608 },
	{ 6,       "Ariadne",  "Cargo ship",  "United States", 3035 },
	{ 7,         "Appam", "Battle ship", "United Kingdom", 7781 },
	{ 8, "Clan McTavish",  "Cargo ship",  "United States", 5816 }
};

#endif