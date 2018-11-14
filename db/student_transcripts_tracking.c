/*
Database "student_transcripts_tracking" contains tables:
	addresses
	courses
	degree_programs
	departments
	sections
	semesters
	student_enrolment
	student_enrolment_courses
	students
	transcript_contents
	transcripts
*/

#ifndef STUDENT_TRANSCRIPTS_TRACKING
#define STUDENT_TRANSCRIPTS_TRACKING

struct T_addresses {
	double address_id;
	char line_1[30];
	char line_2[10];
	char line_3[5];
	char city[17];
	char zip_postcode[4];
	char state_province_county[14];
	char country[16];
	char other_address_details[5];
};

struct T_courses {
	double course_id;
	char course_name[5];
	char course_description[2];
	char other_details[5];
};

struct T_degree_programs {
	double degree_program_id;
	double department_id;	// --> departments.department_id
	char degree_summary_name[9];
	char degree_summary_description[11];
	char other_details[5];
};

struct T_departments {
	double department_id;
	char department_name[17];
	char department_description[12];
	char other_details[5];
};

struct T_sections {
	double section_id;
	double course_id;	// --> courses.course_id
	char section_name[2];
	char section_description[14];
	char other_details[5];
};

struct T_semesters {
	double semester_id;
	char semester_name[12];
	char semester_description[2];
	char other_details[5];
};

struct T_student_enrolment {
	double student_enrolment_id;
	double degree_program_id;	// --> degree_programs.degree_program_id
	double semester_id;	// --> semesters.semester_id
	double student_id;	// --> students.student_id
	char other_details[5];
};

struct T_student_enrolment_courses {
	double student_course_id;
	double course_id;	// --> courses.course_id
	double student_enrolment_id;	// --> student_enrolment.student_enrolment_id
};

struct T_students {
	double student_id;
	double current_address_id;	// --> addresses.address_id
	double permanent_address_id;	// --> addresses.address_id
	char first_name[9];
	char middle_name[9];
	char last_name[13];
	char cell_mobile_number[20];
	char email_address[29];
	char ssn[10];
	char date_first_registered[20];
	char date_left[20];
	char other_student_details[11];
};

struct T_transcript_contents {
	double student_course_id;	// --> student_enrolment_courses.student_course_id
	double transcript_id;	// --> transcripts.transcript_id
};

struct T_transcripts {
	double transcript_id;
	char transcript_date[20];
	char other_details[5];
};

struct T_addresses
addresses[] = {
	{  1,    "2294 Grant Square Apt. 235",  "Apt. 370", "None",     "Port Chelsea", "148",      "Virginia",         "Iceland", "None" },
	{  2, "3999 Aufderhar Ways Suite 593",  "Apt. 388", "None",  "Lake Laishafurt", "943",      "Kentucky",         "Burundi", "None" },
	{  3, "67942 Carlotta Ferry Apt. 686",  "Apt. 583", "None",     "Goodwinhaven", "541",        "Kansas",    "Saudi Arabia", "None" },
	{  4,     "0144 Lamar Plaza Apt. 346", "Suite 703", "None",    "Port Evanston", "847",    "Washington",          "Angola", "None" },
	{  5,   "858 Peggie Bypass Suite 212",  "Apt. 335", "None",    "Michelleburgh", "446",        "Hawaii",           "Haiti", "None" },
	{  6,              "16998 Mraz Lodge",  "Apt. 689", "None",       "North Omer", "902",      "Kentucky",       "Gibraltar", "None" },
	{  7,              "193 Marlin Brook",  "Apt. 406", "None",      "Herzoghaven", "068",      "Arkansas",    "Cook Islands", "None" },
	{  8,     "202 Hessel Views Apt. 468",  "Apt. 305", "None",     "Mariliehaven", "638",         "Idaho",         "Croatia", "None" },
	{  9,             "0643 Muller Vista", "Suite 383", "None",   "Port Elvisfurt", "777", "NorthCarolina",           "Gabon", "None" },
	{ 10,               "7081 Eda Center", "Suite 830", "None",   "Rutherfordtown", "839",      "Delaware", "Kyrgyz Republic", "None" },
	{ 11,  "9283 Schulist Falls Apt. 037", "Suite 239", "None",      "South Palma", "400",  "WestVirginia",         "Bermuda", "None" },
	{ 12,     "979 Haag Shores Suite 656",  "Apt. 468", "None",     "Prohaskafort", "590",   "SouthDakota",         "Lesotho", "None" },
	{ 13,           "492 Wilkinson Route", "Suite 865", "None", "New Clemensburgh", "386",       "Florida",           "Samoa", "None" },
	{ 14,    "186 Evan Motorway Apt. 409", "Suite 079", "None",   "Lake Careyberg", "895",      "Kentucky",   "New Caledonia", "None" },
	{ 15,      "74046 Metz Walk Apt. 113", "Suite 674", "None",      "Port Oceane", "669",       "Wyoming",  "Norfolk Island", "None" }
};

