/*
Database "insurance_and_eClaims" contains tables:
	claim_headers
	claims_documents
	claims_processing
	claims_processing_stages
	customers
	policies
	staff
*/

#ifndef INSURANCE_AND_ECLAIMS
#define INSURANCE_AND_ECLAIMS

struct T_claim_headers {
	double claim_header_id;
	char claim_status_code[12];
	char claim_type_code[22];
	double policy_id;	// --> policies.policy_id
	char date_of_claim[20];
	char date_of_settlement[20];
	double amount_claimed;
	double amount_piad;
};

struct T_claims_documents {
	double claim_id;	// --> claim_headers.claim_header_id
	char document_type_code[9];
	double created_by_staff_id;	// --> staff.staff_id
	double created_date;
};

struct T_claims_processing {
	double claim_processing_id;
	double claim_id;	// --> claim_headers.claim_header_id
	char claim_outcome_code[12];
	double claim_stage_id;
	double staff_id;	// --> staff.staff_id
};

struct T_claims_processing_stages {
	double claim_stage_id;
	double next_claim_stage_id;
	char claim_status_name[6];
	char claim_status_description[17];
};

struct T_customers {
	double customer_id;
	char customer_details[22];
};

struct T_policies {
	double policy_id;
	double customer_id;	// --> customers.customer_id
	char policy_type_code[13];
	char start_date[20];
	char end_date[20];
};

struct T_staff {
	double staff_id;
	char staff_details[11];
};

struct T_claim_headers
claim_headers[] = {
	{ 15,     "Settled",     "Handphone Subsidy", 518, "2016-05-31 06:07:11", "2018-02-23 03:46:38", 349.15, 582.03 },
	{ 24,    "Disputed",           "Child Birth", 518, "2016-12-30 21:43:21", "2017-10-08 21:43:14", 318.16,  309.2 },
	{ 27,    "Disputed", "Overtime Meal Subsidy", 518, "2017-05-01 13:34:43", "2017-11-16 04:06:05", 362.71, 132.97 },
	{ 28,    "Disputed",           "Child Birth", 287, "2016-10-01 00:40:00", "2017-10-20 02:24:21", 789.19, 113.86 },
	{ 34,    "Disputed",     "Handphone Subsidy", 518, "2016-04-10 01:36:18", "2017-10-17 07:02:17", 270.49, 643.82 },
	{ 39, "In Progress",     "Handphone Subsidy", 518, "2016-09-17 05:05:07", "2018-01-07 05:28:53", 616.12,  773.5 },
	{ 45, "In Progress",     "Handphone Subsidy", 507, "2016-06-12 23:04:58", "2018-01-16 06:35:15", 676.81, 289.09 },
	{ 56, "In Progress",     "Handphone Subsidy", 626, "2016-04-09 03:04:29", "2017-11-21 09:06:04", 818.15,    826 },
	{ 62,    "Disputed",           "Child Birth", 626, "2017-07-05 02:54:30", "2018-03-08 13:00:23", 182.79,  558.7 },
	{ 69, "In Progress", "Overtime Meal Subsidy", 626, "2016-12-17 08:28:16", "2017-12-20 09:58:14", 867.57, 133.72 },
	{ 72,    "Disputed", "Overtime Meal Subsidy", 626, "2017-07-09 17:06:09", "2017-12-06 15:01:14", 672.06, 227.84 },
	{ 73,     "Settled", "Overtime Meal Subsidy", 626, "2016-11-15 13:12:02", "2018-01-21 05:51:01", 228.45, 794.63 },
	{ 81, "In Progress", "Overtime Meal Subsidy", 628, "2016-09-26 04:03:48", "2017-12-20 19:06:12", 783.42, 779.59 },
	{ 82,     "Settled", "Overtime Meal Subsidy", 125, "2016-09-29 02:42:22", "2017-12-06 17:10:03", 756.27, 612.74 },
	{ 90,     "Settled",           "Child Birth", 125, "2016-09-28 18:53:22", "2017-10-17 22:03:17", 425.98, 536.99 }
};

struct T_claims_documents
claims_documents[] = {
	{ 24, "Document", 718, 8 },
	{ 27, "Document", 986, 6 },
	{ 27,  "Medical", 427, 8 },
	{ 39, "Document", 803, 2 },
	{ 45,  "Medical", 687, 9 },
	{ 62, "Document", 673, 3 },
	{ 62,  "Medical", 771, 3 },
	{ 62,    "Photo", 771, 6 },
	{ 69, "Document", 718, 1 },
	{ 73, "Document", 986, 2 },
	{ 73,  "Medical", 771, 9 },
	{ 81,    "Photo", 589, 7 },
	{ 82,  "Medical", 803, 9 },
	{ 90,    "Photo", 735, 1 }
};

