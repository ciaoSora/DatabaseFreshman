/*
Database "small_bank_1" contains tables:
	accounts
	checking
	savings
*/

#ifndef SMALL_BANK_1
#define SMALL_BANK_1

struct T_accounts {
	double customer_id;
	char name[9];
};

struct T_checking {
	double customer_id;	// --> accounts.customer_id
	double balance;
};

struct T_savings {
	double customer_id;	// --> accounts.customer_id
	double balance;
};

struct T_accounts
accounts[] = {
	{ 1,    "Brown" },
	{ 2,     "Wang" },
	{ 3, "O'mahony" },
	{ 4,    "Weeks" },
	{ 5,  "Granger" },
	{ 6,   "Porter" },
	{ 7,   "Wesley" }
};

struct T_checking
checking[] = {
	{ 1, 10000.0 },
	{ 2,  2000.0 },
	{ 3,  3000.0 },
	{ 4,  7000.0 },
	{ 5, 10000.0 },
	{ 6,    77.0 },
	{ 7,     7.0 }
};

struct T_savings
savings[] = {
	{ 1,    200000.0 },
	{ 2, 999999999.0 },
	{ 3,    230000.0 },
	{ 4,        60.0 },
	{ 5,     80000.0 },
	{ 6,       240.0 }
};

#endif