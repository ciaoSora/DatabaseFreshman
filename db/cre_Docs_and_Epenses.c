/*
Database "cre_Docs_and_Epenses" contains tables:
	accounts
	documents
	documents_with_expenses
	projects
	reference_budget_codes
	reference_document_types
	statements
*/

#ifndef CRE_DOCS_AND_EPENSES
#define CRE_DOCS_AND_EPENSES

struct T_accounts {
	double account_id;
	double statement_id;	// --> statements.statement_id
	char account_details[9];
};

struct T_documents {
	double document_id;
	char document_type_code[3];	// --> reference_document_types.document_type_code
	double project_id;	// --> projects.project_id
	char document_date[20];
	char document_name[25];
	char document_description[5];
	char other_details[5];
};

struct T_documents_with_expenses {
	double document_id;	// --> documents.document_id
	char budget_type_code[4];	// --> reference_budget_codes.budget_type_code
	char document_details[13];
};

struct T_projects {
	double project_id;
	char project_details[28];
};

struct T_reference_budget_codes {
	char budget_type_code[4];
	char budget_type_description[13];
};

struct T_reference_document_types {
	char document_type_code[3];
	char document_type_name[13];
	char document_type_description[10];
};

struct T_statements {
	double statement_id;	// --> documents.document_id
	char statement_details[16];
};

struct T_accounts
accounts[] = {
	{   7,  57,  "495.063" },
	{  61,  57,   "930.14" },
	{  98,  57,  "6035.84" },
	{ 136,  57,   "199.52" },
	{ 164, 192, "12223.93" },
	{ 209,  57, "11130.23" },
	{ 211, 192, "1230.454" },
	{ 240, 192,  "6352.31" },
	{ 262,  57,   "147.96" },
	{ 280,  57,   "187.14" },
	{ 321, 192,  "745.817" },
	{ 346, 192,    "127.9" },
	{ 414,  57,    "25.41" },
	{ 427,  57,  "1168.32" },
	{ 451, 192,   "658.26" }
};

struct T_documents
documents[] = {
	{  29, "CV",  30, "2004-08-28 06:59:19",       "Review on UK files", "None", "None" },
	{  42, "BK", 105, "2012-12-27 19:09:18", "Review on Canadian files", "None", "None" },
	{  57, "CV", 195, "1980-10-22 14:17:11",   "Review on French files", "None", "None" },
	{ 121, "BK", 105, "1981-11-29 10:23:01",      "Review on USA files", "None", "None" },
	{ 181, "PP", 105, "1970-06-17 14:03:21", "Chapter on private files", "None", "None" },
	{ 192, "PP", 134, "2013-01-26 15:15:25",        "Book on USA files", "None", "None" },
	{ 226, "BK",  30, "1991-07-08 08:49:59",       "Review on UK files", "None", "None" },
	{ 227, "BK",  30, "1970-03-06 07:34:49",            "Deontae files", "None", "None" },
	{ 240, "BK", 105, "1971-06-09 19:03:41",              "Winona Book", "None", "None" },
	{ 300, "FM",  35, "2007-09-26 02:39:11",     "Trenton Presentation", "None", "None" },
	{ 309, "BK",  35, "1978-10-15 10:33:17",                  "Noel CV", "None", "None" },
	{ 318, "PP", 134, "1970-01-30 10:53:35",                "King Book", "None", "None" },
	{ 367, "CV", 134, "1983-08-24 17:10:26",              "Jevon Paper", "None", "None" },
	{ 371, "PP", 105, "1976-05-06 12:56:12",       "Katheryn statement", "None", "None" },
	{ 383, "PP",  35, "2005-10-28 03:17:16",       "Review on UK files", "None", "None" }
};

struct T_documents_with_expenses
documents_with_expenses[] = {
	{  57,  "GV",   "government" },
	{ 192,  "GV",   "government" },
	{ 226,  "GV",   "government" },
	{ 227,  "GV",   "government" },
	{ 240,  "GV",   "government" },
	{ 300,  "GV",   "government" },
	{ 309,  "SF",       "safety" },
	{ 367,  "SF",       "safety" },
	{ 371, "ORG", "organization" },
	{ 383, "ORG", "organization" }
};

struct T_projects
projects[] = {
	{  30,    "Society Research project" },
	{  35,  "Internet of Things project" },
	{ 105,      "Graph Database project" },
	{ 134,      "Human Resource project" },
	{ 195, "Population Research project" }
};

struct T_reference_budget_codes
reference_budget_codes[] = {
	{  "GV",   "Government" },
	{ "ORG", "Organisation" },
	{  "SF", "Self founded" }
};

struct T_reference_document_types
reference_document_types[] = {
	{ "BK",         "Book", "excellent" },
	{ "CV",           "CV", "excellent" },
	{ "PT", "Presentation", "very good" },
	{ "PP",        "Paper",      "good" },
	{ "FM",         "Film",       "fun" }
};

struct T_statements
statements[] = {
	{  57,    "Open Project" },
	{ 192, "Private Project" }
};

#endif