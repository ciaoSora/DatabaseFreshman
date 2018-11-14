/*
Database "election_representative" contains tables:
	election
	representative
*/

#ifndef ELECTION_REPRESENTATIVE
#define ELECTION_REPRESENTATIVE

struct T_election {
	double election_id;
	double representative_id;	// --> representative.representative_id
	char date[13];
	double votes;
	double vote_percent;
	double seats;
	double place;
};

struct T_representative {
	double representative_id;
	char name[17];
	char state[13];
	char party[11];
	char lifespan[10];
};

struct T_election
election[] = {
	{ 1, 1,    "July 1942",  9423.0, 16.2,  6.0, 3.0 },
	{ 2, 2, "October 1942", 11059.0, 18.5, 10.0, 1.0 },
	{ 3, 4,         "1946", 13049.0, 19.5, 10.0, 2.0 },
	{ 4, 5,         "1949", 14077.0, 19.5,  9.0, 2.0 },
	{ 5, 7,         "1953", 12422.0, 16.0,  7.0, 3.0 }
};

struct T_representative
representative[] = {
	{ 1,       "Dan Quayle",      "Indiana", "Republican",     "1947–" },
	{ 2,      "John Quayle",     "New York", "Democratic", "1868–1930" },
	{ 3,          "Al Quie",    "Minnesota", "Republican",     "1923–" },
	{ 4, "James M. Quigley", "Pennsylvania", "Democratic",     "1918–" },
	{ 5,    "Jimmy Quillen",    "Tennessee", "Republican", "1916–2003" },
	{ 6,       "Jack Quinn",     "New York", "Republican",     "1951–" },
	{ 7,   "James L. Quinn", "Pennsylvania", "Democratic", "1875–1960" }
};

#endif