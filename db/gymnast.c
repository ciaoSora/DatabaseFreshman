/*
Database "gymnast" contains tables:
	gymnast
	people
*/

#ifndef GYMNAST
#define GYMNAST

struct T_gymnast {
	double gymnast_id;	// --> people.people_id
	double floor_exercise_points;
	double pommel_horse_points;
	double rings_points;
	double vault_points;
	double parallel_bars_points;
	double horizontal_bar_points;
	double total_points;
};

struct T_people {
	double people_id;
	char name[28];
	double age;
	double height;
	char hometown[27];
};

struct T_gymnast
gymnast[] = {
	{  1, 9.725, 9.737, 9.512, 9.575, 9.762,  9.75, 58.061 },
	{  2,   9.7, 9.625, 9.625,  9.65, 9.587, 9.737, 57.924 },
	{  4, 8.987,  9.75,  9.75,  9.65, 9.787, 9.725, 57.649 },
	{  6, 9.762, 9.325, 9.475, 9.762, 9.562,  9.55, 57.436 },
	{  7, 9.687, 9.675,   9.3, 9.537, 9.725,   9.5, 57.424 },
	{  8,  9.65, 9.712, 9.487, 9.637,   9.5, 9.412, 57.398 },
	{ 10, 9.412, 9.525, 9.712,  9.55, 9.625,  9.55, 57.374 }
};

struct T_people
people[] = {
	{  1,                   "Paul Hamm", 24.0, 1.71,              "Santo Domingo" },
	{  2,     "Lorraine Súarez Carmona", 21.0, 1.75,                      "Bonao" },
	{  3,        "Ashley Pérez Cabrera", 19.0,  1.7,                      "Miami" },
	{  4,    "Elizabeth Quiñónez Aroyo", 20.0, 1.71,              "Santo Domingo" },
	{  5,     "Eve Tatiana Cruz Oviedo", 19.0, 1.72,              "Santo Domingo" },
	{  6,        "Nadia Caba Rodríguez", 22.0, 1.79,              "Santo Domingo" },
	{  7,   "Clary Sermina Delgado Cid", 21.0, 1.75, "Santiago de los Caballeros" },
	{  8,        "Marina Castro Medina", 20.0, 1.76,              "Santo Domingo" },
	{  9,    "Rosa Clarissa Ortíz Melo", 23.0, 1.81,                  "La Romana" },
	{ 10, "Endis de los Santos Álvarez", 24.0, 1.72,             "Los Alcarrizos" }
};

#endif