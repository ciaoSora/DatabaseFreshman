/*
Database "products_for_hire" contains tables:
	bookings
	customers
	discount_coupons
	payments
	products_booked
	products_for_hire
	view_product_availability
*/

#ifndef PRODUCTS_FOR_HIRE
#define PRODUCTS_FOR_HIRE

struct T_bookings {
	double booking_id;
	double customer_id;	// --> customers.customer_id
	char booking_status_code[12];
	char returned_damaged_yes_or_no[2];
	char booking_start_date[20];
	char booking_end_date[20];
	char count_hired[4];
	double amount_payable;
	double amount_of_discount;
	double amount_outstanding;
	double amount_of_refund;
};

struct T_customers {
	double customer_id;
	double coupon_id;	// --> discount_coupons.coupon_id
	char good_or_bad_customer[5];
	char first_name[11];
	char last_name[12];
	char gender[2];
	char date_became_customer[20];
	char date_last_hire[20];
};

struct T_discount_coupons {
	double coupon_id;
	char date_issued[20];
	double coupon_amount;
};

struct T_payments {
	double payment_id;
	double booking_id;	// --> bookings.booking_id
	double customer_id;	// --> customers.customer_id
	char payment_type_code[13];
	char amount_paid_in_full_yn[2];
	char payment_date[20];
	double amount_due;
	double amount_paid;
};

struct T_products_booked {
	double booking_id;	// --> bookings.booking_id
	double product_id;	// --> products_for_hire.product_id
	char returned_yes_or_no[2];
	char returned_late_yes_or_no[2];
	double booked_count;
	double booked_amount;
};

struct T_products_for_hire {
	double product_id;
	char product_type_code[11];
	double daily_hire_cost;
	char product_name[18];
	char product_description[30];
};

struct T_view_product_availability {
	double product_id;	// --> products_for_hire.product_id
	double booking_id;	// --> bookings.booking_id
	char status_date[20];
	char available_yes_or_no[2];
};

struct T_bookings
bookings[] = {
	{  1,  7, "Provisional", "1", "2016-12-07 23:39:17", "2018-02-01 16:39:13", "298", 214.39, 71.45, 28.22, 179.14 },
	{  2, 15,   "Confirmed", "1", "2017-06-16 11:42:31", "2018-02-19 21:53:31", "331", 386.92, 83.82, 57.62, 183.68 },
	{  3,  3,   "Confirmed", "1", "2017-04-04 11:02:43", "2018-02-01 09:30:50", "729", 351.32, 49.26, 66.01, 135.94 },
	{  4,  7, "Provisional", "0", "2017-06-05 17:56:01", "2017-12-02 00:37:00", "152", 272.08, 45.06, 38.87, 100.78 },
	{  5,  7, "Provisional", "1", "2016-11-06 20:54:26", "2017-10-11 03:00:15", "546",  338.1, 79.34, 32.99, 191.31 },
	{  6, 10,   "Confirmed", "0", "2016-06-05 05:18:17", "2018-01-14 00:29:01", "282", 209.41, 27.78, 52.62, 192.02 },
	{  7,  3, "Provisional", "1", "2017-07-15 06:28:54", "2017-11-28 08:11:52", "236", 322.87, 39.27, 56.02,  126.1 },
	{  8, 11, "Provisional", "0", "2016-09-26 01:09:20", "2018-03-24 21:21:32", "746",  303.3, 61.55, 68.02, 145.63 },
	{  9, 10, "Provisional", "0", "2017-05-24 16:16:29", "2018-03-07 17:39:04", "846", 374.59, 50.93, 26.04, 130.87 },
	{ 10,  3,   "Confirmed", "1", "2016-05-06 03:50:49", "2017-08-30 04:33:23", "857", 320.73, 39.16, 27.81, 112.63 },
	{ 11,  9, "Provisional", "1", "2017-04-11 00:39:03", "2017-10-02 07:28:09", "488", 273.28, 48.73, 73.88, 181.19 },
	{ 12,  3, "Provisional", "1", "2017-02-27 12:04:35", "2018-02-06 19:27:09", "914", 281.09, 26.37, 22.97, 110.39 },
	{ 13,  8, "Provisional", "0", "2016-11-27 17:19:40", "2018-03-04 21:42:45", "499", 286.47, 89.05, 36.79, 143.99 },
	{ 14,  8,   "Confirmed", "1", "2016-04-25 11:04:18", "2018-01-01 10:19:20", "843", 221.57, 24.19, 64.01,  161.9 },
	{ 15,  9, "Provisional", "1", "2017-04-28 08:35:56", "2018-01-18 23:54:44", "994", 306.26, 78.31, 93.88, 124.95 }
};

