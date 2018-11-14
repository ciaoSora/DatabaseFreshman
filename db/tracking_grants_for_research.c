/*
Database "tracking_grants_for_research" contains tables:
	document_types
	documents
	grants
	organisation_types
	organisations
	project_outcomes
	project_staff
	projects
	research_outcomes
	research_staff
	staff_roles
	tasks
*/

#ifndef TRACKING_GRANTS_FOR_RESEARCH
#define TRACKING_GRANTS_FOR_RESEARCH

struct T_document_types {
	char document_type_code[4];
	char document_description[20];
};

struct T_documents {
	double document_id;
	char document_type_code[4];	// --> document_types.document_type_code
	double grant_id;	// --> grants.grant_id
	char sent_date[20];
	char response_received_date[20];
	char other_details[1];
};

struct T_grants {
	double grant_id;
	double organisation_id;	// --> organisations.organisation_id
	double grant_amount;
	char grant_start_date[20];
	char grant_end_date[20];
	char other_details[11];
};

struct T_organisation_types {
	char organisation_type[5];
	char organisation_type_description[9];
};

struct T_organisations {
	double organisation_id;
	char organisation_type[5];	// --> organisation_types.organisation_type
	char organisation_details[13];
};

struct T_project_outcomes {
	double project_id;	// --> projects.project_id
	char outcome_code[7];	// --> research_outcomes.outcome_code
	char outcome_details[5];
};

struct T_project_staff {
	double staff_id;
	double project_id;	// --> projects.project_id
	char role_code[11];	// --> staff_roles.role_code
	char date_from[20];
	char date_to[20];
	char other_details[5];
};

struct T_projects {
	double project_id;
	double organisation_id;	// --> organisations.organisation_id
	char project_details[12];
};

struct T_research_outcomes {
	char outcome_code[7];
	char outcome_description[25];
};

struct T_research_staff {
	double staff_id;
	double employer_organisation_id;	// --> organisations.organisation_id
	char staff_details[13];
};

struct T_staff_roles {
	char role_code[11];
	char role_description[19];
};

struct T_tasks {
	double task_id;
	double project_id;	// --> projects.project_id
	char task_details[2];
	char eg_agree_objectives[5];
};

struct T_document_types
document_types[] = {
	{ "APP", "Initial Application" },
	{ "REG",             "Regular" }
};

struct T_documents
documents[] = {
	{  1, "APP",  5, "1986-11-30 07:56:35", "1977-12-01 02:18:53", "" },
	{  2, "APP", 13, "2004-01-23 11:57:08", "1979-12-08 10:38:07", "" },
	{  3, "REG", 10, "1999-03-03 12:25:58", "1995-09-12 13:13:48", "" },
	{  4, "APP", 13, "1999-05-29 00:02:46", "1991-09-25 10:38:24", "" },
	{  5, "APP", 11, "2003-08-29 03:32:52", "1986-05-23 07:17:59", "" },
	{  6, "REG",  5, "1979-07-04 08:54:23", "1976-10-04 22:13:27", "" },
	{  7, "APP", 13, "1978-09-13 16:23:29", "1979-01-06 05:05:30", "" },
	{  8, "APP", 15, "2001-06-18 06:35:49", "1986-05-18 01:54:56", "" },
	{  9, "APP",  6, "2014-01-28 05:11:34", "1980-02-24 15:23:44", "" },
	{ 10, "REG",  7, "2002-07-26 15:50:28", "1987-10-29 15:35:50", "" },
	{ 11, "REG", 15, "1993-02-19 16:31:12", "1994-03-13 01:52:45", "" },
	{ 12, "REG", 13, "1997-03-09 03:42:19", "1977-01-27 07:14:11", "" },
	{ 13, "APP", 13, "1979-08-23 08:22:34", "1990-01-19 19:57:14", "" },
	{ 14, "APP", 15, "2000-06-06 01:03:46", "1971-08-28 11:20:56", "" },
	{ 15, "APP",  8, "1981-08-06 14:56:55", "1999-06-01 18:41:00", "" }
};

