/*
Database "game_1" contains tables:
	plays_games
	sports_info
	student
	video_games
*/

#ifndef GAME_1
#define GAME_1

struct T_plays_games {
	double student_id;	// --> student.student_id
	double game_id;	// --> video_games.game_id
	double hours_played;
};

struct T_sports_info {
	double student_id;	// --> student.student_id
	char sport_name[11];
	double hours_per_week;
	double games_played;
	char on_scholarship[2];
};

struct T_student {
	double student_id;
	char last_name[9];
	char first_name[8];
	double age;
	char sex[2];
	double major;
	double advisor;
	char city_code[4];
};

struct T_video_games {
	double game_id;
	char game_name[29];
	char game_type[34];
};

struct T_plays_games
plays_games[] = {
	{ 1001, 1,   35 },
	{ 1001, 2,   15 },
	{ 1001, 5,    1 },
	{ 1007, 4, 1000 },
	{ 1008, 5,   50 },
	{ 1008, 3,   50 },
	{ 1010, 6, 1337 },
	{ 1032, 1,   47 },
	{ 1032, 2,   10 },
	{ 1032, 3,  100 }
};

struct T_sports_info
sports_info[] = {
	{ 1001,  "Athletics",  2,  5, "N" },
	{ 1002,   "Football",  7, 20, "Y" },
	{ 1003,   "Football", 45, 18, "Y" },
	{ 1005,   "Lacrosse", 35, 16, "N" },
	{ 1015,   "Lacrosse", 25, 41, "Y" },
	{ 1018,   "Lacrosse", 39, 25, "N" },
	{ 1019,   "Swimming",  8, 16, "Y" },
	{ 1019,     "Tennis", 19, 62, "N" },
	{ 1022,   "Baseball", 29, 31, "N" },
	{ 1023, "Basketball", 14,  8, "Y" },
	{ 1023,     "Tennis",  1, 56, "Y" },
	{ 1026,    "Cricket", 23, 37, "Y" },
	{ 1033,     "Soccer", 45, 45, "Y" },
	{ 1035,    "Curling", 50, 94, "N" }
};

struct T_student
student[] = {
	{ 1001,    "Smith",   "Linda", 18, "F", 600, 1121, "BAL" },
	{ 1002,      "Kim",   "Tracy", 19, "F", 600, 7712, "HKG" },
	{ 1003,    "Jones",  "Shiela", 21, "F", 600, 7792, "WAS" },
	{ 1004,    "Kumar",  "Dinesh", 20, "M", 600, 8423, "CHI" },
	{ 1005,  "Gompers",    "Paul", 26, "M", 600, 1121, "YYZ" },
	{ 1006,  "Schultz",    "Andy", 18, "M", 600, 1148, "BAL" },
	{ 1007,     "Apap",    "Lisa", 18, "F", 600, 8918, "PIT" },
	{ 1008,   "Nelson",   "Jandy", 20, "F", 600, 9172, "BAL" },
	{ 1009,      "Tai",    "Eric", 19, "M", 600, 2192, "YYZ" },
	{ 1010,      "Lee",   "Derek", 17, "M", 600, 2192, "HOU" },
	{ 1011,    "Adams",   "David", 22, "M", 600, 1148, "PHL" },
	{ 1012,    "Davis",  "Steven", 20, "M", 600, 7723, "PIT" },
	{ 1014,   "Norris", "Charles", 18, "M", 600, 8741, "DAL" },
	{ 1015,      "Lee",   "Susan", 16, "F", 600, 8721, "HKG" },
	{ 1016, "Schwartz",    "Mark", 17, "M", 600, 2192, "DET" },
	{ 1017,   "Wilson",   "Bruce", 27, "M", 600, 1148, "LON" },
	{ 1018, "Leighton", "Michael", 20, "M", 600, 1121, "PIT" },
	{ 1019,     "Pang",  "Arthur", 18, "M", 600, 2192, "WAS" },
	{ 1020, "Thornton",     "Ian", 22, "M", 520, 7271, "NYC" },
	{ 1021,  "Andreou",  "George", 19, "M", 520, 8722, "NYC" },
	{ 1022,    "Woods", "Michael", 17, "M", 540, 8722, "PHL" },
	{ 1023,  "Shieber",   "David", 20, "M", 520, 8722, "NYC" },
	{ 1024,   "Prater",   "Stacy", 18, "F", 540, 7271, "BAL" },
	{ 1025,  "Goldman",    "Mark", 18, "M", 520, 7134, "PIT" },
	{ 1026,     "Pang",    "Eric", 19, "M", 520, 7134, "HKG" },
	{ 1027,    "Brody",    "Paul", 18, "M", 520, 8723, "LOS" },
	{ 1028,     "Rugh",    "Eric", 20, "M", 550, 2311, "ROC" },
	{ 1029,      "Han",     "Jun", 17, "M", 100, 2311, "PEK" },
	{ 1030,    "Cheng",    "Lisa", 21, "F", 550, 2311, "SFO" },
	{ 1031,    "Smith",   "Sarah", 20, "F", 550, 8772, "PHL" },
	{ 1032,    "Brown",    "Eric", 20, "M", 550, 8772, "ATL" },
	{ 1033,    "Simms", "William", 18, "M", 550, 8772, "NAR" },
	{ 1034,      "Epp",    "Eric", 18, "M",  50, 5718, "BOS" },
	{ 1035,  "Schmidt",   "Sarah", 26, "F",  50, 5718, "WAS" }
};

struct T_video_games
video_games[] = {
	{ 1,                    "RNG Stone",             "Collectible card game" },
	{ 2, "The Vanishing of Eric Calder",                 "Walking Simulator" },
	{ 3,        "Grand Term Assignment",                 "Role-playing game" },
	{ 4,       "Europe is the Universe",                    "Grand strategy" },
	{ 5,              "Call of Destiny",              "Frist-person shooter" },
	{ 6,            "Works of Widenius", "Massively multiplayer online game" }
};

#endif