struct T_customers
customers[] = {
	{  1, 12, "good",    "Geovany",    "Homenick", "0", "2017-10-20 12:13:17", "2018-02-27 18:55:26" },
	{  2, 14, "good",     "Jailyn",     "Gerlach", "0", "2015-04-06 21:18:37", "2018-01-30 04:47:13" },
	{  3,  7, "good",    "Rosalee",     "Kessler", "0", "2016-02-03 16:58:11", "2018-03-04 21:30:23" },
	{  4, 12,  "bad",       "Reba",      "Jacobs", "1", "2016-06-17 14:11:50", "2018-02-19 06:04:01" },
	{  5, 10, "good",     "Ericka",   "Greenholt", "0", "2016-08-11 01:50:37", "2018-02-25 04:40:15" },
	{  6, 14,  "bad",    "Bridget",   "Ankunding", "1", "2015-04-24 02:38:16", "2018-02-10 19:44:08" },
	{  7, 12, "good",    "Marilou",     "Strosin", "1", "2015-12-16 08:05:53", "2018-02-01 16:48:30" },
	{  8,  6, "good",    "Elinore",       "Crona", "0", "2017-07-27 08:04:22", "2018-03-04 08:59:40" },
	{  9,  7, "good",     "German",      "Little", "1", "2017-02-28 14:40:25", "2018-03-13 21:20:05" },
	{ 10,  1,  "bad",      "Layne",       "Terry", "1", "2015-05-05 20:29:01", "2018-02-04 08:56:55" },
	{ 11, 10, "good", "Maximilian",      "Murphy", "0", "2015-07-21 09:24:57", "2018-03-12 09:23:41" },
	{ 12, 11, "good",     "Vergie",     "Nicolas", "0", "2016-02-03 10:31:18", "2018-03-03 23:37:31" },
	{ 13,  2, "good",      "Laury",       "Lemke", "1", "2017-03-18 04:37:59", "2018-03-18 17:35:43" },
	{ 14,  6, "good",      "Tyler", "Breitenberg", "1", "2016-04-20 21:04:35", "2018-03-03 13:46:38" },
	{ 15,  3,  "bad",      "Jamir",   "Schroeder", "1", "2016-05-25 01:12:49", "2018-02-24 11:15:29" }
};

struct T_discount_coupons
discount_coupons[] = {
	{  1, "2017-09-06 01:33:27",    500 },
	{  2, "2018-02-20 09:40:56", 686.25 },
	{  3, "2017-09-17 23:31:36",  501.3 },
	{  4, "2017-07-21 10:10:47", 370.44 },
	{  5, "2017-06-21 22:47:58", 399.89 },
	{  6, "2017-08-16 03:16:48", 689.29 },
	{  7, "2018-02-10 21:18:23", 508.44 },
	{  8, "2017-12-28 20:11:42", 666.46 },
	{  9, "2017-07-03 23:02:14", 685.96 },
	{ 10, "2018-03-22 01:10:03", 175.94 },
	{ 11, "2017-10-22 06:03:39", 607.62 },
	{ 12, "2018-03-21 11:49:13", 523.78 },
	{ 13, "2017-07-13 00:37:36", 770.82 },
	{ 14, "2018-02-24 01:40:52", 547.39 },
	{ 15, "2017-07-02 06:49:42", 245.36 }
};

struct T_payments
payments[] = {
	{  1,  6, 15,        "Check", "1", "2018-03-09 16:28:00", 369.52, 206.27 },
	{  2,  9, 12,         "Cash", "1", "2018-03-03 13:39:44",  278.6, 666.45 },
	{  3,  5,  7,  "Credit Card", "0", "2018-03-22 15:00:23", 840.06,  135.7 },
	{  4,  6,  1,        "Check", "0", "2018-03-22 02:28:11", 678.29,  668.4 },
	{  5,  8, 11,         "Cash", "1", "2018-03-23 20:36:04", 830.25, 305.65 },
	{  6, 15,  8,        "Check", "0", "2018-03-19 12:39:31",  410.1, 175.54 },
	{  7,  1,  8,         "Cash", "1", "2018-03-02 06:25:45", 482.26,  602.8 },
	{  8,  9, 14,         "Cash", "1", "2018-03-12 23:00:55", 653.18, 505.23 },
	{  9,  3,  7, "Direct Debit", "0", "2018-03-12 23:23:56", 686.85, 321.58 },
	{ 10, 13, 10,  "Credit Card", "1", "2018-03-23 13:24:33", 486.75, 681.21 },
	{ 11, 14, 15,  "Credit Card", "1", "2018-03-03 03:07:00", 259.18, 464.06 },
	{ 12, 14,  9,         "Cash", "0", "2018-02-27 10:50:39", 785.73, 685.32 },
	{ 13, 15, 14, "Direct Debit", "0", "2018-03-03 14:22:51", 665.58, 307.14 },
	{ 14,  5,  5, "Direct Debit", "1", "2018-03-17 15:51:52", 407.51, 704.41 },
	{ 15,  4, 12,  "Credit Card", "1", "2018-03-17 03:07:45", 631.93,  334.2 }
};

struct T_products_booked
products_booked[] = {
	{  4, 1, "1", "1", 5, 309.73 },
	{ 14, 1, "1", "0", 3, 102.76 },
	{ 13, 3, "1", "0", 4, 151.68 },
	{ 11, 1, "1", "1", 1, 344.38 },
	{ 15, 3, "1", "0", 2, 236.13 },
	{ 10, 4, "1", "0", 6, 123.43 },
	{ 14, 5, "1", "1", 6, 351.38 },
	{ 11, 5, "1", "1", 3, 146.01 },
	{  3, 5, "1", "1", 3, 189.16 },
	{ 15, 1, "1", "0", 1, 398.68 },
	{  2, 4, "1", "1", 9, 290.72 },
	{  1, 2, "1", "0", 5,  110.2 }
};

struct T_products_for_hire
products_for_hire[] = {
	{ 1,    "Cutlery", 26.15, "Book collection C",                 "Anna Karenina" },
	{ 2,    "Cutlery", 15.62, "Book collection B",                 "War and Peace" },
	{ 3,    "Cutlery", 39.73, "Book collection A",              "The Great Gatsby" },
	{ 4, "Din_Plates",  18.5,  "DVD collection A",                      "Twilight" },
	{ 5,    "Cutlery", 39.58,  "DVD collection B", "One Hundred Years of Solitude" }
};

struct T_view_product_availability
view_product_availability[] = {
	{ 1,  5, "2018-03-18 05:25:55", "1" },
	{ 2,  5, "2018-03-21 15:20:32", "0" },
	{ 3, 11, "2018-03-25 10:20:15", "1" },
	{ 5, 11, "2018-03-22 00:16:58", "1" }
};

#endif