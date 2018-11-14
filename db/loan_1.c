/*
Database "loan_1" contains tables:
	bank
	customer
	loan
*/

#ifndef LOAN_1
#define LOAN_1

struct T_bank {
	double branch_id;
	char bname[12];
	double no_of_customers;
	char city[15];
	char state[9];
};

struct T_customer {
	char customer_id[2];
	char customer_name[5];
	char account_type[9];
	double account_balance;
	double number_of_loans;
	double credit_score;
	double branch_id;	// --> bank.branch_id
	char state[9];
};

struct T_loan {
	char loan_id[2];
	char loan_type[10];
	char customer_id[2];	// --> customer.customer_id
	char branch_id[2];	// --> bank.branch_id
	double amount;
};

struct T_bank
bank[] = {
	{ 1, "morningside", 203,  "New York City", "New York" },
	{ 2,    "downtown", 123, "Salt Lake City",     "Utah" },
	{ 3,    "broadway", 453,  "New York City", "New York" },
	{ 4,        "high", 367,         "Austin",    "Texas" }
};

struct T_customer
customer[] = {
	{ "1", "Mary",   "saving",   2000, 2,  30, 2,     "Utah" },
	{ "2", "Jack", "checking",   1000, 1,  20, 1,    "Texas" },
	{ "3", "Owen",   "saving", 800000, 0, 210, 3, "New York" }
};

struct T_loan
loan[] = {
	{ "1", "Mortgages", "1", "1", 2050 },
	{ "2",      "Auto", "1", "2", 3000 },
	{ "3",  "Business", "3", "3", 5000 }
};

#endif