struct T_claims_processing
claims_processing[] = {
	{ 118, 28, "In progress", 1, 771 },
	{ 145, 62, "In progress", 1, 589 },
	{ 213, 27, "In progress", 1, 589 },
	{ 221, 45,    "Disputed", 1, 427 },
	{ 242, 15, "In progress", 3, 673 },
	{ 243, 15,     "Settled", 1, 687 },
	{ 309, 34,    "Disputed", 3, 771 },
	{ 342, 15, "In progress", 3, 673 },
	{ 480, 45, "In progress", 1, 822 },
	{ 659, 62,     "Settled", 3, 510 },
	{ 686, 27,     "Settled", 1, 718 },
	{ 720, 24, "In progress", 1, 822 },
	{ 818, 90,    "Disputed", 3, 986 },
	{ 833, 81,    "Disputed", 3, 822 },
	{ 898, 24, "In progress", 1, 718 }
};

struct T_claims_processing_stages
claims_processing_stages[] = {
	{ 1, 1,  "Open", "Open a new claim" },
	{ 3, 1, "Close",    "Close a claim" }
};

struct T_customers
customers[] = {
	{ 252,     "America Jaskolski" },
	{ 263,      "Ellsworth Paucek" },
	{ 334,     "Mrs. Hanna Willms" },
	{ 380,        "Dr. Diana Rath" },
	{ 430,        "Selena Gerhold" },
	{ 435,    "Lauriane Ferry PhD" },
	{ 520,        "Sydnie Friesen" },
	{ 588,          "Dayana Robel" },
	{ 593,  "Mr. Edwardo Blanda I" },
	{ 799,     "Augustine Kerluke" },
	{ 808,       "Buddy Marquardt" },
	{ 810,  "Mr. Randal Lynch III" },
	{ 857,    "Mrs. Liza Heller V" },
	{ 858, "Mrs. Lilly Graham III" },
	{ 994, "Miss Felicita Reichel" }
};

struct T_policies
policies[] = {
	{ 125, 808,       "Deputy", "2018-02-10 08:56:30", "2018-03-18 09:17:26" },
	{ 151, 380, "Jurisdiction", "2017-12-20 06:02:31", "2017-09-16 22:04:13" },
	{ 287, 334, "Jurisdiction", "2017-03-16 18:16:52", "2017-11-24 06:36:51" },
	{ 299, 857,    "Uniformed", "2018-03-13 12:30:19", "2018-01-22 05:24:10" },
	{ 507, 858,    "Uniformed", "2017-03-19 03:11:19", "2017-11-01 00:41:27" },
	{ 518, 808,    "Uniformed", "2016-05-11 14:56:17", "2018-03-15 05:02:00" },
	{ 626, 435,    "Uniformed", "2016-05-14 19:09:36", "2018-01-18 06:17:36" },
	{ 628, 430,       "Deputy", "2018-09-19 17:22:07", "2018-01-01 23:58:06" },
	{ 703, 380,       "Deputy", "2016-06-04 00:10:01", "2018-01-19 22:45:33" },
	{ 708, 252,       "Normal", "2018-07-21 10:36:53", "2018-03-07 13:52:47" },
	{ 768, 588,    "Uniformed", "2017-01-01 01:48:08", "2017-09-30 03:16:49" },
	{ 773, 334,    "Uniformed", "2017-02-11 01:53:11", "2018-01-15 03:23:05" },
	{ 780, 435,    "Uniformed", "2016-08-02 01:46:25", "2018-03-03 18:36:22" },
	{ 801, 380,    "Uniformed", "2018-09-05 22:15:23", "2018-03-17 10:16:59" },
	{ 936, 994, "Jurisdiction", "2016-07-23 04:08:35", "2017-10-07 08:29:25" }
};

struct T_staff
staff[] = {
	{ 406,    "Clifton" },
	{ 427,    "Cathryn" },
	{ 510,       "Kaci" },
	{ 589, "Margaretta" },
	{ 634,     "Maryse" },
	{ 673,      "Roman" },
	{ 687,     "Eladio" },
	{ 718,     "Vernie" },
	{ 735,      "Evans" },
	{ 771,         "Bo" },
	{ 803,    "Zachery" },
	{ 822,     "Julius" },
	{ 833,      "Allen" },
	{ 986,  "Alexander" },
	{ 987,     "Gideon" }
};

#endif