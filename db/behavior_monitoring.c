/*
Database "behavior_monitoring" contains tables:
	addresses
	assessment_notes
	behavior_incident
	detention
	reference_address_types
	reference_detention_type
	reference_incident_type
	student_addresses
	students
	students_in_detention
	teachers
*/

#ifndef BEHAVIOR_MONITORING
#define BEHAVIOR_MONITORING

struct T_addresses {
	double address_id;
	char line_1[33];
	char line_2[5];
	char line_3[5];
	char city[19];
	char zip_postcode[4];
	char state_province_county[12];
	char country[4];
	char other_address_details[5];
};

struct T_assessment_notes {
	double notes_id;
	double student_id;	// --> students.student_id
	double teacher_id;	// --> teachers.teacher_id
	char date_of_notes[20];
	char text_of_notes[5];
	char other_details[5];
};

struct T_behavior_incident {
	double incident_id;
	char incident_type_code[9];	// --> reference_incident_type.incident_type_code
	double student_id;	// --> students.student_id
	char date_incident_start[20];
	char date_incident_end[20];
	char incident_summary[5];
	char recommendations[17];
	char other_details[5];
};

struct T_detention {
	double detention_id;
	char detention_type_code[7];	// --> reference_detention_type.detention_type_code
	double teacher_id;	// --> teachers.teacher_id
	char datetime_detention_start[20];
	char datetime_detention_end[20];
	char detention_summary[5];
	char other_details[5];
};

struct T_reference_address_types {
	char address_type_code[5];
	char address_type_description[18];
};

struct T_reference_detention_type {
	char detention_type_code[7];
	char detention_type_description[18];
};

struct T_reference_incident_type {
	char incident_type_code[9];
	char incident_type_description[12];
};

struct T_student_addresses {
	double student_id;	// --> students.student_id
	double address_id;	// --> addresses.address_id
	char date_address_from[20];
	char date_address_to[20];
	double monthly_rental;
	char other_details[10];
};

struct T_students {
	double student_id;
	double address_id;	// --> addresses.address_id
	char first_name[11];
	char middle_name[9];
	char last_name[11];
	char cell_mobile_number[19];
	char email_address[29];
	char date_first_rental[20];
	char date_left_university[20];
	char other_student_details[12];
};

struct T_students_in_detention {
	double student_id;	// --> students.student_id
	double detention_id;	// --> detention.detention_id
	double incident_id;	// --> behavior_incident.incident_id
};

struct T_teachers {
	double teacher_id;
	double address_id;	// --> addresses.address_id
	char first_name[10];
	char middle_name[9];
	char last_name[9];
	char gender[2];
	char cell_mobile_number[19];
	char email_address[29];
	char other_details[5];
};