struct T_courses
courses[] = {
	{  1,   "ds", "p", "None" },
	{  2, "math", "q", "None" },
	{  3,   "os", "v", "None" },
	{  4,   "en", "k", "None" },
	{  5,   "fr", "c", "None" },
	{  6,   "la", "n", "None" },
	{  7,  "cal", "l", "None" },
	{  8,  "nlp", "q", "None" },
	{  9,   "dl", "l", "None" },
	{ 10,   "ml", "b", "None" },
	{ 11,   "ai", "w", "None" },
	{ 12,   "db", "q", "None" },
	{ 13,   "rs", "v", "None" },
	{ 14,   "pl", "p", "None" },
	{ 15,  "oop", "d", "None" }
};

struct T_degree_programs
degree_programs[] = {
	{  1, 13,   "Master", "architecto", "None" },
	{  2,  2,   "Master",     "cumque", "None" },
	{  3, 13,   "Master",    "placeat", "None" },
	{  4,  8, "Bachelor",       "unde", "None" },
	{  5, 11,   "Master",   "officiis", "None" },
	{  6,  8, "Bachelor",    "aperiam", "None" },
	{  7, 14, "Bachelor",  "assumenda", "None" },
	{  8, 15,   "Master",      "earum", "None" },
	{  9,  3, "Bachelor",   "voluptas", "None" },
	{ 10,  8, "Bachelor",        "aut", "None" },
	{ 11, 14, "Bachelor",        "aut", "None" },
	{ 12,  4,   "Master",        "qui", "None" },
	{ 13,  7, "Bachelor",       "quam", "None" },
	{ 14,  2,      "PHD",         "et", "None" },
	{ 15, 12,      "PHD",       "esse", "None" }
};

struct T_departments
departments[] = {
	{  1, "computer science",       "error", "None" },
	{  2,          "history",     "nostrum", "None" },
	{  3,              "art",     "aliquam", "None" },
	{  4,       "linguistic",       "natus", "None" },
	{  5,       "management",       "nihil", "None" },
	{  6,         "engineer",       "autem", "None" },
	{  7,             "math",   "doloribus", "None" },
	{  8,       "statistics",       "nihil", "None" },
	{  9,              "law",     "dolorem", "None" },
	{ 10,        "economics",         "non", "None" },
	{ 11,          "biology", "consequatur", "None" },
	{ 12,          "medical",          "ea", "None" },
	{ 13,            "dance", "consequatur", "None" },
	{ 14,            "drama",          "in", "None" },
	{ 15,        "geography",        "nisi", "None" }
};

