/*
Database "battle_death" contains tables:
	battle
	death
	ship
*/

#ifndef BATTLE_DEATH
#define BATTLE_DEATH

struct T_battle {
	double id;
	char name[24];
	char date[17];
	char bulgarian_commander[13];
	char latin_commander[23];
	char result[18];
};

struct T_death {
	double caused_by_ship_id;	// --> ship.id
	double id;
	char note[27];
	double killed;
	double injured;
};

struct T_ship {
	double lost_in_battle;	// --> battle.id
	double id;
	char name[15];
	char tonnage[4];
	char ship_type[12];
	char location[16];
	char disposition_of_ship[9];
};

struct T_battle
battle[] = {
	{ 1,    "Battle of Adrianople",    "14 April 1205",      "Kaloyan",              "Baldwin I", "Bulgarian victory" },
	{ 2,        "Battle of Serres",        "June 1205",      "Kaloyan",                "Unknown", "Bulgarian victory" },
	{ 3,        "Battle of Rusion",  "31 January 1206",      "Kaloyan",     "Thierry de Termond", "Bulgarian victory" },
	{ 4,       "Battle of Rodosto",    "February 1206",      "Kaloyan",                "Unknown", "Bulgarian victory" },
	{ 5,  "Battle of Messinopolis", "4 September 1207",      "Unknown", "Boniface of Montferrat", "Bulgarian victory" },
	{ 6,         "Battle of Boruy",        "June 1205",        "Boril",                "Henry I", "Bulgarian victory" },
	{ 7, "Battle of Philippopolis",     "31 June 1208",        "Boril",                "Henry I",     "Latin victory" },
	{ 8, "Siege of Constantinople",             "1235", "Ivan Asen II",        "John of Brienne",    "Two Year Truce" }
};

struct T_death
death[] = {
	{ 1,  1,    "Dantewada, Chhattisgarh",  8, 0 },
	{ 2,  2,    "Dantewada, Chhattisgarh",  3, 0 },
	{ 3, 13,     "Erraboru, Chhattisgarh", 25, 0 },
	{ 3,  3,      "East Champaran, Bihar",  2, 0 },
	{ 4,  4,           "Gajapati, Odisha",  3, 0 },
	{ 4,  5,         "Sundargarh, Odisha",  0, 9 },
	{ 5,  6,    "Dantewada, Chhattisgarh",  0, 0 },
	{ 5,  7,    "Dantewada, Chhattisgarh",  4, 5 },
	{ 6,  8,       "Kanker, Chhattisgarh",  0, 0 },
	{ 1,  9,    "Dantewada, Chhattisgarh", 29, 0 },
	{ 3, 10, "WestMidnapore, West Bengal",  0, 0 },
	{ 2, 11,        "Bastar, Chattisgarh",  0, 0 },
	{ 5, 12,          "Bokaro, Jharkhand", 14, 0 }
};

struct T_ship
ship[] = {
	{ 8, 1,        "Lettice",   "t",        "Brig", "English Channel", "Captured" },
	{ 7, 2,     "Bon Accord",   "t",        "Brig", "English Channel", "Captured" },
	{ 6, 3,           "Mary",   "t",        "Brig", "English Channel", "Captured" },
	{ 5, 4,       "HMS Avon", "391", "18-gun Brig", "English Channel",  "Wrecked" },
	{ 5, 5, "Three Brothers",   "t",        "Brig",   "SW Approaches", "Scuttled" },
	{ 4, 6,        "Bacchus",   "t",        "Brig", "English Channel",     "Sank" },
	{ 8, 7,   "HMS Atalanta", "225",  "8 gun Brig",    "Mid-Atlantic", "Captured" }
};

#endif