/*
Database "cre_Doc_Control_Systems" contains tables:
	addresses
	circulation_history
	document_drafts
	documents
	documents_mailed
	draft_copies
	employees
	reference_document_status
	reference_document_types
	reference_shipping_agents
	roles
*/

#ifndef CRE_DOC_CONTROL_SYSTEMS
#define CRE_DOC_CONTROL_SYSTEMS

struct T_addresses {
	double address_id;
	char address_details[3];
};

struct T_circulation_history {
	double document_id;	// --> draft_copies.document_id
	double draft_number;	// --> draft_copies.draft_number
	double copy_number;	// --> draft_copies.copy_number
	double employee_id;	// --> employees.employee_id
};

struct T_document_drafts {
	double document_id;	// --> documents.document_id
	double draft_number;
	char draft_details[2];
};

struct T_documents {
	double document_id;
	char document_status_code[8];	// --> reference_document_status.document_status_code
	char document_type_code[11];	// --> reference_document_types.document_type_code
	char shipping_agent_code[3];	// --> reference_shipping_agents.shipping_agent_code
	char receipt_date[20];
	char receipt_number[4];
	char other_details[2];
};

struct T_documents_mailed {
	double document_id;	// --> documents.document_id
	double mailed_to_address_id;	// --> addresses.address_id
	char mailing_date[20];
};

struct T_draft_copies {
	double document_id;	// --> document_drafts.document_id
	double draft_number;	// --> document_drafts.draft_number
	double copy_number;
};

struct T_employees {
	double employee_id;
	char role_code[3];	// --> roles.role_code
	char employee_name[8];
	char other_details[2];
};

struct T_reference_document_status {
	char document_status_code[8];
	char document_status_description[21];
};

struct T_reference_document_types {
	char document_type_code[11];
	char document_type_description[2];
};

struct T_reference_shipping_agents {
	char shipping_agent_code[3];
	char shipping_agent_name[8];
	char shipping_agent_description[2];
};

struct T_roles {
	char role_code[3];
	char role_description[14];
};

struct T_addresses
addresses[] = {
	{ 0, "IT" },
	{ 1, "MX" },
	{ 2, "DE" },
	{ 3, "ES" },
	{ 4, "ES" },
	{ 5, "IE" },
	{ 6, "US" },
	{ 7, "PT" },
	{ 8, "IE" },
	{ 9, "MX" }
};

struct T_circulation_history
circulation_history[] = {
	{ 20, 17, 15, 8 },
	{  1,  2,  5, 1 },
	{  2,  1,  4, 2 },
	{ 10, 20, 10, 2 }
};

struct T_document_drafts
document_drafts[] = {
	{  1,  0, "e" },
	{  1,  2, "k" },
	{  2,  1, "v" },
	{  2,  8, "v" },
	{  4,  9, "r" },
	{  7, 10, "m" },
	{ 10, 20, "k" },
	{ 12, 11, "b" },
	{ 12, 12, "r" },
	{ 13,  4, "w" },
	{ 13, 16, "p" },
	{ 14, 14, "x" },
	{ 17, 19, "a" },
	{ 20, 17, "l" },
	{ 23,  9, "r" }
};

struct T_documents
documents[] = {
	{  1, "working",         "CD", "UP", "2008-04-21 20:42:25",  "19", "z" },
	{  2,    "done",      "Paper", "US", "1974-05-08 00:00:46",  "34", "h" },
	{  3,    "done",      "Paper", "UP", "2014-12-25 17:22:44",  "93", "h" },
	{  4,    "done",      "Paper", "US", "1973-11-05 21:48:53",  "80", "q" },
	{  7, "working",         "CD", "SH", "1982-09-27 14:52:15",  "61", "w" },
	{ 10, "overdue",      "Paper", "UP", "1976-09-15 19:24:17",   "8", "m" },
	{ 12, "overdue", "Hard Drive", "US", "1996-05-31 06:51:58",  "69", "n" },
	{ 13, "working",         "CD", "UP", "2015-04-03 09:36:19",  "79", "y" },
	{ 14, "working",         "CD", "FE", "2017-07-02 17:39:09", "117", "u" },
	{ 15, "overdue",         "CD", "UP", "1986-12-14 14:18:59",  "37", "r" },
	{ 17,    "done",      "Paper", "FE", "1983-09-26 09:32:56",  "55", "p" },
	{ 20, "working",      "Paper", "UP", "1996-07-27 03:30:40", "189", "x" },
	{ 23, "working", "Hard Drive", "FE", "1999-04-17 14:19:32", "124", "b" },
	{ 24, "working", "Hard Drive", "FE", "2005-09-30 00:10:02", "114", "j" },
	{ 25, "overdue", "Hard Drive", "AL", "1985-11-05 17:59:34",  "83", "u" }
};

struct T_documents_mailed
documents_mailed[] = {
	{  2, 8, "1977-04-01 17:03:50" },
	{  4, 3, "1992-11-07 15:03:41" },
	{  4, 9, "1973-02-21 10:17:01" },
	{  7, 5, "1979-09-21 10:30:52" },
	{ 10, 3, "1993-05-24 22:13:48" },
	{ 12, 0, "1999-05-22 23:21:07" },
	{ 12, 7, "2007-01-01 22:32:11" },
	{ 12, 8, "2007-03-20 05:22:01" },
	{ 13, 4, "1991-05-27 14:17:37" },
	{ 14, 5, "1986-05-16 06:25:33" },
	{ 20, 2, "2010-11-04 04:00:16" },
	{ 20, 7, "1982-01-14 05:50:54" },
	{ 23, 8, "1971-11-03 12:32:14" },
	{ 24, 0, "2013-01-27 03:29:31" }
};

struct T_draft_copies
draft_copies[] = {
	{  2,  8,  5 },
	{  4,  9,  6 },
	{ 23,  9, 15 },
	{ 10, 20, 10 },
	{  2,  1,  4 },
	{  1,  2,  5 },
	{ 20, 17, 15 },
	{ 12, 12, 10 }
};

struct T_employees
employees[] = {
	{ 1, "ED",    "Koby", "h" },
	{ 2, "ED",  "Kenyon", "f" },
	{ 3, "PR",   "Haley", "b" },
	{ 5, "PT", "Clemens", "b" },
	{ 7, "PT",  "Jordyn", "v" },
	{ 8, "MG",  "Erling", "u" }
};

struct T_reference_document_status
reference_document_status[] = {
	{ "working", "currently working on" },
	{    "done",               "mailed" },
	{ "overdue",          "mailed late" }
};

struct T_reference_document_types
reference_document_types[] = {
	{         "CD", "b" },
	{      "Paper", "u" },
	{ "Hard Drive", "f" }
};

struct T_reference_shipping_agents
reference_shipping_agents[] = {
	{ "UP",     "UPS", "g" },
	{ "US",    "USPS", "q" },
	{ "AL", "Airline", "w" },
	{ "FE",   "Fedex", "k" },
	{ "SH",    "Ship", "t" }
};

struct T_roles
roles[] = {
	{ "ED",        "Editor" },
	{ "PT",         "Photo" },
	{ "MG",       "Manager" },
	{ "PR", "Proof Manager" }
};

#endif