struct T_addresses
addresses[] = {
	{  1,                  "020 Orie Canyon", "None", "None",   "North Loyceville", "197",      "Hawaii", "USA", "None" },
	{  2,                  "1333 Boyle Lane", "None", "None",          "West Sean", "937",    "Illinois", "USA", "None" },
	{  3,          "027 Kim Divide Apt. 492", "None", "None",          "Beierview", "918",       "Texas", "USA", "None" },
	{  4,    "056 Murphy Stravenue Apt. 600", "None", "None",        "Elinoreport", "238",   "Wisconsin", "USA", "None" },
	{  5, "719 Pfannerstill Ridge Suite 663", "None", "None",         "Meganeland", "002", "SouthDakota", "USA", "None" },
	{  6,                   "420 Zieme Oval", "None", "None",     "Corkeryborough", "744",   "Wisconsin", "USA", "None" },
	{  7,        "27712 Marks Lake Apt. 752", "None", "None",       "Gleasonshire", "182",    "Maryland", "USA", "None" },
	{  8,    "6960 O'Connell Dale Suite 622", "None", "None",  "New Annabellefort", "062",    "Kentucky", "USA", "None" },
	{  9,    "18327 Jaime Terrace Suite 343", "None", "None",          "Edmundton", "520",      "Oregon", "USA", "None" },
	{ 10,            "3069 Garrison Squares", "None", "None",     "Lake Ahmadland", "748",      "Nevada", "USA", "None" },
	{ 11,   "668 Wilkinson Corners Apt. 992", "None", "None",     "North Jayceton", "612",    "Illinois", "USA", "None" },
	{ 12,             "11940 Pauline Shoals", "None", "None",     "West Lianafurt", "619",    "Arkansas", "USA", "None" },
	{ 13,      "39834 Anne Mission Apt. 956", "None", "None",     "North Orlobury", "663",        "Utah", "USA", "None" },
	{ 14,                  "4115 Ebert Fall", "None", "None", "North Fletcherside", "607",     "Arizona", "USA", "None" },
	{ 15,               "920 Brayan Harbors", "None", "None",        "Caitlynstad", "435",     "Montana", "USA", "None" },
	{ 16,         "014 Runte Haven Apt. 870", "None", "None",        "Tressamouth", "637",     "NewYork", "USA", "None" },
	{ 17,                 "654 Fisher Roads", "None", "None",     "Hegmannborough", "397",   "Tennessee", "USA", "None" },
	{ 18,                 "266 Kub Crossing", "None", "None",          "Hintzport", "865",     "Alabama", "USA", "None" },
	{ 19,     "51391 Dach Parkways Apt. 124", "None", "None",         "Unachester", "753",   "Wisconsin", "USA", "None" },
	{ 20,                  "2451 Wiza Inlet", "None", "None",         "Larkinport", "545",     "NewYork", "USA", "None" }
};

struct T_assessment_notes
assessment_notes[] = {
	{  1,  7,  3, "1978-04-15 04:49:18", "None", "None" },
	{  2, 11, 10, "2005-06-30 02:48:35", "None", "None" },
	{  3, 15,  3, "1988-06-09 00:24:01", "None", "None" },
	{  4, 12,  9, "1991-08-15 01:22:08", "None", "None" },
	{  5,  4, 10, "1971-05-05 20:07:08", "None", "None" },
	{  6, 12,  6, "2014-01-31 02:05:02", "None", "None" },
	{  7, 12,  7, "1984-12-13 23:04:28", "None", "None" },
	{  8,  7, 14, "1988-04-11 04:56:26", "None", "None" },
	{  9, 14, 15, "1972-04-27 04:51:51", "None", "None" },
	{ 10, 13,  6, "2017-12-14 08:21:54", "None", "None" },
	{ 11,  3, 14, "1993-08-16 17:39:53", "None", "None" },
	{ 12,  1,  1, "1991-08-20 08:03:23", "None", "None" },
	{ 13, 13,  3, "2014-04-28 02:07:53", "None", "None" },
	{ 14, 14, 15, "1974-11-26 04:23:22", "None", "None" },
	{ 15,  1,  9, "1984-09-10 01:18:34", "None", "None" }
};

struct T_behavior_incident
behavior_incident[] = {
	{  1,    "NOISE",  6, "2017-07-09 10:04:13", "2018-03-08 14:08:54", "None",             "None", "None" },
	{  2,  "DISTURB", 13, "2018-01-31 10:51:13", "2018-03-18 18:40:05", "None",             "None", "None" },
	{  3, "VIOLENCE",  1, "2017-10-10 22:43:54", "2018-03-22 02:10:35", "None", "Transfer schools", "None" },
	{  4, "VIOLENCE", 10, "2017-07-20 17:43:50", "2018-03-09 06:28:44", "None",             "None", "None" },
	{  5,    "NOISE",  7, "2017-08-13 22:15:05", "2018-02-25 05:38:58", "None",             "None", "None" },
	{  6, "VIOLENCE",  8, "2017-06-09 18:32:28", "2018-03-20 10:32:10", "None",             "None", "None" },
	{  7, "VIOLENCE",  4, "2017-04-23 07:03:17", "2018-03-19 02:35:39", "None",             "None", "None" },
	{  8,  "DISTURB",  1, "2017-05-02 12:52:09", "2018-03-18 01:23:29", "None",             "None", "None" },
	{  9,    "NOISE", 11, "2017-06-19 14:25:54", "2018-03-08 09:36:36", "None",             "None", "None" },
	{ 10,    "NOISE",  1, "2018-01-27 09:24:45", "2018-03-13 05:18:05", "None",             "None", "None" },
	{ 11, "VIOLENCE",  9, "2018-03-06 21:03:58", "2018-03-06 14:44:37", "None", "Transfer schools", "None" },
	{ 12,  "DISTURB",  7, "2017-08-27 03:21:30", "2018-03-02 16:06:34", "None",             "None", "None" },
	{ 13, "VIOLENCE",  5, "2017-05-25 15:02:53", "2018-03-10 21:12:22", "None",             "None", "None" },
	{ 14,    "NOISE",  1, "2017-08-29 20:48:56", "2018-03-16 14:37:20", "None", "Transfer schools", "None" },
	{ 15,    "NOISE", 15, "2018-02-05 13:13:45", "2018-03-08 09:00:48", "None",             "None", "None" }
};

