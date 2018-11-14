/*
Database "college_3" contains tables:
	course
	department
	enrolled_in
	faculty
	grade_conversion
	member_of
	minor_in
	student
*/

#ifndef COLLEGE_3
#define COLLEGE_3

struct T_course {
	char course_id[8];
	char course_name[40];
	double credits;
	double instructor;	// --> faculty.faculty_id
	char days[4];
	char hours[12];
	double department_number;	// --> department.department_number
};

struct T_department {
	double department_number;
	char division[3];
	char department_name[25];
	char room[5];
	char building[13];
	double department_phone;
};

struct T_enrolled_in {
	double student_id;	// --> student.student_id
	char course_id[8];	// --> course.course_id
	char grade[3];	// --> grade_conversion.letter_grade
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

struct T_grade_conversion {
	char letter_grade[3];
	double grade_point;
};

struct T_member_of {
	double faculty_id;	// --> faculty.faculty_id
	double department_number;	// --> department.department_number
	char appt_type[10];
};

struct T_minor_in {
	double student_id;	// --> student.student_id
	double department_number;	// --> department.department_number
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

struct T_course
course[] = {
	{ "600.101",                       "COMPUTER LITERACY", 3, 6112, "MTW",           "3", 600 },
	{ "600.103",        "INTRODUCTION TO COMPUTER SCIENCE", 1, 4230,  "Th",           "4", 600 },
	{ "600.107",            "INTRO TO PROGRAMMING IN JAVA", 3, 1193, "MTW",           "3", 600 },
	{ "600.109",           "INTRO TO PROGRAMMING IN C/C++", 3, 4230, "MTW",          "12", 600 },
	{ "600.113",                  "EXPLORING THE INTERNET", 3, 6112, "MTW",           "4", 600 },
	{ "600.121",                        "JAVA PROGRAMMING", 3, 6112, "ThF",    "10:30-12", 600 },
	{ "600.211",                "UNIX SYSTEMS PROGRAMMING", 3, 6112, "ThF",      "1-2:15", 600 },
	{ "600.227",                 "DATA STRUCTURES in JAVA", 3, 1121, "MTW",           "9", 600 },
	{ "600.232",                    "MULTIMEDIA COMPUTING", 3, 9826,  "MW",      "1-2:30", 600 },
	{ "600.271",                    "COMPUTATIONAL MODELS", 3, 9172, "MTW",           "1", 600 },
	{ "600.303",                          "SUPERCOMPUTING", 1, 9826,   "W",      "4-6:20", 600 },
	{ "600.315",                        "DATABASE SYSTEMS", 3, 2192, "ThF",      "2:30-4", 600 },
	{ "600.333",            "COMPUTER SYSTEM FUNDAMENTALS", 3, 1148, "MTW",           "8", 600 },
	{ "600.337",                     "DISTRIBUTED SYSTEMS", 3, 8918,   "M",           "3", 600 },
	{ "600.363",              "INTRODUCTION TO ALGORITHMS", 3, 7712, "MTW",           "9", 600 },
	{ "600.415",                        "DATABASE SYSTEMS", 3, 2192, "ThF",      "2:30-4", 600 },
	{ "600.433",                        "COMPUTER SYSTEMS", 3, 1148, "MTW",           "8", 600 },
	{ "600.437",                     "DISTRIBUTED SYSTEMS", 3, 8918,   "M",           "3", 600 },
	{ "600.445",          "QUANTITATIVE MEDICAL COMPUTING", 3, 7723, "ThF",      "1-2:15", 600 },
	{ "600.461",                         "COMPUTER VISION", 3, 8114, "MTW",           "1", 600 },
	{ "600.463",                            "ALGORITHMS I", 3, 7712, "MTW",           "9", 600 },
	{ "600.465",    "INTRO TO NATURAL LANGUAGE PROCESSING", 3, 7792, "MTW",           "2", 600 },
	{ "600.509",             "COMPUTER SCIENCE INTERNSHIP", 3, 1121,   "M",           "1", 600 },
	{ "600.601",                "COMPUTER SCIENCE SEMINAR", 1, 6191, "ThF",    "10:30-12", 600 },
	{ "600.657",  "HIGH PERFORMANCE GRAPHICS AND MODELING", 3, 8423,   "M",      "4-5:30", 600 },
	{ "600.787",       "SEMINAR ON COMPUTATIONAL GEOMETRY", 3, 1121,  "Th",           "2", 600 },
	{ "550.111",                    "STATISTICAL ANALYSIS", 4, 2311, "MTW",          "12", 550 },
	{ "550.171",                    "DISCRETE MATHEMATICS", 4, 8772, "MTW",          "11", 550 },
	{ "500.203",                            "ACCOUNTING I", 3, 9823,   "T",   "6:15-8:45", 550 },
	{ "500.204",                           "ACCOUNTING II", 3, 9823,  "Th",   "6:15-8:45", 550 },
	{ "500.205",                          "BUSINESS LAW I", 3, 8791,   "W",   "6:15-8:45", 550 },
	{ "500.206",                         "BUSINESS LAW II", 3, 8791,   "M",   "6:15-8:45", 550 },
	{ "550.291",    "LINEAR ALGEBRA AND DIFFERENTIAL EQNS", 4, 6541, "MTW",           "9", 550 },
	{ "550.310",              "PROBABILITY AND STATISTICS", 4, 8102, "MTW",          "10", 550 },
	{ "550.361",            "INTRODUCTION TO OPTIMIZATION", 4, 2881, "MTW",           "2", 550 },
	{ "550.413",    "APPLIED STATISTICS AND DATA ANALYSIS", 4, 1177, "MTW",          "11", 550 },
	{ "550.420",             "INTRODUCTION TO PROBABILITY", 4, 2738, "MTW",           "1", 550 },
	{ "550.471",                  "COMBINATORIAL ANALYSIS", 4, 8772, "MTW",          "12", 550 },
	{ "550.620",                    "PROBABILITY THEORY I", 3, 2738, "MTW",           "2", 550 },
	{ "550.626",                 "STOCHASTIC PROCESSES II", 3, 8102, "MTW",           "1", 550 },
	{ "550.631",                   "STATISTICAL INFERENCE", 3, 6182, "MTW",           "3", 550 },
	{ "550.661",             "FOUNDATIONS OF OPTIMIZATION", 3, 9823, "MTW",          "10", 550 },
	{ "550.671",                  "COMBINATORIAL ANALYSIS", 3, 8772, "MTW",          "12", 550 },
	{ "550.681",                      "NUMERICAL ANALYSIS", 3, 6541, "MTW",          "11", 550 },
	{ "550.721",                      "PERCOLATION THEORY", 3, 8122, "MTW",           "9", 550 },
	{ "550.750",           "TOPICS IN OPERATIONS RESEARCH", 3, 9922,  "MW",      "3-4:30", 550 },
	{ "550.790",                  "TOPICS IN APPLIED MATH", 2, 2881,  "MT",      "4:30-6", 550 },
	{ "520.137",                     "INTRODUCTION TO ECE", 3, 8723, "MTW",          "11", 520 },
	{ "520.213",                                "CIRCUITS", 4, 9210, "MTW",           "2", 520 },
	{ "520.219",                "FIELDS, MATTER AND WAVES", 3, 9210, "MTW",           "3", 520 },
	{ "520.325",                  "INTEGRATED ELECTRONICS", 3, 6191, "MTW",           "3", 520 },
	{ "520.345",                          "ECE LABORATORY", 3, 1823,   "W",           "2", 520 },
	{ "520.349",                    "MICROPROCESSOR LAB I", 3, 9824,  "Th",           "8", 520 },
	{ "520.353",                         "CONTROL SYSTEMS", 3, 6925, "MTW",          "10", 520 },
	{ "520.401",                    "BASIC COMMUNICATIONS", 3, 6191, "MTW",           "1", 520 },
	{ "520.410",              "FIBER OPTICS AND PHOTONICS", 3, 6191, "MTW",           "1", 520 },
	{ "520.419",                    "ITERATIVE ALGORITHMS", 3, 2119,  "MT",      "4-5:15", 520 },
	{ "520.421",      "INTRODUCTION TO NON-LINEAR SYSTEMS", 3, 7231, "MTW",           "9", 520 },
	{ "520.432",       "TOPICS IN MEDICAL IMAGING SYSTEMS", 3, 9514, "TTh",     "8:30-10", 520 },
	{ "520.435",               "DIGITAL SIGNAL PROCESSING", 4, 8118, "MTW",          "11", 520 },
	{ "520.475",    "PROCESSING AND RECOGNITION OF SPEECH", 3, 6330,  "TW",      "2-3:30", 520 },
	{ "520.490",         "ANALOG AND DIGITAL VLSI SYSTEMS", 3, 8722, "ThF",    "10:30-12", 520 },
	{ "520.603",                   "ELECTROMAGNETIC WAVES", 4, 9210,  "Th",      "1-4:30", 520 },
	{ "520.605",                     "SOLID STATE PHYSICS", 3, 9379,  "Tu",         "1-4", 520 },
	{ "520.609",    "NONLINEAR TECHNICAL IMAGE PROCESSING", 3, 7134,  "Th",         "1-4", 520 },
	{ "520.651",                  "RANDOM SIGNAL ANALYSIS", 3, 9514, "ThF",    "10:30-12", 520 },
	{ "050.102",                       "LANGUAGE AND MIND", 3, 4432, "MTW",          "10",  50 },
	{ "050.109",                  "MIND, BRAIN, COMPUTERS", 3, 6910,  "MW",      "2-3:15",  50 },
	{ "050.203",                  "COGNITIVE NEUROSCIENCE", 4, 9011,  "MT",   "3:30-4:45",  50 },
	{ "050.325",    "SOUND STRUCTURES IN NATURAL LANGUAGE", 3, 4432,   "T",       "10-12",  50 },
	{ "050.370",     "FORMAL METHODS IN COGNITIVE SCIENCE", 3, 6910,  "MW",       "11:30",  50 },
	{ "050.381",                    "LANGUAGE DEVELOPMENT", 3, 8989,   "T",         "1-3",  50 },
	{ "050.427",        "THE HISTORY OF ROMANCE LANGUAGES", 3, 4432,   "W",         "1-3",  50 },
	{ "050.670",     "FORMAL METHODS IN COGNITIVE SCIENCE", 3, 4432,  "MW", "11:30-12:45",  50 },
	{ "050.802", "RESEARCH SEMINAR IN COGNITIVE PROCESSES", 1, 9011,   "W",         "1-3",  50 },
	{ "050.821",     "COMP. MODELS OF SENTENCE PROCESSING", 3, 5718,   "M",         "1-4",  50 }
};

struct T_department
department[] = {
	{  10, "AS",           "History of Art",  "268", "Mergenthaler", 7117 },
	{  20, "AS",                  "Biology",  "144",         "Mudd", 7330 },
	{  30, "AS",                "Chemistry",  "113",       "Remsen", 7429 },
	{  40, "AS",                 "Classics",  "121",       "Gilman", 7556 },
	{  50, "AS",        "Cognitive Science",  "381",      "Krieger", 7119 },
	{  60, "AS",                  "English",  "146",       "Gilman", 7544 },
	{  70, "AS",             "Anthropology", "404B",     "Macaulay", 7272 },
	{  90, "AS",                   "German",  "245",       "Gilman", 7508 },
	{ 100, "AS",                  "History",  "312",       "Gilman", 7575 },
	{ 110, "AS",              "Mathematics",  "404",      "Krieger", 7399 },
	{ 130, "AS",     "Near Eastern Studies",  "128",       "Gilman", 7499 },
	{ 140, "AS",       "History of Science",  "234",       "Gilman", 7501 },
	{ 150, "AS",               "Philosophy",  "347",       "Gilman", 7524 },
	{ 170, "AS",    "Physics and Astronomy",  "366",    "Bloomberg", 7347 },
	{ 180, "AS",                "Economics",  "440", "Mergenthaler", 7601 },
	{ 190, "AS",        "Political Science",  "338", "Mergenthaler", 7540 },
	{ 200, "AS",               "Psychology",  "223",         "Ames", 7055 },
	{ 340, "AS",                   "French",  "225",       "Gilman", 7227 },
	{ 350, "AS", "Hispanic/Italian Studies",  "221",       "Gilman", 7226 },
	{ 520, "EN",                      "ECE",  "105",       "Barton", 7033 },
	{ 530, "EN",   "Mechanical Engineering",  "122",      "Latrobe", 7132 },
	{ 540, "EN",     "Chemical Engineering",   "24",          "NEB", 7170 },
	{ 550, "EN",    "Mathematical Sciences",  "221",     "Maryland", 7195 },
	{ 560, "EN",        "Civil Engineering",  "206",      "Latrobe", 8680 },
	{ 580, "EN",   "Biomedical Engineering",  "144",          "NEB", 8482 },
	{ 600, "EN",         "Computer Science",  "224",          "NEB", 8577 }
};

struct T_enrolled_in
enrolled_in[] = {
	{ 1001, "550.681", "A-" },
	{ 1001, "600.303",  "B" },
	{ 1001, "600.315", "B+" },
	{ 1001, "600.337",  "A" },
	{ 1001, "600.461", "B-" },
	{ 1001, "600.465",  "B" },
	{ 1002, "520.213", "B+" },
	{ 1002, "600.211",  "C" },
	{ 1002, "600.303", "C+" },
	{ 1002, "600.337",  "A" },
	{ 1002, "600.463",  "B" },
	{ 1002, "600.465", "B+" },
	{ 1003, "600.333",  "B" },
	{ 1003, "600.337",  "B" },
	{ 1003, "600.415",  "B" },
	{ 1003, "600.461", "B+" },
	{ 1003, "600.465",  "B" },
	{ 1004, "600.303", "C-" },
	{ 1004, "600.415", "C-" },
	{ 1004, "600.437", "C-" },
	{ 1004, "600.445", "A-" },
	{ 1004, "600.461",  "C" },
	{ 1004, "600.463", "A+" },
	{ 1004, "600.465",  "A" },
	{ 1005, "600.103",  "A" },
	{ 1005, "600.107", "C+" },
	{ 1005, "600.113",  "C" },
	{ 1005, "600.227",  "A" },
	{ 1005, "600.303",  "B" },
	{ 1006, "550.420",  "B" },
	{ 1006, "600.107", "B+" },
	{ 1006, "600.227", "B-" },
	{ 1006, "600.232", "C-" },
	{ 1006, "600.303", "A-" },
	{ 1006, "600.315",  "A" },
	{ 1007, "550.420",  "A" },
	{ 1007, "600.113", "A-" },
	{ 1007, "600.227", "C+" },
	{ 1007, "600.315",  "A" },
	{ 1007, "600.333", "A-" },
	{ 1007, "600.337",  "C" },
	{ 1008, "600.415", "A+" },
	{ 1008, "600.463",  "B" },
	{ 1008, "600.465",  "B" },
	{ 1008, "600.657",  "B" },
	{ 1008, "600.787",  "B" },
	{ 1009, "550.413", "B+" },
	{ 1009, "550.471",  "C" },
	{ 1009, "550.620", "A-" },
	{ 1009, "550.626",  "B" },
	{ 1009, "550.671",  "C" },
	{ 1009, "550.681",  "A" },
	{ 1009, "550.661", "B-" },
	{ 1009, "550.631", "A-" },
	{ 1010, "550.291",  "A" },
	{ 1010, "550.310",  "A" },
	{ 1010, "550.413", "C+" },
	{ 1010, "550.420",  "A" },
	{ 1010, "550.471",  "A" },
	{ 1010, "600.107", "B+" },
	{ 1011, "520.213",  "B" },
	{ 1011, "520.345",  "B" },
	{ 1011, "520.349",  "A" },
	{ 1011, "520.353", "A-" },
	{ 1011, "550.420",  "B" },
	{ 1011, "600.415", "B+" },
	{ 1012, "050.109", "B-" },
	{ 1012, "050.203", "B-" },
	{ 1012, "050.325", "A-" },
	{ 1012, "600.107",  "A" },
	{ 1012, "600.315",  "B" },
	{ 1014, "600.107",  "A" },
	{ 1014, "600.227",  "A" },
	{ 1014, "600.232",  "A" },
	{ 1014, "600.315", "A+" },
	{ 1014, "600.445",  "B" },
	{ 1014, "600.461",  "B" },
	{ 1014, "600.463",  "B" },
	{ 1015, "550.420",  "A" },
	{ 1015, "600.227", "A+" },
	{ 1015, "600.303",  "A" },
	{ 1015, "600.315", "C-" },
	{ 1015, "600.333",  "A" },
	{ 1016, "050.109", "B-" },
	{ 1016, "050.203", "D-" },
	{ 1016, "050.325",  "A" },
	{ 1016, "050.821",  "A" },
	{ 1016, "550.420", "A-" },
	{ 1016, "600.107", "B+" },
	{ 1016, "600.315", "B-" },
	{ 1017, "050.427",  "B" },
	{ 1017, "050.670",  "B" },
	{ 1017, "050.802",  "C" },
	{ 1017, "550.681",  "B" },
	{ 1017, "600.109", "A-" },
	{ 1017, "600.461",  "A" },
	{ 1017, "600.465",  "C" },
	{ 1018, "520.213", "A-" },
	{ 1018, "600.211",  "A" },
	{ 1018, "600.303",  "A" },
	{ 1018, "600.337", "C-" },
	{ 1018, "600.463",  "B" },
	{ 1018, "600.465",  "B" },
	{ 1019, "600.103",  "B" },
	{ 1019, "600.107",  "B" },
	{ 1019, "600.113", "D+" },
	{ 1019, "600.227",  "A" },
	{ 1019, "600.303",  "A" },
	{ 1020, "600.333",  "A" },
	{ 1020, "600.337",  "A" },
	{ 1020, "600.415",  "A" },
	{ 1020, "600.461",  "A" },
	{ 1020, "600.465",  "A" },
	{ 1021, "600.303", "B-" },
	{ 1021, "600.303",  "B" },
	{ 1021, "600.415",  "B" },
	{ 1021, "600.437",  "B" },
	{ 1021, "600.437",  "B" },
	{ 1021, "600.445", "B-" },
	{ 1021, "600.445",  "C" },
	{ 1021, "600.463",  "A" },
	{ 1021, "600.463",  "B" },
	{ 1022, "550.420",  "B" },
	{ 1022, "550.420", "B+" },
	{ 1022, "600.107",  "A" },
	{ 1022, "600.227",  "A" },
	{ 1022, "600.227",  "A" },
	{ 1022, "600.232",  "B" },
	{ 1022, "600.303",  "B" },
	{ 1022, "600.315",  "D" },
	{ 1022, "600.461",  "A" },
	{ 1023, "600.113", "A-" },
	{ 1023, "600.315",  "B" },
	{ 1023, "600.333",  "B" },
	{ 1023, "600.337", "B+" },
	{ 1023, "600.463",  "A" },
	{ 1023, "600.465",  "A" },
	{ 1023, "600.657",  "B" },
	{ 1023, "600.787",  "B" },
	{ 1024, "550.291",  "B" },
	{ 1024, "550.413",  "C" },
	{ 1024, "550.471", "A-" },
	{ 1024, "550.620",  "A" },
	{ 1024, "550.626",  "B" },
	{ 1024, "550.671",  "B" },
	{ 1024, "550.681",  "B" },
	{ 1024, "600.415",  "B" },
	{ 1025, "520.213",  "A" },
	{ 1025, "520.345", "A+" },
	{ 1025, "550.310",  "A" },
	{ 1025, "550.413",  "A" },
	{ 1025, "550.420",  "C" },
	{ 1025, "550.471",  "B" },
	{ 1025, "600.107",  "B" },
	{ 1026, "520.349",  "A" },
	{ 1026, "520.353",  "A" },
	{ 1026, "600.303",  "A" },
	{ 1026, "600.437",  "A" },
	{ 1026, "600.445",  "A" },
	{ 1026, "600.463", "B-" },
	{ 1027, "600.107",  "B" },
	{ 1027, "600.227",  "B" },
	{ 1027, "600.232",  "B" },
	{ 1027, "600.303",  "B" },
	{ 1027, "600.315", "B-" },
	{ 1027, "600.461", "B-" },
	{ 1027, "600.463",  "B" },
	{ 1028, "550.420", "B+" },
	{ 1028, "600.227",  "A" },
	{ 1028, "600.315", "A+" },
	{ 1028, "600.333",  "A" },
	{ 1028, "600.337", "A+" },
	{ 1029, "550.413", "C-" },
	{ 1029, "550.471",  "A" },
	{ 1029, "550.620", "B-" },
	{ 1029, "550.671", "A-" },
	{ 1029, "600.113", "B-" },
	{ 1029, "600.463", "A+" },
	{ 1030, "520.345",  "B" },
	{ 1030, "550.291",  "B" },
	{ 1030, "550.310", "B-" },
	{ 1030, "550.413", "B-" },
	{ 1030, "550.420",  "B" },
	{ 1030, "550.471", "B+" },
	{ 1030, "600.107",  "B" },
	{ 1031, "520.213", "B+" },
	{ 1031, "520.349",  "B" },
	{ 1031, "520.353",  "C" },
	{ 1031, "600.437", "A+" },
	{ 1032, "550.420", "A-" },
	{ 1032, "550.420", "D-" },
	{ 1032, "600.232", "A-" },
	{ 1032, "600.303",  "A" },
	{ 1032, "600.315",  "A" },
	{ 1033, "600.113",  "A" },
	{ 1033, "600.227",  "A" },
	{ 1033, "600.315",  "A" },
	{ 1033, "600.333",  "A" },
	{ 1033, "600.337",  "B" },
	{ 1034, "050.109", "B+" },
	{ 1034, "050.203",  "B" },
	{ 1034, "050.325",  "B" },
	{ 1034, "600.107", "B+" },
	{ 1034, "600.315",  "B" },
	{ 1035, "050.381", "B-" },
	{ 1035, "050.427", "A-" },
	{ 1035, "050.670",  "B" },
	{ 1035, "050.802",  "D" },
	{ 1035, "050.821",  "A" },
	{ 1035, "600.109", "B-" }
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

struct T_grade_conversion
grade_conversion[] = {
	{ "A+", 4.0 },
	{  "A", 4.0 },
	{ "A-", 3.7 },
	{ "B+", 3.3 },
	{  "B", 3.0 },
	{ "B-", 2.7 },
	{ "C+", 2.3 },
	{  "C", 2.0 },
	{ "C-", 1.7 },
	{ "D+", 1.3 },
	{  "D", 1.0 },
	{ "D-", 0.7 },
	{  "F", 0.0 }
};

struct T_member_of
member_of[] = {
	{ 7792, 600,   "Primary" },
	{ 9210, 520,   "Primary" },
	{ 9811, 550,   "Primary" },
	{ 9643,  50,   "Primary" },
	{ 9379, 520,   "Primary" },
	{ 8918, 600,   "Primary" },
	{ 7712, 600,   "Primary" },
	{ 1121, 600,   "Primary" },
	{ 9172, 600,   "Primary" },
	{ 8423, 600,   "Primary" },
	{ 1148, 600,   "Primary" },
	{ 8741, 600,   "Primary" },
	{ 3457, 600,   "Primary" },
	{ 7723, 600,   "Primary" },
	{ 8721, 600,   "Primary" },
	{ 2192, 600,   "Primary" },
	{ 8114, 600,   "Primary" },
	{ 6112, 600,   "Primary" },
	{ 9826, 600,   "Primary" },
	{ 1193, 600,   "Primary" },
	{ 1082, 600,   "Primary" },
	{ 4230, 600,   "Primary" },
	{ 8989, 600, "Secondary" },
	{ 7271, 600, "Secondary" },
	{ 8721, 520, "Secondary" },
	{ 8741,  50, "Secondary" },
	{ 7271,  50, "Secondary" },
	{ 6182, 550,   "Primary" },
	{ 8772, 550,   "Primary" },
	{ 2738, 550,   "Primary" },
	{ 2881, 550,   "Primary" },
	{ 9922, 550,   "Primary" },
	{ 6541, 550,   "Primary" },
	{ 8102, 550,   "Primary" },
	{ 1177, 550,   "Primary" },
	{ 9823, 550,   "Primary" },
	{ 2311, 550,   "Primary" },
	{ 2291, 550,   "Primary" },
	{ 8122, 550,   "Primary" },
	{ 8989,  50,   "Primary" },
	{ 4432,  50,   "Primary" },
	{ 5718,  50,   "Primary" },
	{ 8791,  50,   "Primary" },
	{ 9011,  50,   "Primary" },
	{ 6910,  50,   "Primary" },
	{ 8723, 520,   "Primary" },
	{ 2028, 520,   "Primary" },
	{ 8722, 520,   "Primary" },
	{ 9191, 520,   "Primary" },
	{ 1823, 520,   "Primary" },
	{ 7134, 520,   "Primary" },
	{ 9199, 520,   "Primary" },
	{ 6925, 520,   "Primary" },
	{ 7271, 520,   "Primary" },
	{ 6191, 520,   "Primary" },
	{ 2119, 520,   "Primary" },
	{ 9514, 520,   "Primary" },
	{ 7231, 520,   "Primary" },
	{ 1172, 520,   "Primary" },
	{ 8118, 520,   "Primary" },
	{ 7506, 520,   "Primary" },
	{ 6330, 520,   "Primary" },
	{ 9824, 520,   "Primary" }
};

struct T_minor_in
minor_in[] = {
	{ 1004, 520 },
	{ 1005, 550 },
	{ 1006,  50 },
	{ 1007, 520 },
	{ 1008, 550 },
	{ 1014,  90 },
	{ 1015, 140 },
	{ 1016, 190 },
	{ 1027, 530 },
	{ 1031, 540 }
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