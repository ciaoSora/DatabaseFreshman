/*
Database "activity_1" contains tables:
	activity
	faculty
	faculty_participates_in
	participates_in
	student
*/

#ifndef ACTIVITY_1
#define ACTIVITY_1

struct T_activity {
	double activity_id;
	char activity_name[19];
};

struct T_faculty {
	double faculty_id;
	char last_name[13];
	char first_name[10];
	char rank[11];
	char sex[2];
	double phone;
	char room[5];
	char building[8];
};

struct T_faculty_participates_in {
	double faculty_id;	// --> faculty.faculty_id
	double activity_id;	// --> activity.activity_id
};

struct T_participates_in {
	double student_id;	// --> student.student_id
	double activity_id;	// --> activity.activity_id
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

struct T_activity
activity[] = {
	{ 770,  "Mountain Climbing" },
	{ 771,           "Canoeing" },
	{ 772,           "Kayaking" },
	{ 773,         "Spelunking" },
	{ 776,    "Extreme Canasta" },
	{ 777,             "Soccer" },
	{ 778,           "Baseball" },
	{ 779, "Accordion Ensemble" },
	{ 780,           "Football" },
	{ 782,         "Volleyball" },
	{ 784,            "Canasta" },
	{ 785,              "Chess" },
	{ 790,  "Crossword Puzzles" },
	{ 791,      "Proselytizing" },
	{ 796,     "Square Dancing" },
	{ 799,     "Bungee Jumping" }
};

struct T_faculty
faculty[] = {
	{ 1082,     "Giuliano",      "Mark", "Instructor", "M", 2424,  "224",     "NEB" },
	{ 1121,     "Goodrich",   "Michael",  "Professor", "M", 3593,  "219",     "NEB" },
	{ 1148,       "Masson",    "Gerald",  "Professor", "M", 3402, "224B",     "NEB" },
	{ 1172,   "Runolfsson",   "Thordur",  "AssocProf", "M", 3121,  "119",  "Barton" },
	{ 1177,       "Naiman",    "Daniel",  "Professor", "M", 3571,  "288", "Krieger" },
	{ 1193,        "Jones",    "Stacey", "Instructor", "F", 3550,  "224",     "NEB" },
	{ 1823,     "Davidson",  "Frederic",  "Professor", "M", 5629,  "119",  "Barton" },
	{ 2028,        "Brody",   "William",  "Professor", "M", 6073,  "119",  "Barton" },
	{ 2119,        "Meyer",    "Gerard",  "Professor", "M", 6350,  "119",  "Barton" },
	{ 2192,     "Yarowsky",     "David",   "AsstProf", "M", 6587,  "324",     "NEB" },
	{ 2291,  "Scheinerman",    "Edward",  "Professor", "M", 6654,  "288", "Krieger" },
	{ 2311,       "Priebe",     "Carey",   "AsstProf", "M", 6953,  "288", "Krieger" },
	{ 2738,         "Fill",     "James",  "Professor", "M", 8209,  "288", "Krieger" },
	{ 2881,      "Goldman",      "Alan",  "Professor", "M", 8335,  "288", "Krieger" },
	{ 3457,        "Smith",     "Scott",  "AssocProf", "M", 1035,  "318",     "NEB" },
	{ 4230,     "Houlahan",    "Joanne", "Instructor", "F", 1260,  "328",     "NEB" },
	{ 4432,       "Burzio",     "Luigi",  "Professor", "M", 1813,  "288", "Krieger" },
	{ 5718,        "Frank",    "Robert",   "AsstProf", "M", 1751,  "288", "Krieger" },
	{ 6112,        "Beach",     "Louis", "Instructor", "M", 1838,  "207",     "NEB" },
	{ 6182,        "Cheng",     "Cheng",   "AsstProf", "M", 1856,  "288", "Krieger" },
	{ 6191,       "Kaplan", "Alexander",  "Professor", "M", 1825,  "119",  "Barton" },
	{ 6330,        "Byrne",   "William", "Instructor", "M", 1691,  "119",  "Barton" },
	{ 6541,          "Han", "Shih-Ping",  "Professor", "M", 1914,  "288", "Krieger" },
	{ 6910,    "Smolensky",      "Paul",  "Professor", "M", 2072,  "288", "Krieger" },
	{ 6925,     "Iglesias",     "Pablo",   "AsstProf", "M", 2021,  "119",  "Barton" },
	{ 7134,     "Goutsias",      "John",  "Professor", "M", 2184,  "119",  "Barton" },
	{ 7231,         "Rugh",    "Wilson",  "Professor", "M", 2191,  "119",  "Barton" },
	{ 7271,      "Jelinek", "Frederick",  "Professor", "M", 2890,  "119",  "Barton" },
	{ 7506,     "Westgate",   "Charles",  "Professor", "M", 2932,  "119",  "Barton" },
	{ 7712,     "Awerbuch",    "Baruch",  "Professor", "M", 2105,  "220",     "NEB" },
	{ 7723,       "Taylor",   "Russell",  "Professor", "M", 2435,  "317",     "NEB" },
	{ 7792,        "Brill",      "Eric",   "AsstProf", "M", 2303, "324B",     "NEB" },
	{ 8102,        "James",  "Lancelot",   "AsstProf", "M", 2792,  "288", "Krieger" },
	{ 8114, "Angelopoulou",     "Ellie", "Instructor", "F", 2152,  "316",     "NEB" },
	{ 8118,      "Weinert",    "Howard",  "Professor", "M", 3272,  "119",  "Barton" },
	{ 8122,      "Wierman",      "John",  "Professor", "M", 3392,  "288", "Krieger" },
	{ 8423,        "Kumar",    "Subodh",   "AsstProf", "M", 2522,  "218",     "NEB" },
	{ 8721,        "Wolff",  "Lawrence",  "AssocProf", "M", 2342,  "316",     "NEB" },
	{ 8722, "Cauwenberghs",      "Gert",   "AsstProf", "M", 1372,  "119",  "Barton" },
	{ 8723,      "Andreou",   "Andreas",  "Professor", "M", 1402,  "119",  "Barton" },
	{ 8741,     "Salzberg",    "Steven",  "AssocProf", "M", 2641, "324A",     "NEB" },
	{ 8772,        "Cowen",    "Lenore",   "AsstProf", "F", 2870,  "288", "Krieger" },
	{ 8791,    "McCloskey",   "Michael",  "Professor", "M", 3440,  "288", "Krieger" },
	{ 8918,         "Amir",      "Yair",   "AsstProf", "M", 2672,  "308",     "NEB" },
	{ 8989,        "Brent",   "Michael",   "AsstProf", "M", 9373,  "288", "Krieger" },
	{ 9011,         "Rapp",    "Brenda",   "AsstProf", "F", 2032,  "288", "Krieger" },
	{ 9172,     "Kosaraju",       "Rao",  "Professor", "M", 2757,  "319",     "NEB" },
	{ 9191,      "Collins",    "Oliver",  "AssocProf", "M", 5427,  "119",  "Barton" },
	{ 9199,       "Hughes",     "Brian",  "AssocProf", "M", 5666,  "119",  "Barton" },
	{ 9210,       "Joseph",   "Richard",  "Professor", "M", 5996,  "119",  "Barton" },
	{ 9379,      "Khurgin",     "Jacob",  "Professor", "M", 1060,  "119",  "Barton" },
	{ 9514,       "Prince",     "Jerry",  "AssocProf", "M", 5106,  "119",  "Barton" },
	{ 9643,     "Legendre", "Geraldine",  "AssocProf", "F", 8972,  "288", "Krieger" },
	{ 9811,           "Wu",     "Colin",   "AsstProf", "M", 2906,  "288", "Krieger" },
	{ 9823,         "Pang",  "Jong-Shi",  "Professor", "M", 4366,  "288", "Krieger" },
	{ 9824,       "Glaser",    "Robert", "Instructor", "M", 4396,  "119",  "Barton" },
	{ 9826,      "Delcher",    "Arthur", "Instructor", "M", 2956,  "329",     "NEB" },
	{ 9922,         "Hall",    "Leslie",   "AsstProf", "F", 7332,  "288", "Krieger" }
};

struct T_faculty_participates_in
faculty_participates_in[] = {
	{ 1082, 784 },
	{ 1082, 785 },
	{ 1082, 790 },
	{ 1121, 771 },
	{ 1121, 777 },
	{ 1121, 770 },
	{ 1193, 790 },
	{ 1193, 796 },
	{ 1193, 773 },
	{ 2192, 773 },
	{ 2192, 790 },
	{ 2192, 778 },
	{ 3457, 782 },
	{ 3457, 771 },
	{ 3457, 784 },
	{ 4230, 790 },
	{ 4230, 785 },
	{ 6112, 785 },
	{ 6112, 772 },
	{ 7723, 785 },
	{ 7723, 770 },
	{ 8114, 776 },
	{ 8721, 770 },
	{ 8721, 780 },
	{ 8741, 780 },
	{ 8741, 790 },
	{ 8918, 780 },
	{ 8918, 782 },
	{ 8918, 771 },
	{ 2881, 790 },
	{ 2881, 784 },
	{ 4432, 770 },
	{ 4432, 771 },
	{ 5718, 776 },
	{ 6182, 776 },
	{ 6182, 785 },
	{ 1177, 790 },
	{ 1177, 770 },
	{ 1177, 770 },
	{ 9922, 796 }
};

struct T_participates_in
participates_in[] = {
	{ 1001, 770 },
	{ 1001, 771 },
	{ 1001, 777 },
	{ 1002, 772 },
	{ 1002, 771 },
	{ 1003, 778 },
	{ 1004, 780 },
	{ 1004, 782 },
	{ 1004, 778 },
	{ 1004, 777 },
	{ 1005, 770 },
	{ 1006, 773 },
	{ 1007, 773 },
	{ 1007, 784 },
	{ 1008, 785 },
	{ 1008, 773 },
	{ 1008, 780 },
	{ 1008, 790 },
	{ 1009, 778 },
	{ 1009, 777 },
	{ 1009, 782 },
	{ 1010, 780 },
	{ 1011, 780 },
	{ 1012, 780 },
	{ 1014, 780 },
	{ 1014, 777 },
	{ 1014, 778 },
	{ 1014, 782 },
	{ 1014, 770 },
	{ 1014, 772 },
	{ 1015, 785 },
	{ 1016, 791 },
	{ 1016, 772 },
	{ 1017, 791 },
	{ 1017, 771 },
	{ 1017, 770 },
	{ 1018, 790 },
	{ 1018, 785 },
	{ 1018, 784 },
	{ 1018, 777 },
	{ 1018, 772 },
	{ 1018, 770 },
	{ 1019, 785 },
	{ 1019, 790 },
	{ 1020, 780 },
	{ 1021, 780 },
	{ 1021, 776 },
	{ 1022, 782 },
	{ 1022, 790 },
	{ 1023, 790 },
	{ 1023, 776 },
	{ 1024, 778 },
	{ 1024, 777 },
	{ 1024, 780 },
	{ 1025, 780 },
	{ 1025, 777 },
	{ 1025, 770 },
	{ 1028, 785 },
	{ 1029, 785 },
	{ 1029, 790 },
	{ 1030, 780 },
	{ 1030, 790 },
	{ 1033, 780 },
	{ 1034, 780 },
	{ 1034, 777 },
	{ 1034, 772 },
	{ 1034, 771 },
	{ 1035, 777 },
	{ 1035, 780 },
	{ 1035, 784 }
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