struct T_detention
detention[] = {
	{  1,  "AFTER",  7, "2017-09-05 00:38:25", "2018-03-08 02:08:32", "None", "None" },
	{  2,  "AFTER", 14, "2018-01-10 08:09:02", "2018-03-07 04:24:48", "None", "None" },
	{  3, "BREAK ", 11, "2017-12-14 06:40:29", "2018-03-08 09:16:38", "None", "None" },
	{  4,  "AFTER",  8, "2017-06-09 06:13:09", "2018-03-21 19:34:56", "None", "None" },
	{  5, "BREAK ",  3, "2017-08-25 12:00:46", "2018-03-11 13:21:07", "None", "None" },
	{  6, "BREAK ", 12, "2017-10-20 22:34:44", "2018-03-11 12:58:40", "None", "None" },
	{  7, "BREAK ", 15, "2018-02-19 11:44:52", "2018-03-17 12:35:41", "None", "None" },
	{  8, "BREAK ",  5, "2017-11-26 15:05:05", "2018-03-16 01:37:25", "None", "None" },
	{  9,  "LUNCH", 15, "2017-10-30 16:04:00", "2018-03-22 20:15:47", "None", "None" },
	{ 10,  "AFTER", 15, "2018-01-29 20:43:45", "2018-03-05 03:31:24", "None", "None" },
	{ 11,  "AFTER",  8, "2017-10-03 18:44:31", "2018-03-03 14:58:43", "None", "None" },
	{ 12,  "LUNCH",  3, "2018-01-20 19:06:56", "2018-02-25 07:20:30", "None", "None" },
	{ 13, "BREAK ", 10, "2017-08-02 07:46:39", "2018-03-10 14:58:31", "None", "None" },
	{ 14,  "AFTER", 12, "2017-12-18 13:47:51", "2018-03-04 20:52:51", "None", "None" },
	{ 15,  "LUNCH", 11, "2017-08-21 06:41:29", "2018-03-13 20:37:39", "None", "None" }
};

struct T_reference_address_types
reference_address_types[] = {
	{ "BILL",           "Billing" },
	{ "HOME", "Home or Residence" }
};

struct T_reference_detention_type
reference_detention_type[] = {
	{ "BREAK ", "During Break time" },
	{  "AFTER",      "After School" },
	{  "LUNCH",        "Lunch-time" }
};

struct T_reference_incident_type
reference_incident_type[] = {
	{    "NOISE",       "Noise" },
	{ "VIOLENCE",    "Violence" },
	{  "DISTURB", "Disturbance" }
};

