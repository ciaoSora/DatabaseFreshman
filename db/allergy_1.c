/*
Database "allergy_1" contains tables:
	allergy_type
	has_allergy
	student
*/

#ifndef ALLERGY_1
#define ALLERGY_1

struct T_allergy_type {
	char allergy_name[13];
	char allergy_type[14];
};

struct T_has_allergy {
	double stuid;	// --> student.stuid
	char allergy[13];	// --> allergy_type.allergy_name
};

struct T_student {
	double stuid;
	char last_name[9];
	char first_name[8];
	double age;
	char sex[2];
	double major;
	double advisor;
	char city_code[4];
};

struct T_allergy_type
allergy_type[] = {
	{         "Eggs",          "food" },
	{         "Nuts",          "food" },
	{         "Milk",          "food" },
	{    "Shellfish",          "food" },
	{    "Anchovies",          "food" },
	{        "Wheat",          "food" },
	{          "Soy",          "food" },
	{      "Ragweed", "environmental" },
	{  "Tree Pollen", "environmental" },
	{ "Grass Pollen", "environmental" },
	{          "Cat",        "animal" },
	{          "Dog",        "animal" },
	{       "Rodent",        "animal" },
	{   "Bee Stings",        "animal" }
};

struct T_has_allergy
has_allergy[] = {
	{ 1001,          "Cat" },
	{ 1002,    "Shellfish" },
	{ 1002,  "Tree Pollen" },
	{ 1003,          "Dog" },
	{ 1004,         "Nuts" },
	{ 1005,         "Nuts" },
	{ 1005,  "Tree Pollen" },
	{ 1006,         "Nuts" },
	{ 1007,      "Ragweed" },
	{ 1007,  "Tree Pollen" },
	{ 1007, "Grass Pollen" },
	{ 1007,         "Eggs" },
	{ 1007,         "Milk" },
	{ 1007,    "Shellfish" },
	{ 1007,    "Anchovies" },
	{ 1007,          "Cat" },
	{ 1007,          "Dog" },
	{ 1009,  "Tree Pollen" },
	{ 1010,      "Ragweed" },
	{ 1010,  "Tree Pollen" },
	{ 1010, "Grass Pollen" },
	{ 1010,         "Eggs" },
	{ 1010,         "Milk" },
	{ 1010,    "Shellfish" },
	{ 1010,    "Anchovies" },
	{ 1010,          "Cat" },
	{ 1010,          "Dog" },
	{ 1011,      "Ragweed" },
	{ 1012,      "Ragweed" },
	{ 1013,      "Ragweed" },
	{ 1014,         "Nuts" },
	{ 1015,         "Nuts" },
	{ 1015,          "Soy" },
	{ 1016,         "Nuts" },
	{ 1016,         "Milk" },
	{ 1017,  "Tree Pollen" },
	{ 1018,         "Nuts" },
	{ 1018,          "Soy" },
	{ 1019,  "Tree Pollen" },
	{ 1020,  "Tree Pollen" },
	{ 1021,  "Tree Pollen" },
	{ 1022,         "Nuts" },
	{ 1022,    "Anchovies" },
	{ 1023,       "Rodent" },
	{ 1023,          "Cat" },
	{ 1023,         "Nuts" },
	{ 1024,      "Ragweed" },
	{ 1024,  "Tree Pollen" },
	{ 1025,  "Tree Pollen" },
	{ 1026, "Grass Pollen" },
	{ 1027,  "Tree Pollen" },
	{ 1028,  "Tree Pollen" },
	{ 1029,          "Soy" },
	{ 1029,         "Nuts" },
	{ 1029,         "Eggs" },
	{ 1030, "Grass Pollen" },
	{ 1031,         "Nuts" },
	{ 1031,    "Shellfish" },
	{ 1031,          "Soy" }
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