/*
Database "medicine_enzyme_interaction" contains tables:
	enzyme
	medicine
	medicine_enzyme_interaction
*/

#ifndef MEDICINE_ENZYME_INTERACTION
#define MEDICINE_ENZYME_INTERACTION

struct T_enzyme {
	double id;
	char name[35];
	char location[14];
	char product[23];
	char chromosome[14];
	double omim;
	char porphyria[36];
};

struct T_medicine {
	double id;
	char name[13];
	char trade_name[10];
	char fda_approved[4];
};

struct T_medicine_enzyme_interaction {
	double enzyme_id;	// --> enzyme.id
	double medicine_id;	// --> medicine.id
	char interaction_type[10];
};

struct T_enzyme
enzyme[] = {
	{ 1,                       "ALA synthase", "Mitochondrion",  "δ-Aminolevulinic acid",        "3p21.1", 125290,                                "none" },
	{ 2,                    "ALA dehydratase",       "Cytosol",        "Porphobilinogen",          "9q34", 125270,          "ALA-Dehydratase deficiency" },
	{ 3,                      "PBG deaminase",       "Cytosol",   "Hydroxymethyl bilane",       "11q23.3", 176000,        "acute intermittent porphyria" },
	{ 4,      "Uroporphyrinogen III synthase",       "Cytosol",   "Uroporphyrinogen III", "10q25.2-q26.3", 606938, "congenital erythropoietic porphyria" },
	{ 5, "Uroporphyrinogen III decarboxylase",       "Cytosol", "Coproporphyrinogen III",          "1p34", 176100,             "porphyria cutanea tarda" },
	{ 6,     "Coproporphyrinogen III oxidase", "Mitochondrion",  "Protoporphyrinogen IX",          "3q12", 121300,                      "coproporphyria" },
	{ 7,         "Protoporphyrinogen oxidase", "Mitochondrion",      "Protoporphyrin IX",          "1q22", 600923,                 "variegate porphyria" },
	{ 8,                     "Ferrochelatase", "Mitochondrion",                   "Heme",       "18q21.3", 177000,       "erythropoietic protoporphyria" }
};

struct T_medicine
medicine[] = {
	{  1,  "Amisulpride",    "Solian",  "No" },
	{  2, "Aripiprazole",   "Abilify", "Yes" },
	{  3,    "Asenapine",   "Saphris", "Yes" },
	{  4,  "Blonanserin",   "Lonasen",  "No" },
	{  5, "Carpipramine",  "Prazinil",  "No" },
	{  6, "Clocapramine", "Clofekton",  "No" },
	{  7,    "Clozapine",  "Clozaril", "Yes" },
	{  8,  "Iloperidone",    "Fanapt", "Yes" },
	{  9,   "Lurasidone",    "Latuda", "Yes" },
	{ 10,    "Melperone",   "Buronil",  "No" },
	{ 11,  "Mosapramine",    "Cremin",  "No" },
	{ 12,   "Olanzapine",   "Zyprexa", "Yes" },
	{ 13, "Paliperidone",    "Invega", "Yes" },
	{ 14,  "Perospirone",    "Lullan",  "No" },
	{ 15,   "Quetiapine",  "Seroquel", "Yes" },
	{ 16,  "Remoxipride",    "Roxiam",  "No" },
	{ 17,  "Risperidone", "Risperdal", "Yes" },
	{ 18,   "Sertindole", "Serdolect",  "No" },
	{ 19,    "Sulpiride",  "Sulpirid",  "No" },
	{ 20,  "Ziprasidone",    "Geodon", "Yes" },
	{ 21,     "Zotepine",  "Nipolept",  "No" }
};

struct T_medicine_enzyme_interaction
medicine_enzyme_interaction[] = {
	{ 1,  1, "inhibitor" },
	{ 1,  2, "inhibitor" },
	{ 1,  3, "inhibitor" },
	{ 1,  4, "inhibitor" },
	{ 2,  2, "inhibitor" },
	{ 2,  3, "inhibitor" },
	{ 2,  5, "inhibitor" },
	{ 2,  6, "inhibitor" },
	{ 2,  7, "inhibitor" },
	{ 2,  8, "inhibitor" },
	{ 3,  2, "inhibitor" },
	{ 4, 13, "activitor" },
	{ 4,  3, "activitor" },
	{ 3,  8, "activitor" },
	{ 3,  9, "activitor" },
	{ 4, 10, "activitor" },
	{ 5, 20, "activitor" },
	{ 5, 19, "activitor" },
	{ 6, 20, "activitor" }
};

#endif