struct T_student_addresses
student_addresses[] = {
	{  6, 12, "2017-10-16 13:56:34", "2018-03-15 10:37:19",  826.4319,     "house" },
	{  3, 18, "2017-06-19 12:39:39", "2018-03-02 00:19:57", 1113.0996,     "house" },
	{  8,  1, "2017-10-31 12:40:34", "2018-02-25 05:21:34", 1297.3186, "apartment" },
	{  7,  3, "2017-04-28 06:27:14", "2018-03-23 09:52:56",  894.0958,     "house" },
	{ 13, 16, "2018-03-23 08:25:36", "2018-03-12 17:21:24",  1297.807, "apartment" },
	{ 11, 12, "2018-02-18 06:58:49", "2018-02-27 04:45:57",  747.5312,     "house" },
	{  4,  1, "2017-06-22 12:20:52", "2018-03-04 17:04:35",  756.6745,     "house" },
	{  2,  8, "2017-07-21 10:13:10", "2018-03-20 09:02:48", 1287.5604,     "house" },
	{  7, 13, "2018-01-13 22:56:06", "2018-03-22 17:56:20", 1067.8383,     "house" },
	{  4,  2, "2017-09-10 19:41:10", "2018-03-04 06:51:19",  1132.742,     "house" },
	{  8, 16, "2018-01-12 13:23:23", "2018-03-04 06:05:45",  683.0735,     "house" },
	{  5, 13, "2017-03-29 18:22:55", "2018-03-14 09:12:05", 1036.8462, "apartment" },
	{  2,  3, "2017-08-12 18:28:31", "2018-03-06 21:41:20",  800.1214,     "house" },
	{  2,  8, "2017-04-18 05:36:44", "2018-03-07 04:29:28",  865.2615,     "house" },
	{  9,  9, "2018-02-04 02:28:04", "2018-03-12 02:57:48",  679.2988,     "house" },
	{ 13, 19, "2017-08-17 11:51:00", "2018-03-04 13:24:28",  644.9306, "apartment" },
	{ 15,  1, "2018-03-05 19:28:26", "2018-03-15 04:44:58", 1032.8717, "apartment" },
	{ 12, 10, "2017-09-23 05:16:17", "2018-03-05 21:12:37", 1032.9782, "apartment" },
	{  1,  5, "2017-11-12 04:24:02", "2018-03-14 17:00:44", 1007.2597, "apartment" },
	{ 10, 18, "2017-10-09 17:31:44", "2018-03-18 03:28:47",  620.2801,     "house" }
};

struct T_students
students[] = {
	{  1, 19,       "Emma", "Frederic",      "Rohan",       "235.899.9744",  "derrick.jenkins@example.com", "2017-12-05 15:20:04", "2018-03-03 03:33:05",        "None" },
	{  2,  9,   "Louvenia",   "Fatima",     "Hansen",     "1-247-673-8446", "rohan.clarabelle@example.org", "2017-08-08 22:30:36", "2018-02-24 11:12:11",        "None" },
	{  3, 10,       "Rhea",  "Gardner",   "Bergnaum", "1-751-162-9676x115",          "kkirlin@example.org", "2017-11-15 04:57:28", "2018-03-19 12:49:20",        "None" },
	{  4,  8,      "David",  "Darlene",   "Gorczany",     "1-895-196-9979",           "eolson@example.com", "2018-02-15 20:03:11", "2018-03-11 02:21:24",        "None" },
	{  5,  8,     "Lucile",    "Stone",   "Gottlieb",     "1-036-062-5465",   "dicki.kathryne@example.org", "2017-07-20 18:20:27", "2018-03-18 16:07:42",        "None" },
	{  6, 12, "Antonietta",  "Crystal",      "Fahey",      "(874)070-9495",   "norwood.howell@example.org", "2017-10-31 12:33:09", "2018-03-20 22:01:07",        "None" },
	{  7, 20,     "Rupert",  "Lincoln",      "Marks",  "763.072.5520x5907",   "lisette.brekke@example.net", "2017-09-25 12:02:23", "2018-03-01 08:56:04", "first honor" },
	{  8, 14,      "Julia",     "Arno", "Balistreri",  "319.497.4575x2214",   "jasmin.schuppe@example.com", "2018-02-23 02:28:07", "2018-03-01 16:03:55",        "None" },
	{  9, 19,    "Christy",  "Devonte",      "Huels", "(568)451-0917x3945",     "dora.zboncak@example.org", "2018-01-11 19:49:39", "2018-03-15 01:47:11",        "None" },
	{ 10,  2,     "Adella",  "Chesley",    "Krajcik",        "08605192839", "frederique.mante@example.org", "2017-07-05 19:15:29", "2018-03-11 15:57:19", "first honor" },
	{ 11,  2,       "Isac",    "Cleta",      "Fadel",   "+60(5)3280072514",          "qharvey@example.com", "2017-09-13 04:06:15", "2018-03-05 07:30:22", "first honor" },
	{ 12,  1,      "Ferne",    "Jerod",    "Weimann", "(921)011-7909x3518",        "mitchel55@example.net", "2017-05-24 05:00:18", "2018-02-28 12:33:53",        "None" },
	{ 13, 17,     "Misael",   "Justyn",       "Will",      "(062)892-7033",          "gbeatty@example.com", "2017-10-15 06:52:46", "2018-03-18 07:01:27",        "None" },
	{ 14,  9,      "Fanny",   "Ashlee",      "Haley",      "(820)260-5721",    "foster.zemlak@example.com", "2018-03-14 11:37:10", "2018-03-12 15:05:53",        "None" },
	{ 15, 15,     "Eugene",  "Mustafa",   "Tremblay",     "1-498-138-8088",  "kertzmann.devon@example.net", "2018-03-11 22:42:47", "2018-03-07 11:41:26", "first honor" }
};