struct T_sections
sections[] = {
	{  1,  9, "a",           "non", "None" },
	{  2,  2, "b",    "voluptatem", "None" },
	{  3,  8, "c",           "qui", "None" },
	{  4,  1, "d",      "voluptas", "None" },
	{  5,  5, "e",            "ex", "None" },
	{  6,  7, "f",    "doloremque", "None" },
	{  7, 12, "g",     "provident", "None" },
	{  8, 14, "h",            "et", "None" },
	{  9,  8, "j",          "quis", "None" },
	{ 10, 14, "k",      "nesciunt", "None" },
	{ 11,  1, "l",            "ad", "None" },
	{ 12,  4, "o",            "et", "None" },
	{ 13,  5, "p",       "facilis", "None" },
	{ 14,  6, "u", "reprehenderit", "None" },
	{ 15, 10, "y",           "qui", "None" }
};

struct T_semesters
semesters[] = {
	{  1, "spring 2010", "x", "None" },
	{  2, "summer 2010", "g", "None" },
	{  3,   "fall 2010", "w", "None" },
	{  4, "winter 2010", "c", "None" },
	{  5, "spring 2018", "c", "None" },
	{  6, "spring 2012", "l", "None" },
	{  7, "spring 2013", "y", "None" },
	{  8, "spring 2014", "x", "None" },
	{  9, "spring 2015", "x", "None" },
	{ 10, "spring 2016", "f", "None" },
	{ 11, "spring 2017", "g", "None" },
	{ 12, "spring 2018", "m", "None" },
	{ 13,   "fall 2018", "q", "None" },
	{ 14, "winter 2018", "t", "None" },
	{ 15, "spring 2019", "o", "None" }
};

struct T_student_enrolment
student_enrolment[] = {
	{  1, 12, 13, 14, "None" },
	{  2,  4,  2,  9, "None" },
	{  3, 10,  2,  7, "None" },
	{  4,  4, 15,  9, "None" },
	{  5,  5,  1, 14, "None" },
	{  6,  3, 13,  1, "None" },
	{  7,  9,  9,  4, "None" },
	{  8,  8,  5, 12, "None" },
	{  9, 12,  6,  7, "None" },
	{ 10, 11,  2,  7, "None" },
	{ 11, 10, 13,  4, "None" },
	{ 12,  9,  2,  5, "None" },
	{ 13,  2, 12,  6, "None" },
	{ 14,  9, 15,  6, "None" },
	{ 15,  2,  4,  6, "None" }
};

struct T_student_enrolment_courses
student_enrolment_courses[] = {
	{        0,  6,  2 },
	{        1,  6,  8 },
	{        2, 14,  5 },
	{        7, 11,  5 },
	{        8,  2,  5 },
	{       76, 10, 13 },
	{       96,  2,  4 },
	{     9860, 14, 10 },
	{   438800,  3,  4 },
	{   604750,  4,  6 },
	{   681404, 10,  4 },
	{ 28982908,  8,  9 },
	{ 45105806, 13, 14 },
	{ 70882679, 13,  9 },
	{ 83814225, 12, 14 }
};

