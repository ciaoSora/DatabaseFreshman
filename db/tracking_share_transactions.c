/*
Database "tracking_share_transactions" contains tables:
	investors
	lots
	purchases
	reference_transaction_types
	sales
	transactions
	transactions_lots
*/

#ifndef TRACKING_SHARE_TRANSACTIONS
#define TRACKING_SHARE_TRANSACTIONS

struct T_investors {
	double investor_id;
	char investor_details[2];
};

struct T_lots {
	double lot_id;
	double investor_id;	// --> investors.investor_id
	char lot_details[2];
};

struct T_purchases {
	double purchase_transaction_id;	// --> transactions.transaction_id
	char purchase_details[2];
};

struct T_reference_transaction_types {
	char transaction_type_code[5];
	char transaction_type_description[9];
};

struct T_sales {
	double sales_transaction_id;	// --> transactions.transaction_id
	char sales_details[2];
};

struct T_transactions {
	double transaction_id;
	double investor_id;	// --> investors.investor_id
	char transaction_type_code[5];	// --> reference_transaction_types.transaction_type_code
	char date_of_transaction[20];
	double amount_of_transaction;
	char share_count[10];
	char other_details[5];
};

struct T_transactions_lots {
	double transaction_id;	// --> transactions.transaction_id
	double lot_id;	// --> lots.lot_id
};

struct T_investors
investors[] = {
	{  1, "z" },
	{  2, "z" },
	{  3, "d" },
	{  4, "d" },
	{  5, "b" },
	{  6, "k" },
	{  7, "l" },
	{  8, "t" },
	{  9, "y" },
	{ 10, "r" },
	{ 11, "q" },
	{ 12, "c" },
	{ 13, "o" },
	{ 14, "w" },
	{ 15, "i" },
	{ 16, "y" },
	{ 17, "k" },
	{ 18, "w" },
	{ 19, "l" },
	{ 20, "j" }
};

struct T_lots
lots[] = {
	{  1, 13, "r" },
	{  2, 16, "z" },
	{  3, 10, "s" },
	{  4, 19, "s" },
	{  5,  6, "q" },
	{  6, 20, "d" },
	{  7,  7, "m" },
	{  8,  7, "h" },
	{  9, 20, "z" },
	{ 10,  9, "x" },
	{ 11,  1, "d" },
	{ 12, 19, "m" },
	{ 13,  7, "z" },
	{ 14,  6, "d" },
	{ 15,  1, "h" }
};

struct T_purchases
purchases[] = {
	{  1, "c" },
	{  2, "y" },
	{  3, "i" },
	{  4, "x" },
	{  5, "y" },
	{  6, "a" },
	{  7, "r" },
	{  8, "a" },
	{  9, "r" },
	{ 10, "l" },
	{ 11, "z" },
	{ 12, "h" },
	{ 13, "t" },
	{ 14, "o" },
	{ 15, "x" }
};

struct T_reference_transaction_types
reference_transaction_types[] = {
	{ "SALE",     "Sale" },
	{  "PUR", "Purchase" }
};

struct T_sales
sales[] = {
	{  1, "x" },
	{  2, "o" },
	{  3, "a" },
	{  4, "f" },
	{  5, "y" },
	{  6, "x" },
	{  7, "p" },
	{  8, "e" },
	{  9, "p" },
	{ 10, "s" },
	{ 11, "s" },
	{ 12, "t" },
	{ 13, "p" },
	{ 14, "n" },
	{ 15, "e" }
};

struct T_transactions
transactions[] = {
	{  1,  6, "SALE", "1988-09-16 19:02:51",    302507.6996,   "8718572", "None" },
	{  2, 18,  "PUR", "1982-06-06 17:19:00",         27.257,         "9", "None" },
	{  3,  2, "SALE", "1979-04-27 06:03:59",      48777.969,      "8580", "None" },
	{  4, 14,  "PUR", "2001-11-28 15:06:25",         4.5263,      "8040", "None" },
	{  5,  8,  "PUR", "1977-08-17 13:13:30",              0,       "930", "None" },
	{  6, 19,  "PUR", "1985-10-08 13:13:39", 207484122.2796,      "2751", "None" },
	{  7,  7,  "PUR", "1990-12-02 09:03:38",        822.803,      "1522", "None" },
	{  8, 17, "SALE", "2004-01-18 20:37:50",  78035671.4424,     "96178", "None" },
	{  9, 20,  "PUR", "1977-08-13 02:18:47",      82057.207,          "", "None" },
	{ 10,  2, "SALE", "1981-01-28 08:07:03",        29.3534,   "1654756", "None" },
	{ 11,  3, "SALE", "2000-04-03 20:55:43",              0, "674529892", "None" },
	{ 12, 18, "SALE", "1983-11-01 17:57:27",              1,       "587", "None" },
	{ 13,  3, "SALE", "2002-04-07 20:28:37",          183.2,          "", "None" },
	{ 14,  3,  "PUR", "2002-09-13 03:04:56",              0,    "630021", "None" },
	{ 15, 19,  "PUR", "1997-12-30 05:05:40",            8.9,     "93191", "None" }
};

struct T_transactions_lots
transactions_lots[] = {
	{  3, 11 },
	{  3,  8 },
	{  2, 11 },
	{  3, 14 },
	{ 12, 10 },
	{ 15, 10 },
	{ 10, 10 },
	{  1,  1 },
	{  1, 14 },
	{  3,  4 },
	{ 14,  9 },
	{  7,  1 },
	{ 12, 15 },
	{  6,  3 },
	{  2,  1 }
};

#endif