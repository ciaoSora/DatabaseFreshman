/*
Database "cre_Doc_Tracking_DB" contains tables:
	all_documents
	document_locations
	documents_to_be_destroyed
	employees
	reference_calendar
	reference_document_types
	reference_locations
	roles
*/

#ifndef CRE_DOC_TRACKING_DB
#define CRE_DOC_TRACKING_DB

struct T_all_documents {
	double document_id;
	char date_stored[20];	// --> reference_calendar.calendar_date
	char document_type_code[3];	// --> reference_document_types.document_type_code
	char document_name[30];
	char document_description[5];
	char other_details[5];
};

struct T_document_locations {
	double document_id;	// --> all_documents.document_id
	char location_code[2];	// --> reference_locations.location_code
	char date_in_location_from[20];	// --> reference_calendar.calendar_date
	char date_in_locaton_to[20];	// --> reference_calendar.calendar_date
};

struct T_documents_to_be_destroyed {
	double document_id;	// --> all_documents.document_id
	double destruction_authorised_by_employee_id;	// --> employees.employee_id
	double destroyed_by_employee_id;	// --> employees.employee_id
	char planned_destruction_date[20];	// --> reference_calendar.calendar_date
	char actual_destruction_date[20];	// --> reference_calendar.calendar_date
	char other_details[5];
};

struct T_employees {
	double employee_id;
	char role_code[3];	// --> roles.role_code
	char employee_name[10];
	char gender_mfu[2];
	char date_of_birth[20];
	char other_details[5];
};

struct T_reference_calendar {
	char calendar_date[20];
	double day_number;
};

struct T_reference_document_types {
	char document_type_code[3];
	char document_type_name[7];
	char document_type_description[1];
};

struct T_reference_locations {
	char location_code[2];
	char location_name[10];
	char location_description[1];
};

struct T_roles {
	char role_code[3];
	char role_name[15];
	char role_description[214];
};

struct T_all_documents
all_documents[] = {
	{   7, "1976-06-15 03:40:06", "CV",                      "Robin CV", "None", "None" },
	{  11, "1986-10-14 17:53:39", "CV",                      "Marry CV", "None", "None" },
	{  25, "2008-06-08 12:45:38", "BK", "One hundred years of solitude", "None", "None" },
	{  39, "2012-07-03 09:48:46", "BK",            "How to read a book", "None", "None" },
	{  72, "2012-07-03 09:48:46", "CV",                       "Alan CV", "None", "None" },
	{  81, "1995-01-01 03:52:11", "BK",                     "Hua Mulan", "None", "None" },
	{  99, "2008-06-08 12:45:38", "CV",                       "Leon CV", "None", "None" },
	{ 111, "1987-11-05 06:11:22", "PR",      "Learning features of CNN", "None", "None" },
	{ 119, "2008-06-08 12:45:38", "RV",       "Marriage and population", "None", "None" },
	{ 120, "1997-03-10 15:24:00", "RV",               "Society and tax", "None", "None" },
	{ 166, "1997-03-10 15:24:00", "PR",  "Are you talking to a machine", "None", "None" },
	{ 170, "2009-08-18 03:29:08", "RV",                    "Population", "None", "None" },
	{ 230, "1976-06-15 03:40:06", "CV",                     "Martin CV", "None", "None" },
	{ 252, "1976-06-15 03:40:06", "BK",                        "Summer", "None", "None" },
	{ 260, "1997-03-10 15:24:00", "BK",                   "Cats and me", "None", "None" }
};

struct T_document_locations
document_locations[] = {
	{   7, "e", "2017-01-06 23:17:22", "2008-06-08 12:45:38" },
	{  11, "x", "2017-01-06 23:17:22", "2012-07-03 09:48:46" },
	{  81, "c", "1972-03-31 09:47:22", "1987-11-05 06:11:22" },
	{  81, "c", "2017-01-06 23:17:22", "2010-11-26 19:22:50" },
	{  81, "x", "2008-06-08 12:45:38", "1976-06-15 03:40:06" },
	{ 111, "x", "1986-10-14 17:53:39", "2010-11-26 19:22:50" },
	{ 119, "b", "2017-01-06 23:17:22", "1995-01-01 03:52:11" },
	{ 166, "b", "1985-05-13 12:19:43", "1986-10-14 17:53:39" },
	{ 166, "b", "1986-10-14 17:53:39", "2010-11-26 19:22:50" },
	{ 170, "x", "1997-03-10 15:24:00", "1976-06-15 03:40:06" },
	{ 230, "e", "1972-03-31 09:47:22", "1987-11-05 06:11:22" },
	{ 230, "e", "2010-11-26 19:22:50", "2017-01-06 23:17:22" },
	{ 252, "n", "2017-01-06 23:17:22", "1997-03-10 15:24:00" },
	{ 252, "x", "1972-03-31 09:47:22", "2009-08-18 03:29:08" },
	{ 260, "e", "2009-08-18 03:29:08", "1986-10-14 17:53:39" }
};

