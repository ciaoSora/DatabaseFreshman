/*
Database "entrepreneur" contains tables:
	entrepreneur
	people
*/

#ifndef ENTREPRENEUR
#define ENTREPRENEUR

struct T_entrepreneur {
	double entrepreneur_id;
	double people_id;	// --> people.people_id
	char company[21];
	double money_requested;
	char investor[17];
};

struct T_people {
	double people_id;
	char name[22];
	double height;
	double weight;
	char date_of_birth[11];
};

struct T_entrepreneur
entrepreneur[] = {
	{ 1, 1,             "Umbrolly", 150000.0, "Duncan Bannatyne" },
	{ 2, 2,           "Grails Ltd", 120000.0,     "Doug Richard" },
	{ 3, 3,           "Le Beanock",  54000.0,   "Rachel Elnaugh" },
	{ 4, 5,               "IV Cam",  50000.0,      "Peter Jones" },
	{ 5, 6,  "Mycorrhizal Systems",  75000.0,  "Simon Woodroffe" },
	{ 6, 8, "Elizabeth Galton Ltd", 110000.0, "Duncan Bannatyne" }
};

struct T_people
people[] = {
	{ 1, "Francesco Postiglione",  1.9, 80.0, "1972-04-29" },
	{ 2,       "Leonardo Binchi", 1.86, 57.0, "1975-08-27" },
	{ 3,    "Fabrizio Buonocore", 1.83, 45.0, "1977-04-28" },
	{ 4,          "Marco Gerini", 1.72, 75.0, "1971-08-05" },
	{ 5,    "Roberto Calcaterra", 1.75, 67.0, "1972-02-06" },
	{ 6,      "Goran Fiorentini", 1.78, 89.0, "1981-11-21" },
	{ 7,      "Alberto Angelini", 1.82, 58.0, "1974-09-28" },
	{ 8,       "Maurizio Felugo", 1.95, 76.0, "1981-03-04" }
};

#endif