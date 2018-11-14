/*
Database "icfp_1" contains tables:
	authors
	authorship_count
	institution
	papers
*/

#ifndef ICFP_1
#define ICFP_1

struct T_authors {
	double author_id;
	char last_name[10];
	char first_name[13];
};

struct T_authorship_count {
	double author_id;	// --> authors.author_id
	double institution_id;	// --> institution.institution_id
	double paper_id;	// --> papers.paper_id
	double author_count;
};

struct T_institution {
	double institution_id;
	char name[27];
	char country[7];
};

struct T_papers {
	double paper_id;
	char title[84];
};

struct T_authors
authors[] = {
	{ 50,   "Gibbons",       "Jeremy" },
	{ 51,     "Hinze",         "Ralf" },
	{ 52,     "James", "Daniel W. H." },
	{ 53,   "Shivers",         "Olin" },
	{ 54,     "Turon",        "Aaron" },
	{ 55,     "Ahmed",         "Amal" },
	{ 56,     "Blume",     "Matthias" },
	{ 57,     "Ohori",      "Atsushi" },
	{ 58,      "Ueno",    "Katsuhiro" },
	{ 59, "Pouillard",      "Nicolas" },
	{ 60,   "Weirich",    "Stephanie" },
	{ 61,    "Yorgey",        "Brent" },
	{ 62,    "Sheard",          "Tim" }
};

struct T_authorship_count
authorship_count[] = {
	{ 50, 1000, 200, 1 },
	{ 51, 1000, 200, 2 },
	{ 51, 1000, 201, 1 },
	{ 52, 1000, 201, 2 },
	{ 53, 1010, 202, 1 },
	{ 54, 1010, 202, 2 },
	{ 55, 1020, 203, 1 },
	{ 56, 1030, 203, 2 },
	{ 57, 1040, 204, 1 },
	{ 58, 1040, 204, 2 },
	{ 59, 1070, 205, 1 },
	{ 60, 1050, 206, 1 },
	{ 61, 1050, 206, 2 },
	{ 62, 1060, 206, 3 }
};

struct T_institution
institution[] = {
	{ 1000,       "University of Oxford",     "UK" },
	{ 1010,    "Northeastern University",    "USA" },
	{ 1020,         "Indiana University",    "USA" },
	{ 1030,                     "Google",    "USA" },
	{ 1040,          "Tohoku University",  "Japan" },
	{ 1050, "University of Pennsylvania",    "USA" },
	{ 1060,  "Portland State University",  "Japan" },
	{ 1070,                      "INRIA", "France" }
};

struct T_papers
papers[] = {
	{ 200,                                     "Just do it: Simple Monadic Equational Reasoning" },
	{ 201, "Proving the Unique Fixed-Point Principle Correct: An Adventure with Category Theory" },
	{ 202,                          "Functional Pearl: Modular Rollback through Control Logging" },
	{ 203,              "An Equivalence-Preserving CPS Translation via Multi-Language Semantics" },
	{ 204,                        "Making Standard ML a Practical Database Programming Language" },
	{ 205,                                                                  "Nameless, Painless" },
	{ 206,                                                                     "Binders Unbound" }
};

#endif