struct T_documents_to_be_destroyed
documents_to_be_destroyed[] = {
	{   7, 156, 138, "1988-02-01 14:41:52", "2017-01-06 23:17:22", "None" },
	{  11,  55, 173, "2010-11-26 19:22:50", "1986-10-14 17:53:39", "None" },
	{  25, 183, 156, "2009-08-18 03:29:08", "1995-01-01 03:52:11", "None" },
	{  39, 183, 136, "1976-06-15 03:40:06", "2009-08-18 03:29:08", "None" },
	{  99,  55,  99, "2017-01-06 23:17:22", "1986-10-14 17:53:39", "None" },
	{ 111,  38, 173, "1972-03-31 09:47:22", "2009-08-18 03:29:08", "None" },
	{ 120, 183, 173, "1972-03-31 09:47:22", "1995-01-01 03:52:11", "None" },
	{ 166, 156,  38, "1987-11-05 06:11:22", "2012-07-03 09:48:46", "None" },
	{ 170, 123, 136, "2017-01-06 23:17:22", "1988-02-01 14:41:52", "None" },
	{ 252,  30,  55, "1972-03-31 09:47:22", "1985-05-13 12:19:43", "None" },
	{ 260,  55,  99, "2017-01-06 23:17:22", "2017-01-06 23:17:22", "None" }
};

struct T_employees
employees[] = {
	{  25, "HR",       "Leo",  "", "1973-02-15 17:16:00", "None" },
	{  30, "MG",      "Ebba",  "", "1979-09-20 12:50:15", "None" },
	{  38, "ED", "Stephanie", "1", "2012-03-30 23:02:28", "None" },
	{  55, "ED",    "Harley",  "", "1972-02-18 11:53:30", "None" },
	{  57, "ED",    "Armani",  "", "1988-12-08 06:13:33", "None" },
	{  71, "ED",    "Gussie",  "", "1973-04-04 21:41:22", "None" },
	{  99, "ED",  "Izabella", "1", "1977-07-04 16:25:21", "None" },
	{ 123, "PT",      "Hugh",  "", "2010-03-15 00:17:13", "None" },
	{ 136, "ED",    "Mallie",  "", "1980-12-11 20:28:20", "None" },
	{ 138, "ED",  "Beatrice", "1", "2013-04-02 23:55:48", "None" },
	{ 156, "PR",     "Diego",  "", "1998-05-30 12:54:10", "None" },
	{ 159, "PR",      "Arno",  "", "2010-06-10 20:36:34", "None" },
	{ 173, "PR",     "Alene", "1", "1980-10-14 12:23:10", "None" },
	{ 181, "PR",     "Ettie", "1", "1988-08-03 00:11:14", "None" },
	{ 183, "PR",   "Jeramie",  "", "1993-08-21 05:22:10", "None" }
};

struct T_reference_calendar
reference_calendar[] = {
	{ "1972-03-31 09:47:22", 5 },
	{ "1976-06-15 03:40:06", 7 },
	{ "1985-05-13 12:19:43", 7 },
	{ "1986-10-14 17:53:39", 1 },
	{ "1987-11-05 06:11:22", 3 },
	{ "1988-02-01 14:41:52", 8 },
	{ "1994-11-15 03:49:54", 9 },
	{ "1995-01-01 03:52:11", 1 },
	{ "1997-03-10 15:24:00", 7 },
	{ "2007-05-28 16:28:48", 2 },
	{ "2008-06-08 12:45:38", 3 },
	{ "2009-08-18 03:29:08", 8 },
	{ "2010-11-26 19:22:50", 7 },
	{ "2012-07-03 09:48:46", 7 },
	{ "2017-01-06 23:17:22", 8 }
};

struct T_reference_document_types
reference_document_types[] = {
	{ "CV",     "CV", "" },
	{ "BK",   "Book", "" },
	{ "PR",  "Paper", "" },
	{ "RV", "Review", "" }
};

struct T_reference_locations
reference_locations[] = {
	{ "b",    "Brazil", "" },
	{ "c",    "Canada", "" },
	{ "e", "Edinburgh", "" },
	{ "n",   "Nanjing", "" },
	{ "x",    "Xiamen", "" }
};

struct T_roles
roles[] = {
	{ "MG",        "Manager",                                                                          "Vero harum corrupti odit ipsa vero et odio. Iste et recusandae temporibus maxime. Magni aspernatur fugit quis explicabo totam esse corrupti." },
	{ "ED",         "Editor",                                                                                                                   "Itaque dolor ut nemo rerum vitae provident. Vel laborum ipsum velit sint. Et est omnis dignissimos." },
	{ "PT",          "Photo",                                                                                                                                   "Aut modi nihil molestias temporibus sit rerum. Sit neque eaque odio omnis incidunt." },
	{ "PR",   "Proof Reader",                               "Ut sed quae eaque mollitia qui hic. Natus ea expedita et odio illum fugiat qui natus. Consequatur velit ut dolorem cum ullam esse deserunt dignissimos. Enim non non rem officiis quis." },
	{ "HR", "Human Resource", "Et totam est quibusdam aspernatur ut. Vitae perferendis eligendi voluptatem molestiae rem ut enim. Ipsum expedita quae earum unde est. Repellendus ut ipsam nihil accusantium sit. Magni accusantium numquam quod et." }
};

#endif