/*
Database "architecture" contains tables:
	architect
	bridge
	mill
*/

#ifndef ARCHITECTURE
#define ARCHITECTURE

struct T_architect {
	char id[2];
	char name[19];
	char nationality[17];
	char gender[7];
};

struct T_bridge {
	double architect_id;	// --> architect.id
	double id;
	char name[29];
	char location[50];
	double length_meters;
	double length_feet;
};

struct T_mill {
	double architect_id;	// --> architect.id
	double id;
	char location[22];
	char name[18];
	char type[12];
	double built_year;
	char notes[19];
};

struct T_architect
architect[] = {
	{ "1", "Frank Lloyd Wright",         "American",   "male" },
	{ "2",        "Frank Gehry",         "Canadian",   "male" },
	{ "3",         "Zaha Hadid",   "Iraqi, British", "female" },
	{ "4",  "Mies Van Der Rohe", "German, American",   "male" },
	{ "5",       "Le Corbusier",    "Swiss, French",   "male" }
};

struct T_bridge
bridge[] = {
	{ 1,  1, "Xian Ren Qiao (Fairy Bridge)",                                   "Guangxi , China", 121.0, 400.0 },
	{ 2,  2,               "Landscape Arch",                 "Arches National Park , Utah , USA",  88.0, 290.0 },
	{ 3,  3,                   "Kolob Arch",                   "Zion National Park , Utah , USA",  87.0, 287.0 },
	{ 4,  4,                   "Aloba Arch",                             "Ennedi Plateau , Chad",  76.0, 250.0 },
	{ 5,  5, "Morning Glory Natural Bridge",                    "Negro Bill Canyon , Utah , USA",  74.0, 243.0 },
	{ 5,  6,               "Rainbow Bridge", "Glen Canyon National Recreation Area , Utah , USA",  71.0, 234.0 },
	{ 4,  7,        "Gaotun Natural Bridge",                                   "Guizhou , China",  70.0, 230.0 },
	{ 3,  8,        "Sipapu Natural Bridge",    "Natural Bridges National Monument , Utah , USA",  69.0, 225.0 },
	{ 2,  9,                 "Stevens Arch",                     "Escalante Canyon , Utah , USA",  67.0, 220.0 },
	{ 1, 10,               "Shipton's Arch",                                  "Xinjiang , China",  65.0, 212.0 },
	{ 1, 11,               "Jiangzhou Arch",                                   "Guangxi , China",  65.0, 212.0 },
	{ 1, 12,  "Hazarchishma Natural Bridge",                    "Bamiyan Province , Afghanistan",  64.2, 210.6 },
	{ 2, 13,                  "Outlaw Arch",       "Dinosaur National Monument , Colorado , USA",  63.0, 206.0 },
	{ 2, 14,                 "Snake Bridge",                       "Sanostee , New Mexico , USA",  62.0, 204.0 },
	{ 5, 15,                 "Wrather Arch",                    "Wrather Canyon , Arizona , USA",  75.0, 246.0 }
};

struct T_mill
mill[] = {
	{ 1, 1,              "Coswarem",    "Le Vieux Molen", "Grondzeiler", 1840, "Molenechos (Dutch)" },
	{ 1, 2,               "Donceel",   "Moulin Bertrand", "Grondzeiler", 1890, "Molenechos (Dutch)" },
	{ 2, 3, "Fexhe-le-haut-Clocher",   "Moulin de Fexhe", "Grondzeiler", 1843, "Molenechos (Dutch)" },
	{ 3, 4,               "Momalle", "Moulin de Momalle",   "Bergmolen", 1850, "Molenechos (Dutch)" },
	{ 4, 5,                 "Othée", "Moulin du Château", "Grondzeiler", 1856, "Molenechos (Dutch)" },
	{ 4, 6,               "Pousset", "Moulin de Pousset", "Grondzeiler", 1819, "Molenechos (Dutch)" }
};

#endif