/*
Database "dorm_1" contains tables:
	dorm
	dorm_amenity
	has_amenity
	lives_in
	student
*/

#ifndef DORM_1
#define DORM_1

struct T_dorm {
	double dorm_id;
	char dorm_name[21];
	double student_capacity;
	char gender[2];
};

struct T_dorm_amenity {
	double amenity_id;
	char amenity_name[22];
};

struct T_has_amenity {
	double dorm_id;	// --> dorm.dorm_id
	double amenity_id;	// --> dorm_amenity.amenity_id
};

struct T_lives_in {
	double student_id;	// --> student.student_id
	double dorm_id;	// --> dorm.dorm_id
	double room_number;
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

struct T_dorm
dorm[] = {
	{ 100,           "Smith Hall",  85, "X" },
	{ 110,       "Bud Jones Hall", 116, "M" },
	{ 140,        "Fawlty Towers", 355, "X" },
	{ 160,       "Dorm-plex 2000", 400, "X" },
	{ 109, "Anonymous Donor Hall", 128, "F" },
	{ 117,    "University Hovels",  40, "X" },
	{ 104,  "Grad Student Asylum", 256, "X" }
};

struct T_dorm_amenity
dorm_amenity[] = {
	{ 900,             "TV Lounge" },
	{ 901,            "Study Room" },
	{ 902,       "Pub in Basement" },
	{ 903,        "Carpeted Rooms" },
	{ 904,               "4 Walls" },
	{ 930,                  "Roof" },
	{ 931,        "Ethernet Ports" },
	{ 932,      "Air Conditioning" },
	{ 922,                  "Heat" },
	{ 950,    "Working Fireplaces" },
	{ 955, "Kitchen in Every Room" },
	{ 909,           "Allows Pets" }
};

struct T_has_amenity
has_amenity[] = {
	{ 109, 900 },
	{ 109, 901 },
	{ 109, 903 },
	{ 109, 904 },
	{ 109, 930 },
	{ 109, 931 },
	{ 109, 932 },
	{ 109, 922 },
	{ 104, 901 },
	{ 104, 904 },
	{ 104, 930 },
	{ 160, 900 },
	{ 160, 901 },
	{ 160, 902 },
	{ 160, 903 },
	{ 160, 931 },
	{ 160, 904 },
	{ 160, 930 },
	{ 160, 922 },
	{ 160, 932 },
	{ 160, 950 },
	{ 160, 955 },
	{ 160, 909 },
	{ 100, 901 },
	{ 100, 903 },
	{ 100, 904 },
	{ 100, 930 },
	{ 100, 922 },
	{ 117, 930 },
	{ 110, 901 },
	{ 110, 903 },
	{ 110, 904 },
	{ 110, 930 },
	{ 110, 922 },
	{ 140, 909 },
	{ 140, 900 },
	{ 140, 902 },
	{ 140, 904 },
	{ 140, 930 },
	{ 140, 932 }
};

struct T_lives_in
lives_in[] = {
	{ 1001, 109, 105 },
	{ 1002, 100, 112 },
	{ 1003, 100, 124 },
	{ 1004, 140, 215 },
	{ 1005, 160, 333 },
	{ 1007, 140, 113 },
	{ 1008, 160, 334 },
	{ 1009, 140, 332 },
	{ 1010, 160, 443 },
	{ 1011, 140, 102 },
	{ 1012, 160, 333 },
	{ 1014, 104, 211 },
	{ 1015, 160, 443 },
	{ 1016, 140, 301 },
	{ 1017, 140, 319 },
	{ 1018, 140, 225 },
	{ 1020, 160, 405 },
	{ 1021, 160, 405 },
	{ 1022, 100, 153 },
	{ 1023, 160, 317 },
	{ 1024, 100, 151 },
	{ 1025, 160, 317 },
	{ 1027, 140, 208 },
	{ 1028, 110,  48 },
	{ 1029, 140, 418 },
	{ 1030, 109, 211 },
	{ 1031, 100, 112 },
	{ 1032, 109, 105 },
	{ 1033, 117,   3 },
	{ 1034, 160, 105 },
	{ 1035, 100, 124 }
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

#endif