struct T_grants
grants[] = {
	{  1, 10,      4094.542, "2016-11-20 00:18:51", "2004-10-24 09:09:39",         "et" },
	{  2,  3,      281.2446, "1985-10-09 20:08:49", "1985-06-08 00:22:07",  "occaecati" },
	{  3, 14,  4515947.7015, "1970-09-19 22:53:49", "1989-03-16 18:27:16",         "et" },
	{  4, 11,      330.6339, "1990-08-13 20:27:28", "2014-08-13 22:58:50",         "et" },
	{  5,  2,   608413.3291, "1979-10-29 07:44:22", "1996-08-16 20:45:05",   "corrupti" },
	{  6,  8,       42.8061, "2011-05-10 22:44:08", "1977-12-27 01:51:18",      "dolor" },
	{  7,  7,  76977808.306, "2015-12-14 13:02:11", "1981-03-09 17:12:27",  "explicabo" },
	{  8, 10, 38675408.6017, "2016-02-25 04:28:44", "1983-06-22 15:12:32",    "aliquam" },
	{  9,  8,             0, "2009-07-14 18:26:05", "1982-03-11 15:27:55",   "sapiente" },
	{ 10, 14,       66.4203, "1986-08-26 20:49:27", "2007-09-26 19:19:26",     "veniam" },
	{ 11,  5,      610.7004, "1986-10-31 17:11:29", "2001-05-22 21:02:43", "voluptatum" },
	{ 12, 12,   2001349.459, "2001-06-22 16:01:05", "2007-04-24 03:04:13",        "aut" },
	{ 13,  7,        1.9848, "2004-11-10 02:26:01", "2011-05-29 11:21:59",        "qui" },
	{ 14,  2,          24.7, "2004-12-05 19:43:13", "1983-12-17 12:29:58",    "aliquam" },
	{ 15,  9,      25313.51, "1982-04-07 00:07:43", "1991-06-06 07:26:25",         "ea" }
};

struct T_organisation_types
organisation_types[] = {
	{  "RES", "Research" },
	{ "SPON",  "Sponsor" }
};

struct T_organisations
organisations[] = {
	{  1,  "RES",           "et" },
	{  2,  "RES",         "eius" },
	{  3,  "RES",      "impedit" },
	{  4, "SPON",          "eos" },
	{  5, "SPON",      "tenetur" },
	{  6,  "RES",      "dolorem" },
	{  7,  "RES",       "itaque" },
	{  8, "SPON",      "aperiam" },
	{  9,  "RES",            "a" },
	{ 10, "SPON",     "officiis" },
	{ 11, "SPON",      "eveniet" },
	{ 12,  "RES",       "itaque" },
	{ 13, "SPON",     "voluptas" },
	{ 14,  "RES",          "quo" },
	{ 15, "SPON", "consequuntur" }
};

struct T_project_outcomes
project_outcomes[] = {
	{  4,  "Paper", "None" },
	{  3, "Patent", "None" },
	{  9,  "Paper", "None" },
	{  6,  "Paper", "None" },
	{  9, "Patent", "None" },
	{ 11,  "Paper", "None" },
	{ 14, "Patent", "None" },
	{ 14,  "Paper", "None" },
	{ 13,  "Paper", "None" },
	{ 12, "Patent", "None" },
	{  7,  "Paper", "None" },
	{  5, "Patent", "None" },
	{  7,  "Paper", "None" },
	{ 13,  "Paper", "None" },
	{  7,  "Paper", "None" }
};

