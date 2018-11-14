/*
Database "e_government" contains tables:
	addresses
	forms
	individuals
	organization_contact_individuals
	organizations
	parties
	party_addresses
	party_forms
	party_services
	services
*/

#ifndef E_GOVERNMENT
#define E_GOVERNMENT

struct T_addresses {
	double address_id;
	char line_1_number_building[34];
	char town_city[17];
	char zip_postcode[4];
	char state_province_county[14];
	char country[4];
};

struct T_forms {
	double form_id;
	char form_type_code[8];
	double service_id;	// --> services.service_id
	char form_number[5];
	char form_name[21];
	char form_description[29];
};

struct T_individuals {
	double individual_id;
	char individual_first_name[10];
	char individual_middle_name[9];
	char inidividual_phone[21];
	char individual_email[30];
	char individual_address[31];
	char individual_last_name[11];
};

struct T_organization_contact_individuals {
	double individual_id;	// --> individuals.individual_id
	double organization_id;	// --> organizations.organization_id
	char date_contact_from[20];
	char date_contact_to[20];
};

struct T_organizations {
	double organization_id;
	char date_formed[20];
	char organization_name[18];
	char uk_vat_number[5];
};

struct T_parties {
	double party_id;
	char payment_method_code[13];
	char party_phone[21];
	char party_email[27];
};

struct T_party_addresses {
	double party_id;	// --> parties.party_id
	double address_id;	// --> addresses.address_id
	char date_address_from[20];
	char address_type_code[10];
	char date_address_to[20];
};

struct T_party_forms {
	double party_id;	// --> parties.party_id
	double form_id;	// --> forms.form_id
	char date_completion_started[20];
	char form_status_code[20];
	char date_fully_completed[20];
};

struct T_party_services {
	double booking_id;
	double customer_id;	// --> parties.party_id
	double service_id;	// --> services.service_id
	char service_datetime[20];
	char booking_made_date[20];
};

struct T_services {
	double service_id;
	char service_type_code[10];
	char service_name[10];
	char service_descriptio[10];
};

struct T_addresses
addresses[] = {
	{  1,               "25518 Ortiz Centers",       "West Stacy", "193", "NorthCarolina", "USA" },
	{  2,              "033 Stracke Parkways",     "Lake Meaghan", "227",      "Colorado", "USA" },
	{  3,        "269 Flatley Port Suite 062",      "Breanneberg", "527",  "NewHampshire", "USA" },
	{  4,                 "90928 Garret Mall",         "New Gabe", "993",      "Missouri", "USA" },
	{  5,             "0399 Colby Extensions",      "Carrollland", "250",      "Kentucky", "USA" },
	{  6,     "538 Schaefer Highway Apt. 472",  "East Lamonttown", "202",     "Louisiana", "USA" },
	{  7, "34580 Mireille Crescent Suite 776",       "Cletusbury", "215",       "Georgia", "USA" },
	{  8,     "6862 Kaitlyn Knolls Suite 309",       "New Katlyn", "021",  "Pennsylvania", "USA" },
	{  9,                  "90236 Kunze Pass",     "Dangelohaven", "259",     "Louisiana", "USA" },
	{ 10,             "51124 Marquardt Forks",      "Robertsberg", "023",       "NewYork", "USA" },
	{ 11,          "3986 Bergstrom Stravenue",       "Lake Taryn", "332",      "Michigan", "USA" },
	{ 12,                 "43686 Kihn Corner",        "Feilmouth", "460",       "Vermont", "USA" },
	{ 13,                 "29446 Hauck Ridge", "Lake Gertrudeton", "603",       "Montana", "USA" },
	{ 14,      "326 Emile Turnpike Suite 964",       "East Clair", "515",       "Georgia", "USA" },
	{ 15,                  "266 Feeney Falls", "West Brandynland", "320",      "Arkansas", "USA" }
};

