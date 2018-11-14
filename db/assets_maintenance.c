/*
Database "assets_maintenance" contains tables:
	asset_parts
	assets
	engineer_skills
	engineer_visits
	fault_log
	fault_log_parts
	maintenance_contracts
	maintenance_engineers
	part_faults
	parts
	skills
	skills_required_to_fix
	staff
	third_party_companies
*/

#ifndef ASSETS_MAINTENANCE
#define ASSETS_MAINTENANCE

struct T_asset_parts {
	double asset_id;	// --> assets.asset_id
	double part_id;	// --> parts.part_id
};

struct T_assets {
	double asset_id;
	double maintenance_contract_id;	// --> maintenance_contracts.maintenance_contract_id
	double supplier_company_id;	// --> third_party_companies.company_id
	char asset_details[13];
	char asset_make[3];
	char asset_model[6];
	char asset_acquired_date[20];
	char asset_disposed_date[20];
	char other_asset_details[14];
};

struct T_engineer_skills {
	double engineer_id;	// --> maintenance_engineers.engineer_id
	double skill_id;	// --> skills.skill_id
};

struct T_engineer_visits {
	double engineer_visit_id;
	double contact_staff_id;	// --> staff.staff_id
	double engineer_id;	// --> maintenance_engineers.engineer_id
	double fault_log_entry_id;	// --> fault_log.fault_log_entry_id
	char fault_status[9];
	char visit_start_datetime[20];
	char visit_end_datetime[20];
	char other_visit_details[5];
};

struct T_fault_log {
	double fault_log_entry_id;
	double asset_id;	// --> assets.asset_id
	double recorded_by_staff_id;	// --> staff.staff_id
	char fault_log_entry_datetime[20];
	char fault_description[13];
	char other_fault_details[5];
};

struct T_fault_log_parts {
	double fault_log_entry_id;	// --> fault_log.fault_log_entry_id
	double part_fault_id;	// --> part_faults.part_fault_id
	char fault_status[9];
};

struct T_maintenance_contracts {
	double maintenance_contract_id;
	double maintenance_contract_company_id;	// --> third_party_companies.company_id
	char contract_start_date[20];
	char contract_end_date[20];
	char other_contract_details[5];
};

struct T_maintenance_engineers {
	double engineer_id;
	double company_id;	// --> third_party_companies.company_id
	char first_name[10];
	char last_name[8];
	char other_details[8];
};

struct T_part_faults {
	double part_fault_id;
	double part_id;	// --> parts.part_id
	char fault_short_name[3];
	char fault_description[19];
	char other_fault_details[5];
};

struct T_parts {
	double part_id;
	char part_name[8];
	char chargeable_yn[2];
	char chargeable_amount[2];
	char other_part_details[5];
};

struct T_skills {
	double skill_id;
	char skill_code[5];
	char skill_description[11];
};

struct T_skills_required_to_fix {
	double part_fault_id;	// --> part_faults.part_fault_id
	double skill_id;	// --> skills.skill_id
};

struct T_staff {
	double staff_id;
	char staff_name[11];
	char gender[2];
	char other_staff_details[8];
};

struct T_third_party_companies {
	double company_id;
	char company_type[23];
	char company_name[29];
	char company_address[31];
	char other_company_details[22];
};

struct T_asset_parts
asset_parts[] = {
	{  5, 3 },
	{  3, 3 },
	{ 10, 1 },
	{  1, 2 },
	{  3, 1 },
	{  1, 3 },
	{  6, 2 },
	{  2, 3 },
	{  3, 2 },
	{  2, 2 },
	{  3, 3 },
	{ 15, 3 },
	{  4, 1 },
	{ 14, 1 },
	{ 15, 2 }
};

