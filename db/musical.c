/*
Database "musical" contains tables:
	actor
	musical
*/

#ifndef MUSICAL
#define MUSICAL

struct T_actor {
	double actor_id;
	char name[17];
	double musical_id;	// --> actor.actor_id
	char character[18];
	char duration[27];
	double age;
};

struct T_musical {
	double musical_id;
	char name[25];
	double year;
	char award[17];
	char category[49];
	char nominee[18];
	char result[10];
};

struct T_actor
actor[] = {
	{ 1,      "Ray Meagher", 1,       "Alf Stewart",                      "1988—", 26 },
	{ 2,       "Tom Oliver", 1,     "Lou Carpenter",                "1988, 1992—", 22 },
	{ 3,  "Lynne McGranger", 2,     "Irene Roberts",                      "1993—", 21 },
	{ 4,     "Kate Ritchie", 2,    "Sally Fletcher",            "1988–2008, 2013", 20 },
	{ 5,    "Alan Fletcher", 4,      "Karl Kennedy",                      "1994—", 20 },
	{ 6, "Jackie Woodburne", 6,     "Susan Kennedy",                      "1994—", 20 },
	{ 7,     "Ryan Moloney", 6, "Toadfish Rebecchi",                "1995, 1996—", 18 },
	{ 8,        "Ian Smith", 6,     "Harold Bishop", "1987–1991, 1996–2009, 2011", 17 },
	{ 9,    "Stefan Dennis", 6,     "Paul Robinson",     "1985–1992, 1993, 2004—", 17 }
};

struct T_musical
musical[] = {
	{ 1, "The Phantom of the Opera", 1986,       "Tony Award",                           "Best Book of a Musical",         "Bob Fosse", "Nominated" },
	{ 2,           "Les Misérables", 1986,       "Tony Award", "Best Performance by a Leading Actor in a Musical", "Cleavant Derricks", "Nominated" },
	{ 3,                   "Wicked", 1986,       "Tony Award",                      "Best Direction of a Musical",         "Bob Fosse", "Nominated" },
	{ 4,          "West Side Story", 1986,       "Tony Award",                                "Best Choreography",         "Bob Fosse",       "Won" },
	{ 5,                     "Rent", 1986, "Drama Desk Award",                   "Outstanding Actor in a Musical", "Cleavant Derricks", "Nominated" },
	{ 6,       "The Book of Mormon", 1986, "Drama Desk Award",                "Outstanding Director of a Musical",         "Bob Fosse", "Nominated" },
	{ 7,                  "Chicago", 1986, "Drama Desk Award",                         "Outstanding Choreography",         "Bob Fosse",       "Won" }
};

#endif