struct T_forms
forms[] = {
	{ 1,   "Basic", 13, "8069",      "SSN Application",     "Form for SSN Application" },
	{ 2, "Complex",  9, "2675", "Marriage Certificate",         "Marriage Certificate" },
	{ 3, "Complex",  2, "9837", "Divorce  Certificate",         "Divorce  Certificate" },
	{ 4, "Complex", 14, "9173",          "Moving Form",        "Form for moving house" },
	{ 5,   "Basic",  3, "6673",  "Account Application", "Form for Account Application" },
	{ 6, "Complex",  7, "9130",      "Property Change",     "Form for Property Change" }
};

struct T_individuals
individuals[] = {
	{  1,     "Oscar",    "Hosea",       "1-925-696-5232",      "amie.okuneva@example.org",                 "6956 Lia Plaza",     "Maggio" },
	{  2,  "Geovanny",  "Antonia",     "075.012.6775x409",     "jamey.effertz@example.net",           "69578 Baylee Prairie",    "Kerluke" },
	{  3,    "Casper", "Mitchell",       "1-818-062-2837", "brandon.hermiston@example.com",              "4555 Hane Orchard",      "Kutch" },
	{  4,       "Guy",    "Erick", "1-014-109-1968x40778",     "reinger.leola@example.net",   "919 Cummerata Burgs Apt. 063",     "Wunsch" },
	{  5,    "Matteo",     "Rene",         "634.660.8469",     "strosin.conor@example.org",             "13223 Torphy Point",   "Schuster" },
	{  6,     "Nella",   "Tommie",         "892.154.8492",    "austyn.effertz@example.org",               "640 Johns Branch",  "Kertzmann" },
	{  7,   "Jeffery",  "Alberto",    "317.382.4425x7924",          "august78@example.net",      "384 Carter Flat Suite 896",     "Jacobs" },
	{  8,     "Shany",  "Colleen",   "(030)939-8437x6141",        "mbahringer@example.com",      "407 Sofia Knoll Suite 591",    "D'Amore" },
	{  9,    "Allene",    "Erwin",       "1-797-739-0925",     "autumn.fisher@example.net", "3889 Theodore Radial Suite 795", "Rutherford" },
	{ 10, "Lafayette",    "Raoul",    "396.348.9925x9122",      "hickle.ewell@example.com",     "3203 Hermann Port Apt. 429",        "Rau" },
	{ 11,  "Daniella",    "Jamel",        "(121)788-2928",          "ericka97@example.net",     "4643 Ismael Pines Apt. 899",     "Rogahn" },
	{ 12,     "Daron",   "Howard",     "+94(0)3793557310",     "allison.lemke@example.org",               "104 Bernier Loop",       "Hand" },
	{ 13,    "Ressie",  "Alysson",   "1-727-057-0382x999",          "delpha81@example.com",  "5114 Jakubowski Port Apt. 758",    "Bradtke" },
	{ 14,  "Katarina",    "Lacey",        "(348)944-9700",           "zlehner@example.net", "16688 Powlowski Views Apt. 341",     "Dooley" },
	{ 15,    "Jaylen",   "Jewell",        "(468)679-4017",   "shanahan.julien@example.net",    "06409 Beatty Glen Suite 000",   "O'Conner" }
};

struct T_organization_contact_individuals
organization_contact_individuals[] = {
	{ 13, 1, "2016-08-16 22:09:11", "2018-03-25 10:27:18" },
	{ 11, 1, "2017-03-02 00:00:16", "2018-03-06 05:39:43" },
	{ 10, 3, "2016-08-23 03:24:24", "2018-03-12 07:55:28" },
	{ 10, 4, "2017-08-08 12:05:25", "2018-03-04 09:30:20" },
	{ 13, 3, "2016-04-21 03:55:35", "2018-03-06 21:22:49" },
	{  5, 4, "2016-08-27 16:55:59", "2018-03-18 05:47:36" },
	{  9, 1, "2017-01-06 09:38:54", "2018-02-27 09:20:42" },
	{ 11, 5, "2017-09-14 08:24:22", "2018-03-24 16:54:36" },
	{ 13, 2, "2016-09-16 13:53:24", "2018-03-18 16:33:16" },
	{  6, 3, "2017-05-24 11:38:02", "2018-03-24 03:43:00" },
	{  6, 5, "2016-05-15 13:16:35", "2018-03-05 19:29:24" },
	{  7, 2, "2016-11-24 03:57:30", "2018-03-07 16:40:29" },
	{ 14, 5, "2017-02-19 08:51:41", "2018-03-23 22:06:48" },
	{  9, 2, "2016-04-30 14:39:31", "2018-03-20 00:33:08" },
	{  8, 3, "2016-07-26 09:08:15", "2018-03-02 03:50:51" }
};