struct T_students_in_detention
students_in_detention[] = {
	{  3, 15,  1 },
	{  8, 13,  3 },
	{ 11,  6, 11 },
	{ 12, 12,  1 },
	{ 14, 15, 13 },
	{  7,  7,  8 },
	{ 13,  9, 12 },
	{ 10, 14,  8 },
	{ 12,  2, 13 },
	{ 12, 12,  1 },
	{  9, 15, 15 },
	{ 10,  7, 12 },
	{ 13,  3,  3 },
	{  8, 15, 14 },
	{  8, 14, 14 }
};

struct T_teachers
teachers[] = {
	{  1, 15,      "Lyla",   "Wilson", "Medhurst", "1",       "792.333.7714",          "ohammes@example.com", "None" },
	{  2,  7,       "Sid", "Tremayne",   "Brakus", "1",  "202.626.1698x9242",        "deborah37@example.com", "None" },
	{  3,  8,   "Trystan",  "Alexane", "Schuster", "1",   "583-467-0403x647",      "hilll.kitty@example.com", "None" },
	{  4,  7,    "Donnie",   "Morgan",    "Kuhic", "1",        "07928511102", "destany.reichert@example.net", "None" },
	{  5, 15,     "Aniya",      "Ian",   "Becker", "1", "599.373.0773x67706",        "hahn.isom@example.com", "Dean" },
	{  6, 16,  "Citlalli",    "Ahmad",    "Kuhic", "1",       "017.636.7409",    "kozey.adeline@example.org", "None" },
	{  7,  3,     "Alvis",    "Macey",  "Schultz", "1",  "944-154-5379x4990",   "everardo.lynch@example.net", "None" },
	{  8, 13,   "Cecilia",  "Mitchel",     "Ward", "0",       "809.852.7009",     "paula.abbott@example.org", "None" },
	{  9,  2,   "Woodrow",    "Lilla",  "Goldner", "1",       "084-270-4880",          "ierdman@example.com", "None" },
	{ 10,  8,   "Gregory",   "Ardith",   "Heller", "0", "908-759-1808x63115",   "valentina.yost@example.com", "None" },
	{ 11, 12,    "Edmond",   "Kailyn",     "Lang", "0",  "(659)018-0143x379",           "lila58@example.com", "None" },
	{ 12, 10,    "Camren",  "Kendall",    "Moore", "1",  "(381)799-4759x169",    "randy.gerhold@example.org", "None" },
	{ 13, 19, "Stephanie",   "Tamara",    "Price", "0",       "952.821.3392",       "kiana.lang@example.net", "None" },
	{ 14, 14,    "Evelyn",    "Keanu",   "Hansen", "0", "1-787-044-8336x606",        "maribel21@example.org", "None" },
	{ 15, 10,    "Hobart",   "Michel", "Bergnaum", "1", "796-453-5175x64012",      "willms.lane@example.com", "None" }
};

#endif