/*
Database "insurance_policies" contains tables:
	claims
	customer_policies
	customers
	payments
	settlements
*/

#ifndef INSURANCE_POLICIES
#define INSURANCE_POLICIES

struct T_claims {
	double claim_id;
	double policy_id;	// --> customer_policies.policy_id
	char date_claim_made[11];
	char date_claim_settled[11];
	double amount_claimed;
	double amount_settled;
};

struct T_customer_policies {
	double policy_id;
	double customer_id;	// --> customers.customer_id
	char policy_type_code[9];
	char start_date[11];
	char end_date[11];
};

struct T_customers {
	double customer_id;
	char customer_details[22];
};

struct T_payments {
	double payment_id;
	double settlement_id;	// --> settlements.settlement_id
	char payment_method_code[17];
	char date_payment_made[11];
	double amount_payment;
};

struct T_settlements {
	double settlement_id;
	double claim_id;	// --> claims.claim_id
	char date_claim_made[11];
	char date_claim_settled[11];
	double amount_claimed;
	double amount_settled;
	double customer_policy_id;
};

struct T_claims
claims[] = {
	{ 143, 744, "2017-03-11", "2017-11-03", 43884, 1085 },
	{ 423, 552, "2016-08-12", "2018-01-27", 79134, 1724 },
	{ 442, 473, "2017-02-24", "2018-01-21", 70088, 1189 },
	{ 486, 141, "2018-06-14", "2017-12-20", 69696, 1638 },
	{ 546, 744, "2017-05-03", "2017-12-22", 46479, 1091 },
	{ 563, 141, "2016-08-02", "2017-09-04", 41078, 1570 },
	{ 569, 473, "2018-07-15", "2017-11-19", 49743,  930 },
	{ 571, 858, "2017-08-03", "2018-02-18", 89632, 1528 },
	{ 621, 744, "2016-12-18", "2018-01-11", 43708, 1652 },
	{ 761, 473, "2016-08-26", "2017-09-04", 83703, 1372 },
	{ 801, 738, "2017-10-21", "2018-01-05",  3326, 1353 },
	{ 843, 143, "2017-10-14", "2018-02-20", 10209, 1639 },
	{ 935, 143, "2018-07-13", "2017-11-22", 70674, 1637 },
	{ 957, 352, "2018-11-08", "2017-09-15", 38280, 1050 },
	{ 965, 119, "2017-07-17", "2018-03-09", 35824, 1636 }
};

struct T_customer_policies
customer_policies[] = {
	{ 119,  1,      "Car", "2018-01-21", "2017-12-15" },
	{ 141,  2,     "Life", "2017-08-21", "2017-09-29" },
	{ 143,  3,      "Car", "2017-06-16", "2017-12-09" },
	{ 218,  4,      "Car", "2017-09-18", "2017-11-23" },
	{ 264,  4,      "Car", "2016-12-25", "2018-01-25" },
	{ 270,  5,     "Life", "2016-07-17", "2018-01-05" },
	{ 352,  6, "Property", "2016-05-23", "2017-12-09" },
	{ 396,  7,   "Travel", "2017-07-30", "2017-10-09" },
	{ 473,  3,   "Travel", "2017-04-24", "2017-12-14" },
	{ 552, 12,   "Travel", "2017-12-13", "2017-11-05" },
	{ 587, 13,   "Travel", "2017-03-23", "2017-09-01" },
	{ 738,  8,   "Travel", "2018-06-16", "2017-12-04" },
	{ 744,  6, "Property", "2017-12-01", "2018-03-07" },
	{ 858,  9, "Property", "2016-05-30", "2018-02-11" },
	{ 900,  2, "Property", "2017-01-20", "2017-12-11" }
};

struct T_customers
customers[] = {
	{  1,     "America Jaskolski" },
	{  2,      "Ellsworth Paucek" },
	{  3,     "Mrs. Hanna Willms" },
	{  4,        "Dr. Diana Rath" },
	{  5,        "Selena Gerhold" },
	{  6,    "Lauriane Ferry PhD" },
	{  7,        "Sydnie Friesen" },
	{  8,          "Dayana Robel" },
	{  9,  "Mr. Edwardo Blanda I" },
	{ 10,     "Augustine Kerluke" },
	{ 11,       "Buddy Marquardt" },
	{ 12,  "Mr. Randal Lynch III" },
	{ 13,    "Mrs. Liza Heller V" },
	{ 14, "Mrs. Lilly Graham III" },
	{ 15, "Miss Felicita Reichel" }
};

struct T_payments
payments[] = {
	{ 384, 516,       "MasterCard", "2018-02-16", 241730 },
	{ 435, 476,       "MasterCard", "2017-05-28", 448613 },
	{ 484, 516,       "MasterCard", "2017-06-24", 456098 },
	{ 498, 682,    "Discover Card", "2017-08-06",  38324 },
	{ 542, 597,       "MasterCard", "2018-01-10", 407235 },
	{ 559, 512,       "MasterCard", "2018-02-18", 235893 },
	{ 678, 516,             "Visa", "2017-12-16", 459407 },
	{ 739, 597,    "Discover Card", "2017-10-07",  71246 },
	{ 754, 516,             "Visa", "2018-02-24",   7343 },
	{ 774, 527,       "MasterCard", "2018-01-28", 319142 },
	{ 779, 564,             "Visa", "2017-05-28", 155654 },
	{ 791, 983,             "Visa", "2017-05-03", 172309 },
	{ 886, 516,       "MasterCard", "2017-07-31", 423154 },
	{ 912, 648,    "Discover Card", "2017-05-04", 123255 },
	{ 983, 682, "American Express", "2018-01-19", 177130 }
};

struct T_settlements
settlements[] = {
	{ 357, 486, "2018-08-07", "2018-01-16", 38543, 1181, 515 },
	{ 412, 621, "2017-08-27", "2018-02-04", 57669, 1427, 617 },
	{ 476, 801, "2016-09-05", "2018-03-02", 30954, 1805, 943 },
	{ 512, 801, "2016-05-18", "2018-02-11", 82506, 1737, 133 },
	{ 516, 563, "2017-05-19", "2017-10-06", 37302, 1767, 638 },
	{ 527, 801, "2018-11-10", "2018-02-15", 25078,  930, 727 },
	{ 558, 569, "2018-05-12", "2017-11-30", 16603, 1516, 536 },
	{ 564, 761, "2016-07-04", "2018-02-20", 62680, 1676, 839 },
	{ 597, 486, "2017-04-18", "2017-12-24",  4456, 1698, 359 },
	{ 616, 957, "2017-07-31", "2018-01-27", 24055, 1262, 590 },
	{ 648, 761, "2017-09-22", "2018-02-14", 32079, 1266, 805 },
	{ 682, 801, "2017-03-04", "2018-02-20", 56850, 1508, 564 },
	{ 756, 571, "2017-04-14", "2017-11-15",  8634, 1293, 448 },
	{ 897, 843, "2017-03-29", "2018-02-20", 20569, 1885, 678 },
	{ 983, 621, "2016-07-19", "2017-11-04",  3864, 1042, 419 }
};

#endif