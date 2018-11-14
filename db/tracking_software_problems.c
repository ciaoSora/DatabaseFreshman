/*
Database "tracking_software_problems" contains tables:
	problem_category_codes
	problem_log
	problem_status_codes
	problems
	product
	staff
*/

#ifndef TRACKING_SOFTWARE_PROBLEMS
#define TRACKING_SOFTWARE_PROBLEMS

struct T_problem_category_codes {
	char problem_category_code[11];
	char problem_category_description[33];
};

struct T_problem_log {
	double problem_log_id;
	double assigned_to_staff_id;	// --> staff.staff_id
	double problem_id;	// --> problems.problem_id
	char problem_category_code[11];	// --> problem_category_codes.problem_category_code
	char problem_status_code[9];	// --> problem_status_codes.problem_status_code
	char log_entry_date[20];
	char log_entry_description[2];
	char log_entry_fix[2];
	char other_log_details[2];
};

struct T_problem_status_codes {
	char problem_status_code[9];
	char problem_status_description[9];
};

struct T_problems {
	double problem_id;
	double product_id;	// --> product.product_id
	double closure_authorised_by_staff_id;	// --> staff.staff_id
	double reported_by_staff_id;	// --> staff.staff_id
	char date_problem_reported[20];
	char date_problem_closed[20];
	char problem_description[2];
	char other_problem_details[2];
};

struct T_product {
	double product_id;
	char product_name[9];
	char product_details[2];
};

struct T_staff {
	double staff_id;
	char staff_first_name[9];
	char staff_last_name[9];
	char other_staff_details[2];
};

struct T_problem_category_codes
problem_category_codes[] = {
	{ "Datatabase",     "Database design or contents." },
	{        "GUI",                  "User Interface." },
	{ "Middleware", "Infrastructrure and Architecture" }
};

struct T_problem_log
problem_log[] = {
	{  1, 11, 11, "Middleware",   "Solved", "2011-03-13 13:11:57", "t", "k", "p" },
	{  2, 11,  8,        "GUI",   "Solved", "1976-03-31 14:03:02", "a", "k", "s" },
	{  3, 12,  1,        "GUI",   "Solved", "1974-12-11 01:06:22", "b", "j", "e" },
	{  4, 12, 12,        "GUI", "Reported", "1993-04-02 11:07:29", "a", "t", "b" },
	{  5,  6, 12, "Middleware", "Reported", "1976-09-17 09:01:12", "c", "n", "u" },
	{  6,  2, 13,        "GUI",   "Solved", "1983-07-01 02:12:36", "h", "g", "n" },
	{  7, 13,  1, "Datatabase",   "Solved", "1974-09-13 00:37:26", "s", "c", "v" },
	{  8,  4, 15, "Datatabase",   "Solved", "1999-08-17 00:00:18", "j", "h", "j" },
	{  9, 10, 13,        "GUI", "Reported", "1993-06-21 22:33:35", "p", "i", "f" },
	{ 10,  6,  1, "Middleware", "Reported", "2001-05-14 10:03:53", "d", "x", "d" },
	{ 11,  1,  8, "Datatabase",   "Solved", "1973-03-12 16:30:50", "w", "k", "a" },
	{ 12,  4, 10, "Middleware",   "Solved", "1997-08-31 08:19:12", "c", "y", "c" },
	{ 13,  6, 10, "Middleware", "Reported", "2009-04-10 19:09:30", "q", "t", "o" },
	{ 14,  8,  4, "Datatabase", "Reported", "2011-11-12 23:30:53", "a", "s", "c" },
	{ 15,  5,  7,        "GUI", "Reported", "1982-11-17 06:05:52", "v", "o", "d" }
};

struct T_problem_status_codes
problem_status_codes[] = {
	{ "Reported", "Reported" },
	{   "Solved",   "Solved" }
};

struct T_problems
problems[] = {
	{  1,  4,  4,  2, "1978-06-26 19:10:17", "2012-07-22 19:24:26", "x", "p" },
	{  2,  8,  3, 10, "1988-11-07 16:09:31", "1973-06-07 04:13:51", "w", "p" },
	{  3,  1,  4,  1, "1995-05-14 08:32:56", "1997-02-26 05:06:15", "r", "i" },
	{  4, 13,  8,  7, "1973-10-12 10:51:23", "1993-06-19 10:02:59", "y", "c" },
	{  5,  4, 12, 11, "1986-11-13 07:30:55", "2013-05-24 20:33:11", "a", "k" },
	{  6,  1,  5,  4, "2010-10-05 02:25:37", "1998-07-03 14:53:59", "p", "l" },
	{  7,  2,  2,  7, "1996-04-19 15:54:13", "1974-09-20 13:42:19", "a", "l" },
	{  8,  2,  4,  1, "1976-12-18 23:54:41", "1982-08-26 10:58:01", "w", "f" },
	{  9, 15, 14, 13, "2010-10-11 13:36:00", "1995-06-10 18:41:08", "i", "v" },
	{ 10,  4, 13, 10, "1993-12-29 23:22:21", "1990-04-13 21:15:50", "d", "s" },
	{ 11,  5,  1, 14, "1970-02-23 17:46:12", "1971-02-06 15:23:23", "d", "v" },
	{ 12,  6,  9,  2, "1970-05-20 15:38:46", "1997-10-18 20:09:57", "j", "c" },
	{ 13,  1,  9,  5, "1971-06-15 02:50:52", "2004-06-20 01:08:25", "c", "f" },
	{ 14,  1,  6, 13, "1977-10-22 15:48:13", "1970-09-05 08:04:43", "s", "s" },
	{ 15,  7,  9, 10, "1970-10-27 16:35:34", "1999-09-28 21:29:12", "r", "m" }
};

struct T_product
product[] = {
	{  1,     "rose", "k" },
	{  2,   "yellow", "q" },
	{  3,     "chat", "e" },
	{  4,   "wechat", "r" },
	{  5,     "life", "q" },
	{  6,     "keep", "d" },
	{  7, "messager", "m" },
	{  8,  "hangout", "u" },
	{  9,  "twitter", "z" },
	{ 10,     "blog", "d" },
	{ 11, "snapchat", "e" },
	{ 12, "doulingo", "q" },
	{ 13,    "learn", "h" },
	{ 14,    "teach", "n" },
	{ 15,     "game", "j" }
};

struct T_staff
staff[] = {
	{  1,    "Lacey",    "Bosco", "m" },
	{  2,   "Dameon",    "Frami", "x" },
	{  3,   "Ashley", "Medhurst", "w" },
	{  4,    "Kayla",    "Klein", "p" },
	{  5,    "Jolie",    "Weber", "q" },
	{  6, "Kristian",    "Lynch", "b" },
	{  7,   "Kenton", "Champlin", "p" },
	{  8,   "Magali",   "Schumm", "d" },
	{  9,   "Junius",  "Treutel", "j" },
	{ 10, "Christop",    "Berge", "x" },
	{ 11,    "Rylan", "Homenick", "x" },
	{ 12,   "Stevie",    "Mante", "j" },
	{ 13,  "Lysanne", "Turcotte", "i" },
	{ 14, "Kenyatta",   "Klocko", "e" },
	{ 15,   "Israel",  "Dickens", "w" }
};

#endif