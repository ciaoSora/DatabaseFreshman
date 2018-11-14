/*
Database "insurance_fnol" contains tables:
	available_policies
	claims
	customers
	customers_policies
	first_notification_of_loss
	services
	settlements
*/

#ifndef INSURANCE_FNOL
#define INSURANCE_FNOL

struct T_available_policies {
	double policy_id;
	char policy_type_code[19];
	char customer_phone[21];
};

struct T_claims {
	double claim_id;
	double fnol_id;	// --> first_notification_of_loss.fnol_id
	char effective_date[11];
};

struct T_customers {
	double customer_id;
	char customer_name[22];
};

struct T_customers_policies {
	double customer_id;	// --> customers.customer_id
	double policy_id;	// --> available_policies.policy_id
	char date_opened[11];
	char date_closed[11];
};

struct T_first_notification_of_loss {
	double fnol_id;
	double customer_id;	// --> customers_policies.customer_id
	double policy_id;	// --> customers_policies.policy_id
	double service_id;	// --> services.service_id
};

struct T_services {
	double service_id;
	char service_name[23];
};

struct T_settlements {
	double settlement_id;
	double claim_id;	// --> claims.claim_id
	char effective_date[11];
	double settlement_amount;
};

struct T_available_policies
available_policies[] = {
	{ 246,     "Life Insurance",     "+16(2)5838999222" },
	{ 257, "Property Insurance",         "242.763.9214" },
	{ 300, "Property Insurance", "1-416-503-7735x94204" },
	{ 301, "Property Insurance",        "(777)537-7792" },
	{ 346, "Mortgage Insurance",   "1-446-940-9907x257" },
	{ 366, "Mortgage Insurance",  "(379)862-8274x12620" },
	{ 472, "Mortgage Insurance",     "+85(6)1302858396" },
	{ 583,   "Travel Insurance",  "1-797-927-3585x9321" },
	{ 586,     "Life Insurance",     "991.642.6485x822" },
	{ 630, "Property Insurance",     "813.178.8211x557" },
	{ 636,     "Life Insurance",     "889-572-0609x552" },
	{ 751,     "Life Insurance",       "1-138-841-3073" },
	{ 879, "Mortgage Insurance",  "1-381-132-0127x3801" },
	{ 927, "Mortgage Insurance",          "00481937923" },
	{ 993, "Property Insurance",     "405.090.8654x021" }
};

struct T_claims
claims[] = {
	{ 134, 1722, "1973-08-18" },
	{ 145, 1611, "2014-10-19" },
	{ 228,  532, "1975-05-07" },
	{ 309, 2543, "1982-05-03" },
	{ 311, 4226, "1992-02-09" },
	{ 360, 4226, "2006-06-10" },
	{ 428, 4226, "1992-01-05" },
	{ 604, 4323, "2009-02-11" },
	{ 641, 4525, "1985-03-24" },
	{ 717, 4525, "1996-11-29" }
};

struct T_customers
customers[] = {
	{ 194,     "America Jaskolski" },
	{ 214,      "Ellsworth Paucek" },
	{ 256,     "Mrs. Hanna Willms" },
	{ 562,        "Dr. Diana Rath" },
	{ 582,        "Selena Gerhold" },
	{ 641,          "Dayana Robel" },
	{ 682,  "Mr. Edwardo Blanda I" },
	{ 756,  "Mr. Randal Lynch III" },
	{ 805,    "Mrs. Liza Heller V" },
	{ 826, "Mrs. Lilly Graham III" },
	{ 882, "Miss Felicita Reichel" },
	{ 892,        "Sydnie Friesen" },
	{ 923,            "David Ross" },
	{ 956,             "Cai Zhang" },
	{ 996,              "Jay Chou" }
};

struct T_customers_policies
customers_policies[] = {
	{ 214, 257, "2016-11-19", "2018-03-04" },
	{ 214, 301, "2016-04-12", "2018-02-07" },
	{ 256, 583, "2016-07-22", "2018-02-20" },
	{ 562, 346, "2017-01-09", "2018-03-08" },
	{ 562, 583, "2016-06-24", "2018-02-22" },
	{ 582, 586, "2016-04-11", "2018-03-17" },
	{ 641, 366, "2016-07-10", "2018-02-24" },
	{ 641, 472, "2016-07-07", "2018-03-10" },
	{ 682, 583, "2016-11-01", "2018-03-03" },
	{ 826, 630, "2016-11-18", "2018-02-13" },
	{ 892, 927, "2017-01-08", "2018-02-25" },
	{ 996, 366, "2016-10-31", "2018-03-19" },
	{ 996, 879, "2017-01-05", "2018-02-20" },
	{ 996, 993, "2016-07-03", "2018-03-20" }
};

struct T_first_notification_of_loss
first_notification_of_loss[] = {
	{  532, 214, 257, 6 },
	{ 1611, 996, 993, 9 },
	{ 1722, 996, 879, 6 },
	{ 2543, 996, 366, 1 },
	{ 4226, 892, 927, 1 },
	{ 4323, 826, 630, 4 },
	{ 4525, 582, 586, 1 }
};

struct T_services
services[] = {
	{ 1, "New policy application" },
	{ 4,         "Close a policy" },
	{ 6,        "Change a policy" },
	{ 9,       "Upgrade a policy" }
};

struct T_settlements
settlements[] = {
	{ 161, 717, "2009-11-20", 6451.65 },
	{ 176, 641, "1971-06-29", 1588.45 },
	{ 205, 604, "1978-09-09", 9814.39 },
	{ 208, 428, "2003-12-28", 8827.06 },
	{ 393, 360, "2006-04-19", 8013.95 },
	{ 543, 309, "1972-03-02", 2722.67 },
	{ 544, 311, "1973-10-27",  9164.1 },
	{ 604, 228, "2014-12-09", 2138.96 },
	{ 616, 145, "1995-04-02",  3101.3 },
	{ 628, 134, "2001-07-02", 1721.17 }
};

#endif