struct T_organizations
organizations[] = {
	{ 1, "2016-08-24 23:52:48",      "Labour Party", "2157" },
	{ 2, "2016-10-01 12:42:01",       "Plaid Cymru", "7459" },
	{ 3, "2016-10-09 07:22:53",      "Conservative", "1211" },
	{ 4, "2017-04-06 23:59:16", "Liberal Democrats", "7237" },
	{ 5, "2016-07-28 01:45:10",       "Green Party", "4271" }
};

struct T_parties
parties[] = {
	{  1,       "Cheque",          "05374656172",       "enrico09@example.com" },
	{  2,  "Credit Card", "1-525-947-7867x51521",   "brakus.aliya@example.com" },
	{  3,       "Cheque",  "1-606-232-3728x3568",        "frida57@example.org" },
	{  4,         "Cash",         "019-302-5166",  "wuckert.misty@example.com" },
	{  5,       "Cheque",         "529-074-5348",   "alanna.boehm@example.net" },
	{  6,  "Credit Card", "1-950-874-1693x65923", "daniel.charity@example.net" },
	{  7, "Direct Debit",     "112-477-4433x137",      "lucinda83@example.org" },
	{  8,         "Cash",  "(919)169-1514x55820",    "erick.mills@example.com" },
	{  9,         "Cash",          "04177934231",         "evie97@example.org" },
	{ 10,  "Credit Card",   "(211)528-0733x8063",   "hilll.elyssa@example.net" },
	{ 11,  "Credit Card",       "1-985-957-5462",    "jamir.hyatt@example.net" },
	{ 12,       "Cheque",       "1-386-339-9244",         "eden67@example.net" },
	{ 13, "Direct Debit",         "186-726-9855",      "ora.hyatt@example.net" },
	{ 14,         "Cash",   "971-607-7001x08626",         "rhauck@example.org" },
	{ 15,         "Cash",         "231.232.0099",    "noe.ziemann@example.org" }
};

struct T_party_addresses
party_addresses[] = {
	{ 10,  8, "2016-04-08 22:40:02", "Residence", "2018-02-28 23:14:41" },
	{ 15,  5, "2016-05-20 23:22:06",   "Billing", "2018-01-29 16:48:01" },
	{  4,  4, "2016-05-14 15:13:30",  "Delivery", "2018-02-25 19:39:16" },
	{  4, 10, "2017-02-21 12:12:50", "Residence", "2018-03-11 12:12:52" },
	{  5, 10, "2016-04-04 03:57:02",   "Billing", "2018-02-11 06:11:11" },
	{ 11,  2, "2016-07-21 08:39:50",   "Billing", "2018-03-03 22:17:09" },
	{  3,  2, "2016-06-09 00:48:07",   "Billing", "2018-03-11 00:08:16" },
	{  5,  7, "2016-09-05 11:53:36",   "Billing", "2018-03-07 13:28:44" },
	{  5,  4, "2016-05-24 08:11:04", "Residence", "2018-03-04 08:34:45" },
	{  8,  7, "2017-02-07 02:51:33", "Residence", "2018-02-27 09:21:41" },
	{ 15,  2, "2016-09-23 19:59:54",   "Billing", "2018-03-01 13:51:27" },
	{ 10,  1, "2016-11-02 02:06:07",  "Delivery", "2018-02-02 00:37:45" },
	{ 11,  5, "2017-01-07 12:02:39", "Residence", "2018-02-09 08:47:26" },
	{  6,  9, "2016-12-21 03:54:15",  "Delivery", "2018-02-25 07:34:22" },
	{  5, 13, "2016-04-15 03:54:06",   "Billing", "2018-03-23 17:52:47" }
};