struct T_assets
assets[] = {
	{  1,  2,  2, "dell laptop1", "PT", "58 ub", "2017-12-25 00:31:27", "2018-03-14 10:50:00",          "None" },
	{  2, 14,  1, "dell laptop2", "IN", "35 xt", "2018-01-27 00:59:46", "2018-03-20 04:24:09",          "None" },
	{  3,  7,  2, "dell laptop3", "IT", "63 ok", "2017-09-07 08:13:15", "2018-03-08 20:50:40", "Bad condition" },
	{  4, 11,  5, "dell laptop4", "RU", "69 uv", "2017-06-12 17:37:19", "2018-03-16 05:46:55",          "None" },
	{  5,  8,  5, "dell laptop5", "DE", "90 oq", "2017-07-21 16:03:19", "2018-02-27 18:59:07",          "None" },
	{  6,  8,  6,     "monitor1", "CN", "91 ub", "2017-04-22 12:33:39", "2018-03-10 11:11:43",          "None" },
	{  7,  6,  6,     "monitor2", "CN", "27 du", "2017-07-18 01:22:58", "2018-03-20 22:45:00",          "None" },
	{  8, 15,  7,     "monitor3", "GB", "94 kg", "2017-10-24 04:29:17", "2018-02-28 18:14:13", "Bad condition" },
	{  9, 12, 13,     "machine1", "RU", "07 yt", "2017-04-16 12:19:25", "2018-03-08 18:42:41",          "None" },
	{ 10,  2,  2,     "machine2", "FR", "20 tl", "2017-09-19 16:15:45", "2018-03-06 20:36:14",          "None" },
	{ 11,  7, 12,     "machine3", "FR", "11 wi", "2017-11-25 05:04:20", "2018-03-17 00:51:14",          "None" },
	{ 12, 13, 14,     "machine4", "RU", "95 vn", "2017-09-26 14:05:46", "2018-02-27 23:12:03", "Bad condition" },
	{ 13, 11,  8,      "system1", "DE", "08 yy", "2017-12-20 14:05:17", "2018-03-07 20:35:19", "Bad condition" },
	{ 14, 10,  6,      "system2", "IN", "66 xm", "2017-10-19 02:54:52", "2018-03-22 23:48:15",          "None" },
	{ 15,  6, 11,      "system3", "IE", "24 ak", "2017-12-18 19:21:11", "2018-02-27 02:37:16",          "None" }
};

struct T_engineer_skills
engineer_skills[] = {
	{ 10, 2 },
	{ 10, 1 },
	{ 15, 1 },
	{  6, 1 },
	{ 13, 1 },
	{  6, 3 },
	{ 13, 2 },
	{  7, 3 },
	{  5, 2 },
	{  8, 3 },
	{ 15, 3 },
	{  5, 1 },
	{  9, 3 },
	{  3, 1 },
	{ 11, 2 },
	{ 12, 2 },
	{  2, 2 },
	{ 10, 1 },
	{  8, 1 },
	{  4, 1 }
};

struct T_engineer_visits
engineer_visits[] = {
	{  1,  8,  8, 13,  "Waiting", "1978-10-12 23:14:40", "1988-01-07 06:41:51", "None" },
	{  2,  7, 15, 13,   "Return", "1980-05-02 23:31:18", "1990-08-30 22:44:16", "None" },
	{  3,  7, 15,  4,  "Waiting", "2010-02-23 18:16:23", "1982-05-13 02:08:41", "None" },
	{  4, 12, 12, 13,    "Fixed", "1996-11-07 05:31:35", "1973-09-12 07:06:54", "None" },
	{  5,  2,  4, 12,    "Fixed", "1994-07-27 22:35:48", "2008-03-24 22:18:47", "None" },
	{  6,  4, 15, 11,    "Fixed", "1984-07-14 22:47:51", "2010-07-05 18:36:22", "None" },
	{  7,  7, 15, 14, "Reported", "1996-07-06 23:59:49", "2012-11-27 06:26:01", "None" },
	{  8,  6, 15,  2,  "Waiting", "1985-08-26 01:02:49", "1971-03-29 23:46:30", "None" },
	{  9,  7, 15, 12,  "Waiting", "1991-05-02 01:39:59", "1970-08-01 15:35:51", "None" },
	{ 10, 14, 10,  2,    "Fixed", "1996-07-12 22:38:46", "1970-03-25 14:44:29", "None" },
	{ 11,  9,  6,  3,    "Fixed", "1975-04-06 11:09:23", "2000-01-27 09:33:10", "None" },
	{ 12,  2,  1, 13,   "Return", "2006-03-31 20:03:10", "2013-09-29 20:50:24", "None" },
	{ 13,  4, 10,  8,    "Fixed", "2015-07-05 21:37:55", "1988-10-20 12:02:00", "None" },
	{ 14,  9,  4, 13,   "Return", "1997-06-23 17:45:21", "1980-12-19 08:30:46", "None" },
	{ 15,  4, 11, 10, "Reported", "1970-07-19 19:21:32", "2007-11-12 04:24:01", "None" }
};

