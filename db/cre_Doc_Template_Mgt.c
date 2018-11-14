/*
Database "cre_Doc_Template_Mgt" contains tables:
	documents
	paragraphs
	reference_template_types
	templates
*/

#ifndef CRE_DOC_TEMPLATE_MGT
#define CRE_DOC_TEMPLATE_MGT

struct T_documents {
	double document_id;
	double template_id;	// --> templates.template_id
	char document_name[23];
	char document_description[2];
	char other_details[5];
};

struct T_paragraphs {
	double paragraph_id;
	double document_id;	// --> documents.document_id
	char paragraph_text[22];
	char other_details[5];
};

struct T_reference_template_types {
	char template_type_code[4];
	char template_type_description[14];
};

struct T_templates {
	double template_id;
	double version_number;
	char template_type_code[4];	// --> reference_template_types.template_type_code
	char date_effective_from[20];
	char date_effective_to[20];
	char template_details[1];
};

struct T_documents
documents[] = {
	{         0,  7,     "Introduction of OS", "n", "None" },
	{         1, 25,       "Understanding DB", "y", "None" },
	{         3,  6,            "Summer Show", "u", "None" },
	{        76, 20,              "Robbin CV", "y", "None" },
	{        80, 14,          "Welcome to NY", "h", "None" },
	{        82, 11,              "Data base", "w", "None" },
	{      2394, 10,       "Customer reviews", "y", "None" },
	{      3830, 14,           "Do not panic", "k", "None" },
	{     33930,  1, "How Google people work", "z", "None" },
	{     50123, 22,        "Learning French", "r", "None" },
	{    651512, 21,      "How to write a CV", "f", "None" },
	{    801801,  4,     "How to read a book", "w", "None" },
	{   3540024,  8,           "Palm reading", "y", "None" },
	{  16514113, 25,      "A history of Arts", "h", "None" },
	{ 385906526, 11,            "About Korea", "b", "None" }
};

struct T_paragraphs
paragraphs[] = {
	{         7,      2394,                 "Korea", "None" },
	{         9,         3,               "Somalia", "None" },
	{        65,     50123, "Palestinian Territory", "None" },
	{       241,    651512,                "Jersey", "None" },
	{      3708,     33930,                    "UK", "None" },
	{      9946, 385906526,                  "Fiji", "None" },
	{     16615,        80,                 "Japan", "None" },
	{   1104059,      3830,               "Senegal", "None" },
	{ 243399026,    651512,             "Indonesia", "None" },
	{ 280120913,      2394,               "Ukraine", "None" },
	{ 510442723,      2394,                 "Korea", "None" },
	{ 571212310,  16514113,                "Brazil", "None" },
	{ 608931827,        80,            "Micronesia", "None" },
	{ 765713812,  16514113,               "Ireland", "None" },
	{ 946335436,   3540024,      "Papua New Guinea", "None" }
};

struct T_reference_template_types
reference_template_types[] = {
	{ "PPT",  "Presentation" },
	{  "CV",            "CV" },
	{  "AD", "Advertisement" },
	{  "PP",         "Paper" },
	{  "BK",          "Book" }
};

struct T_templates
templates[] = {
	{  0, 5,  "PP", "2005-11-12 07:09:48", "2008-01-05 14:19:28", "" },
	{  1, 9,  "PP", "2010-09-24 01:15:11", "1999-07-08 03:31:04", "" },
	{  4, 4,  "BK", "2002-03-02 14:39:49", "2001-04-18 09:29:52", "" },
	{  6, 2, "PPT", "1975-05-20 22:51:19", "1992-05-02 20:06:11", "" },
	{  7, 8, "PPT", "1993-10-07 02:33:04", "1975-07-16 04:52:10", "" },
	{  8, 3,  "BK", "1983-07-16 21:16:16", "1976-10-28 10:08:50", "" },
	{  9, 2,  "BK", "1997-04-17 08:29:44", "1994-12-07 13:26:23", "" },
	{ 10, 1, "PPT", "2003-06-05 04:03:45", "2007-06-06 06:18:53", "" },
	{ 11, 6,  "BK", "1996-02-04 11:27:24", "1995-09-19 22:27:48", "" },
	{ 14, 7,  "AD", "1975-10-20 02:28:58", "1979-11-04 08:58:39", "" },
	{ 15, 9,  "CV", "1986-12-09 14:51:36", "1993-03-24 14:30:23", "" },
	{ 16, 5,  "CV", "2012-04-05 07:11:42", "1980-05-07 12:15:47", "" },
	{ 18, 5,  "PP", "1984-08-07 13:36:26", "1998-05-12 12:51:29", "" },
	{ 19, 7,  "AD", "1999-06-21 11:10:30", "1974-09-14 06:34:39", "" },
	{ 20, 6,  "BK", "1986-11-14 12:20:18", "2008-08-08 18:36:43", "" },
	{ 21, 9,  "AD", "2002-08-25 13:26:23", "2015-09-06 01:08:44", "" },
	{ 22, 0,  "PP", "2005-02-20 00:31:34", "1989-11-24 19:06:06", "" },
	{ 23, 2,  "BK", "1979-12-24 10:28:16", "2000-10-22 11:57:12", "" },
	{ 24, 8,  "PP", "2008-08-01 13:57:26", "1973-01-12 14:13:34", "" },
	{ 25, 5,  "PP", "1979-10-20 21:23:20", "2006-02-06 23:52:04", "" }
};

#endif