struct T_party_forms
party_forms[] = {
	{  2, 4, "2017-12-17 11:29:47",           "Completed", "2018-02-11 16:46:10" },
	{ 15, 4, "2017-12-16 15:25:48", "Partially Completed", "2018-02-18 16:09:04" },
	{  8, 5, "2017-12-09 21:26:11", "Partially Completed", "2018-02-05 16:16:58" },
	{  6, 2, "2017-12-04 16:57:31", "Partially Completed", "2018-01-28 22:29:07" },
	{  7, 2, "2017-11-30 18:49:37",         "Not Started", "2018-02-21 17:59:08" },
	{ 11, 5, "2017-12-20 01:10:33",         "Not Started", "2018-02-10 14:07:46" },
	{ 11, 3, "2017-12-18 01:32:49",         "Not Started", "2018-02-04 05:57:01" },
	{  8, 6, "2017-12-07 18:17:01",    "Work In Progress", "2018-02-15 23:09:42" },
	{  5, 6, "2017-12-05 19:48:45", "Partially Completed", "2018-01-30 09:33:37" },
	{  7, 6, "2017-11-29 03:11:38",         "Not Started", "2018-02-01 10:26:47" },
	{ 13, 3, "2017-12-04 18:20:10",    "Work In Progress", "2018-01-31 17:09:32" },
	{  2, 5, "2017-11-26 09:09:29",         "Not Started", "2018-02-09 09:49:09" },
	{  9, 2, "2017-11-27 11:57:03",           "Completed", "2018-02-15 13:15:25" }
};

struct T_party_services
party_services[] = {
	{  1, 10, 12, "2018-03-10 22:43:12", "2018-03-23 23:56:51" },
	{  2, 14, 11, "2018-03-05 15:06:23", "2018-03-25 11:08:29" },
	{  3,  4,  7, "2018-03-08 10:39:29", "2018-03-24 11:09:52" },
	{  4, 13,  3, "2018-03-08 23:52:44", "2018-03-25 12:56:09" },
	{  5,  2,  6, "2018-03-17 18:35:26", "2018-03-25 02:57:32" },
	{  6, 14,  6, "2018-03-17 08:16:30", "2018-03-24 06:50:50" },
	{  7,  6, 12, "2018-03-15 09:48:27", "2018-03-25 11:52:29" },
	{  8,  3,  6, "2018-03-01 18:31:32", "2018-03-24 07:55:33" },
	{  9,  5,  7, "2018-03-05 13:02:22", "2018-03-24 10:17:36" },
	{ 10, 15, 13, "2018-02-28 16:29:04", "2018-03-24 09:20:46" },
	{ 11, 13, 12, "2018-03-09 07:27:30", "2018-03-25 15:09:54" },
	{ 12,  9,  1, "2018-03-19 14:38:29", "2018-03-24 18:05:07" },
	{ 13,  3, 11, "2018-03-14 18:53:35", "2018-03-24 12:21:20" },
	{ 14,  3,  5, "2018-03-18 17:53:02", "2018-03-24 22:12:30" },
	{ 15, 12,  6, "2018-03-01 04:41:58", "2018-03-25 16:47:47" }
};

struct T_services
services[] = {
	{  1, "Education", "Education", "Education" },
	{  2,   "Welfare",    "Health",   "Welfare" },
	{  3, "Education", "Education",    "Health" },
	{  4,   "Welfare", "Education", "Education" },
	{  5, "Education", "Education",    "Health" },
	{  6,   "Welfare",   "Welfare",    "Health" },
	{  7,   "Welfare",   "Welfare",   "Welfare" },
	{  8, "Education", "Education",   "Welfare" },
	{  9, "Education",    "Health", "Education" },
	{ 10, "Education",    "Health",   "Welfare" },
	{ 11,   "Welfare", "Education",    "Health" },
	{ 12, "Education", "Education",    "Health" },
	{ 13,    "Health",   "Welfare", "Education" },
	{ 14, "Education", "Education",    "Health" },
	{ 15,   "Welfare",    "Health", "Education" }
};

#endif