struct T_fault_log
fault_log[] = {
	{  1,  3, 14, "2018-03-21 04:25:00", "system error", "None" },
	{  2,  7,  4, "2018-03-13 09:43:05", "system error", "None" },
	{  3,  6,  9, "2018-02-24 09:28:20", "system error", "None" },
	{  4,  5, 13, "2018-02-28 02:07:36", "failed parts", "None" },
	{  5,  9, 11, "2018-03-02 03:14:46", "system error", "None" },
	{  6,  8,  8, "2018-02-28 20:15:25", "failed parts", "None" },
	{  7,  5, 14, "2018-03-05 09:44:08", "system error", "None" },
	{  8, 12, 10, "2018-03-19 04:24:18", "failed parts", "None" },
	{  9,  3,  5, "2018-03-06 15:52:54", "system error", "None" },
	{ 10,  2,  9, "2018-03-03 10:41:52", "failed parts", "None" },
	{ 11, 15, 12, "2018-03-21 15:02:17", "failed parts", "None" },
	{ 12,  8,  8, "2018-03-10 07:08:34", "system error", "None" },
	{ 13,  3, 13, "2018-03-11 14:00:39", "system error", "None" },
	{ 14,  3, 11, "2018-02-27 11:34:20", "failed parts", "None" },
	{ 15, 12, 13, "2018-03-01 08:52:58", "system error", "None" }
};

struct T_fault_log_parts
fault_log_parts[] = {
	{ 12,  3, "Reported" },
	{  7,  4, "Reported" },
	{  1,  9,   "Return" },
	{  1, 14,    "Fixed" },
	{  6,  4,  "Waiting" },
	{ 14,  8,  "Waiting" },
	{  1, 10,    "Fixed" },
	{  3,  8,   "Return" },
	{ 11,  2, "Reported" },
	{  3, 11,    "Fixed" },
	{ 11,  8, "Reported" },
	{  4, 14,  "Waiting" },
	{ 13, 15,    "Fixed" },
	{ 13,  1,    "Fixed" },
	{  4,  6, "Reported" }
};

struct T_maintenance_contracts
maintenance_contracts[] = {
	{  1, 15, "2017-09-13 11:51:29", "2018-03-16 21:21:50", "None" },
	{  2,  9, "2017-12-18 11:43:16", "2018-03-22 06:00:37", "None" },
	{  3, 11, "2017-05-06 02:32:19", "2018-03-20 14:02:54", "None" },
	{  4, 13, "2018-01-24 00:06:30", "2018-03-02 16:12:23", "None" },
	{  5,  4, "2017-10-28 05:13:21", "2018-02-27 17:36:59", "None" },
	{  6,  7, "2018-03-07 10:59:11", "2018-03-14 10:17:43", "None" },
	{  7, 13, "2017-09-01 05:34:02", "2018-02-27 05:03:22", "None" },
	{  8,  8, "2017-11-23 11:26:12", "2018-03-02 22:26:54", "None" },
	{  9,  6, "2017-04-21 00:03:07", "2018-03-07 19:30:50", "None" },
	{ 10,  6, "2017-06-14 01:46:59", "2018-03-09 10:40:10", "None" },
	{ 11, 15, "2017-05-04 13:39:18", "2018-03-14 20:21:10", "None" },
	{ 12,  6, "2017-12-06 20:09:39", "2018-03-06 13:47:14", "None" },
	{ 13, 14, "2017-07-23 05:07:37", "2018-03-05 21:24:36", "None" },
	{ 14, 10, "2017-09-19 17:57:17", "2018-03-15 06:45:00", "None" },
	{ 15,  6, "2017-05-14 11:57:50", "2018-03-23 17:29:21", "None" }
};

struct T_maintenance_engineers
maintenance_engineers[] = {
	{  1, 14,      "Etha", "Reinger", "Skilled" },
	{  2,  2,   "Clemens",     "Orn",    "None" },
	{  3,  6,   "Samanta",   "Hauck",    "None" },
	{  4,  3,    "Lorine",   "Morar",    "None" },
	{  5, 15,    "Manley",   "Grady",    "None" },
	{  6,  1,  "Courtney",   "Adams",    "None" },
	{  7, 11,     "Josie",  "Harvey", "Skilled" },
	{  8,  9,    "Nellie",  "Hirthe",    "None" },
	{  9,  4,     "Brian",   "Stamm",    "None" },
	{ 10,  4,     "Naomi",   "Price",    "None" },
	{ 11,  7,    "Cullen",   "Kunde",    "None" },
	{ 12, 10,    "Alexys", "Simonis",    "None" },
	{ 13,  2,    "Weston",    "Hahn",    "None" },
	{ 14, 11,     "Jules", "Goldner",    "None" },
	{ 15,  3, "Archibald", "Streich",    "None" }
};