struct T_project_staff
project_staff[] = {
	{        0.0,  2,     "leader", "1981-10-04 22:44:50", "1985-05-30 22:26:30", "None" },
	{   674810.0,  5,     "leader", "2003-04-19 15:06:20", "2010-12-08 11:55:36", "None" },
	{      779.0,  2, "researcher", "1981-10-09 21:32:53", "2004-12-16 13:03:36", "None" },
	{     6572.0,  4, "researcher", "1983-02-07 17:55:59", "2004-07-28 03:11:47", "None" },
	{  5353407.0, 15,     "leader", "2004-11-01 23:52:38", "1988-03-04 19:30:05", "None" },
	{  5137097.0,  7, "researcher", "1991-01-11 16:57:50", "1993-06-09 12:44:28", "None" },
	{       29.0,  9, "researcher", "2005-01-13 11:49:48", "1973-07-19 04:51:26", "None" },
	{        3.0,  8, "researcher", "1970-03-25 06:18:11", "1985-12-05 12:00:58", "None" },
	{  3100031.0, 11, "researcher", "1972-01-17 19:42:16", "2016-03-15 00:33:18", "None" },
	{ 49698449.0,  1,     "leader", "1970-04-06 15:50:21", "1983-03-19 16:06:31", "None" },
	{       45.0, 11, "researcher", "2000-08-28 11:49:17", "2007-02-02 17:26:02", "None" },
	{       37.0,  5, "researcher", "1989-04-24 23:51:54", "2002-03-19 18:00:36", "None" },
	{  6065505.0,  3,     "leader", "1999-10-21 22:07:15", "2008-09-25 20:06:28", "None" },
	{       56.0,  1,     "leader", "1970-01-02 15:35:05", "1985-09-22 09:06:08", "None" },
	{ 13739108.0,  2, "researcher", "1973-12-12 11:46:28", "1971-07-19 22:49:05", "None" }
};

struct T_projects
projects[] = {
	{  1, 15,       "porro" },
	{  2, 11,          "et" },
	{  3,  7,        "sint" },
	{  4,  4,  "doloremque" },
	{  5, 11,         "vel" },
	{  6, 10,    "deserunt" },
	{  7,  3,    "deleniti" },
	{  8,  1,          "ad" },
	{  9,  4,         "sed" },
	{ 10,  4, "consectetur" },
	{ 11, 13,     "impedit" },
	{ 12, 12,       "omnis" },
	{ 13,  3,         "non" },
	{ 14,  1,      "beatae" },
	{ 15,  5,     "dolorem" }
};

struct T_research_outcomes
research_outcomes[] = {
	{  "Paper", "Published Research Paper" },
	{ "Patent",          "Research Patent" }
};

struct T_research_staff
research_staff[] = {
	{  1,  1,          "quo" },
	{  2,  4,          "est" },
	{  3,  5,   "aspernatur" },
	{  4,  3,        "dolor" },
	{  5,  2,    "doloribus" },
	{  6,  5,  "consequatur" },
	{  7,  3,        "animi" },
	{  8,  5,  "consequatur" },
	{  9,  6,         "sint" },
	{ 10,  8,         "iure" },
	{ 11,  9, "voluptatibus" },
	{ 12, 10,        "nulla" },
	{ 13,  2,           "ab" },
	{ 14,  3,    "accusamus" },
	{ 15,  2,        "dicta" }
};

struct T_staff_roles
staff_roles[] = {
	{     "leader",     "Project Leader" },
	{ "researcher", "Project Researcher" }
};

struct T_tasks
tasks[] = {
	{  1,  1, "a", "None" },
	{  2,  2, "b", "None" },
	{  3,  3, "c", "None" },
	{  4,  4, "q", "None" },
	{  5,  5, "w", "None" },
	{  6,  6, "e", "None" },
	{  7,  7, "r", "None" },
	{  8,  8, "t", "None" },
	{  9,  9, "y", "None" },
	{ 10, 10, "u", "None" },
	{ 11, 11, "i", "None" },
	{ 12, 12, "m", "None" },
	{ 13, 13, "n", "None" },
	{ 14, 14, "o", "None" },
	{ 15, 15, "p", "None" }
};

#endif