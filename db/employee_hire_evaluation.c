/*
Database "employee_hire_evaluation" contains tables:
	employee
	evaluation
	hiring
	shop
*/

#ifndef EMPLOYEE_HIRE_EVALUATION
#define EMPLOYEE_HIRE_EVALUATION

struct T_employee {
	double employee_id;
	char name[16];
	double age;
	char city[10];
};

struct T_evaluation {
	char employee_id[3];	// --> employee.employee_id
	char year_awarded[5];
	double bonus;
};

struct T_hiring {
	double shop_id;	// --> shop.shop_id
	double employee_id;	// --> employee.employee_id
	char start_from[5];
	char is_full_time[2];
};

struct T_shop {
	double shop_id;
	char name[14];
	char location[12];
	char district[23];
	double number_products;
	char manager_name[17];
};

struct T_employee
employee[] = {
	{  1,   "George Chuter", 23,   "Bristol" },
	{  2,       "Lee Mears", 29,      "Bath" },
	{  3,      "Mark Regan", 43,   "Bristol" },
	{  4,    "Jason Hobson", 30,   "Bristol" },
	{  5,       "Tim Payne", 29,     "Wasps" },
	{  6, "Andrew Sheridan", 28,      "Sale" },
	{  7,    "Matt Stevens", 29,      "Bath" },
	{  8,    "Phil Vickery", 40,     "Wasps" },
	{  9, "Steve Borthwick", 32,      "Bath" },
	{ 10,    "Louis Deacon", 36, "Leicester" }
};

struct T_evaluation
evaluation[] = {
	{  "1", "2011", 3000.0 },
	{  "2", "2015", 3200.0 },
	{  "1", "2016", 2900.0 },
	{  "4", "2017", 3200.0 },
	{  "7", "2018", 3200.0 },
	{ "10", "2016", 4000.0 }
};

struct T_hiring
hiring[] = {
	{ 1, 1, "2009", "T" },
	{ 1, 2, "2003", "T" },
	{ 8, 3, "2011", "F" },
	{ 4, 4, "2012", "T" },
	{ 5, 5, "2013", "T" },
	{ 2, 6, "2010", "F" },
	{ 6, 7, "2008", "T" }
};

struct T_shop
shop[] = {
	{ 1,       "FC Haka", "Valkeakoski",         "Tehtaan kenttä",  3516,    "Olli Huttunen" },
	{ 2,           "HJK",    "Helsinki",        "Finnair Stadium", 10770,   "Antti Muurinen" },
	{ 3,      "FC Honka",       "Espoo", "Tapiolan Urheilupuisto",  6000,    "Mika Lehkosuo" },
	{ 4,      "FC Inter",       "Turku",        "Veritas Stadion", 10000,     "Job Dragtsma" },
	{ 5,       "FF Jaro",   "Jakobstad", "Jakobstads Centralplan",  5000, "Mika Laurikainen" },
	{ 6,  "FC KooTeePee",       "Kotka",      "Arto Tolsa Areena",  4780,   "Tommi Kautonen" },
	{ 7,          "KuPS",      "Kuopio",          "Magnum Areena",  3500,    "Kai Nyyssönen" },
	{ 8,      "FC Lahti",       "Lahti",         "Lahden Stadion", 15000,     "Ilkka Mäkelä" },
	{ 9, "IFK Mariehamn",   "Mariehamn",   "Wiklöf Holding Arena",  1600,     "Pekka Lyyski" }
};

#endif