struct T_students
students[] = {
	{  1, 10, 15, "Timmothy",     "Anna",         "Ward",   "(096)889-8954x524",    "erwin.zboncak@example.com",       "965", "1971-02-05 07:28:23", "1971-05-17 19:28:49",       "quia" },
	{  2, 12,  5,   "Hobart",   "Lorenz",   "Balistreri",      "1-009-710-5151",      "swift.kolby@example.com",    "304246", "1976-10-26 02:33:06", "2013-10-05 17:41:28",      "autem" },
	{  3,  9,  5,   "Warren",   "Violet",    "Gleichner",         "07661787471",     "johns.unique@example.net",         "3", "2007-08-29 23:25:41", "2007-03-31 09:53:19",    "facilis" },
	{  4,  7, 11,   "Jarvis",  "Aaliyah",      "Carroll",         "09700166582",        "jillian26@example.net", "141072406", "2014-03-28 05:48:23", "2007-08-02 04:12:58",      "atque" },
	{  5,  9,  9,   "Milton",   "Vaughn", "Christiansen",        "171-642-5684",        "lhartmann@example.org",          "", "1973-05-19 19:12:46", "2007-11-28 12:50:21",    "laborum" },
	{  6,  6,  3, "Stanford",     "Mona",       "Rogahn",        "436.613.7683",        "skassulke@example.net",       "248", "1997-03-20 16:47:25", "2016-04-09 12:27:04",        "qui" },
	{  7, 15,  3,    "Frida",    "Aisha",         "Huel",  "1-879-796-8987x164", "baumbach.lucious@example.org",       "668", "2018-03-13 09:56:22", "1997-11-16 08:54:33",    "dolorum" },
	{  8,  1,  5,  "Delaney",     "Judd",    "Ankunding",         "03174364122",           "dell43@example.net",       "402", "1982-02-14 08:46:35", "2004-12-08 05:29:11", "voluptatem" },
	{  9,  2, 15,     "Reva",    "Golda",      "Osinski",       "(507)365-8405",           "qo'kon@example.com",        "39", "2017-01-04 08:10:25", "1990-09-01 05:03:27",   "nesciunt" },
	{ 10, 15, 14,    "Helga",    "Cleve",         "Mohr",        "677.401.9382",        "nya.lesch@example.net",        "43", "2009-09-25 00:14:25", "2017-07-09 21:38:43",      "rerum" },
	{ 11, 14,  4,    "Gregg",   "Mossie",      "Schuppe",       "(462)246-7921",           "nbruen@example.org",       "494", "1989-05-24 23:31:29", "1975-10-09 00:49:27",      "omnis" },
	{ 12, 14,  9,    "Orrin",     "Neal",       "Kemmer",  "(982)153-1469x1733",           "beth42@example.org",   "6274274", "2005-12-15 08:42:10", "2006-08-04 17:26:49",        "non" },
	{ 13,  9,  8,     "Deon", "Brooklyn",      "Weimann", "(213)445-0399x85208",            "jhuel@example.com",     "68095", "1986-02-24 21:12:23", "2014-05-30 23:32:02",  "assumenda" },
	{ 14, 12, 11,    "Jordy",  "Osborne",       "Rempel",  "(605)919-3594x3661",         "gracie29@example.com",  "34458427", "2004-12-24 12:36:46", "1999-08-24 00:07:10",         "et" },
	{ 15,  2,  9,     "Jett",  "Alberta",    "Jaskolski",   "877.549.9067x8723",            "mya88@example.org",       "156", "1982-06-19 13:15:18", "1982-06-11 00:25:39",      "omnis" }
};

struct T_transcript_contents
transcript_contents[] = {
	{        0,  2 },
	{       96,  8 },
	{       76,  9 },
	{        7,  4 },
	{        0, 15 },
	{       76, 15 },
	{        0,  6 },
	{       96, 13 },
	{       76, 12 },
	{ 28982908, 11 },
	{        2,  8 },
	{        0,  5 },
	{        8,  5 },
	{ 45105806,  8 },
	{ 70882679,  6 }
};

struct T_transcripts
transcripts[] = {
	{  1, "1988-04-30 01:19:47", "None" },
	{  2, "1975-10-28 15:16:51", "None" },
	{  3, "1984-12-19 00:37:21", "None" },
	{  4, "1999-01-06 20:06:46", "None" },
	{  5, "2013-06-30 13:01:40", "None" },
	{  6, "2010-12-13 10:55:15", "None" },
	{  7, "1990-03-05 11:59:41", "None" },
	{  8, "1975-05-06 12:04:47", "None" },
	{  9, "1984-01-18 23:07:07", "None" },
	{ 10, "1975-05-20 18:31:21", "None" },
	{ 11, "1986-07-12 07:27:29", "None" },
	{ 12, "1985-08-21 09:32:39", "None" },
	{ 13, "1985-04-29 01:20:20", "None" },
	{ 14, "2002-09-24 06:11:49", "None" },
	{ 15, "1998-11-22 12:18:29", "None" }
};

#endif