struct T_part_faults
part_faults[] = {
	{  1, 1, "PW",      "Package Wrong", "None" },
	{  2, 1, "PW",      "Package Wrong", "None" },
	{  3, 3, "TW",    "Top Parts Wrong", "None" },
	{  4, 1, "PW",      "Package Wrong", "None" },
	{  5, 1, "MW", "Medium Scale Wrong", "None" },
	{  6, 2, "PW",      "Package Wrong", "None" },
	{  7, 1, "PW",      "Package Wrong", "None" },
	{  8, 3, "TW",    "Top Parts Wrong", "None" },
	{  9, 3, "PW",      "Package Wrong", "None" },
	{ 10, 1, "PW",      "Package Wrong", "None" },
	{ 11, 3, "MW", "Medium Scale Wrong", "None" },
	{ 12, 2, "MW", "Medium Scale Wrong", "None" },
	{ 13, 3, "TW",    "Top Parts Wrong", "None" },
	{ 14, 1, "TW",    "Top Parts Wrong", "None" },
	{ 15, 3, "MW", "Medium Scale Wrong", "None" }
};

struct T_parts
parts[] = {
	{ 1,     "top", "0", "4", "None" },
	{ 2,  "middle", "1", "9", "None" },
	{ 3, "package", "1", "9", "None" }
};

struct T_skills
skills[] = {
	{ 1, "ELEC", "Electrical" },
	{ 2, "MECH", "Mechanical" },
	{ 3,   "TV",  "TV, Video" }
};

struct T_skills_required_to_fix
skills_required_to_fix[] = {
	{  3, 2 },
	{ 12, 3 },
	{  6, 1 },
	{ 15, 3 },
	{  1, 3 },
	{  1, 1 },
	{  5, 3 },
	{ 13, 2 },
	{ 14, 3 },
	{ 10, 2 },
	{  2, 1 },
	{  7, 2 },
	{  1, 3 },
	{ 15, 3 },
	{ 15, 2 }
};

struct T_staff
staff[] = {
	{  1,  "Audreanne", "1", "Manager" },
	{  2,   "Berneice", "1", "Manager" },
	{  3,     "Helena", "1",    "None" },
	{  4,     "Edmond", "0",    "None" },
	{  5,      "Leola", "1", "Manager" },
	{  6,     "Rodger", "1",    "None" },
	{  7,      "Kadin", "1",    "None" },
	{  8, "Christophe", "0",   "Woker" },
	{  9,    "Bernice", "0",    "None" },
	{ 10,      "Jayda", "1",    "None" },
	{ 11,      "Estel", "0",    "None" },
	{ 12,       "Oren", "1",    "None" },
	{ 13,     "Howell", "0",    "None" },
	{ 14,      "Cyrus", "0",    "None" },
	{ 15,     "Jeffry", "0",    "None" }
};

struct T_third_party_companies
third_party_companies[] = {
	{  1, "Maintenance Contractor",               "Langworth-Funk",                "615 Jacobs Mews",                "Uganda" },
	{  2, "Maintenance Contractor",              "McDermott Group",      "873 Conrad Creek Apt. 286",                 "China" },
	{  3, "Maintenance Contractor",              "Schuppe-Carroll",            "066 Bechtelar Ridge",  "United Arab Emirates" },
	{  4, "Maintenance Contractor",               "Dooley-Langosh",  "9576 Jacynthe Point Suite 747",               "Albania" },
	{  5,               "Supplier",              "Dooley and Sons", "84631 Rosenbaum Well Suite 727", "Palestinian Territory" },
	{  6,               "Supplier",  "Grimes, Mosciski and Renner",   "9405 Leffler Hollow Apt. 753",              "Kiribati" },
	{  7, "Maintenance Contractor",                "Weimann-Swift",     "016 Kaitlyn Fall Suite 236",                 "Egypt" },
	{  8, "Maintenance Contractor",            "Glover-Vandervort",    "51515 Conn Corner Suite 696",              "Ethiopia" },
	{  9, "Maintenance Contractor",    "Wisoky, Toy and Bashirian",               "605 D'Amore Oval",                  "Iran" },
	{ 10, "Maintenance Contractor",                    "White Ltd",                "680 Hammes Ways",                  "Niue" },
	{ 11, "Maintenance Contractor", "Kuvalis, Boehm and Hettinger", "99335 Cummings Square Apt. 723",               "Somalia" },
	{ 12, "Maintenance Contractor",       "Dicki, Erdman and Kris",   "60743 Dion Harbors Suite 825",        "Western Sahara" },
	{ 13,               "Supplier",            "Greenholt-D'Amore",             "1755 Schaefer Road",              "Slovenia" },
	{ 14,               "Supplier",                    "Purdy Inc",               "846 Casper Route",          "Saint Helena" },
	{ 15, "Maintenance Contractor",        "Rau, Ullrich and King",        "5147 Raul Burg Apt. 623",               "Armenia" }
};

#endif