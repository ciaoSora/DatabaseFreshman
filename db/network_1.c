/*
Database "network_1" contains tables:
	friend
	high_schooler
	likes
*/

#ifndef NETWORK_1
#define NETWORK_1

struct T_friend {
	double student_id;	// --> high_schooler.id
	double friend_id;	// --> high_schooler.id
};

struct T_high_schooler {
	double id;
	char name[10];
	double grade;
};

struct T_likes {
	double student_id;	// --> high_schooler.id
	double liked_id;	// --> high_schooler.id
};

struct T_friend
friend[] = {
	{ 1510, 1381 },
	{ 1510, 1689 },
	{ 1689, 1709 },
	{ 1381, 1247 },
	{ 1709, 1247 },
	{ 1689, 1782 },
	{ 1782, 1468 },
	{ 1782, 1316 },
	{ 1782, 1304 },
	{ 1468, 1101 },
	{ 1468, 1641 },
	{ 1101, 1641 },
	{ 1247, 1911 },
	{ 1247, 1501 },
	{ 1911, 1501 },
	{ 1501, 1934 },
	{ 1316, 1934 },
	{ 1934, 1304 },
	{ 1304, 1661 },
	{ 1661, 1025 }
};

struct T_high_schooler
high_schooler[] = {
	{ 1510,    "Jordan",  9 },
	{ 1689,   "Gabriel",  9 },
	{ 1381,   "Tiffany",  9 },
	{ 1709, "Cassandra",  9 },
	{ 1101,     "Haley", 10 },
	{ 1782,    "Andrew", 10 },
	{ 1468,      "Kris", 10 },
	{ 1641,  "Brittany", 10 },
	{ 1247,    "Alexis", 11 },
	{ 1316,    "Austin", 11 },
	{ 1911,   "Gabriel", 11 },
	{ 1501,   "Jessica", 11 },
	{ 1304,    "Jordan", 12 },
	{ 1025,      "John", 12 },
	{ 1934,      "Kyle", 12 },
	{ 1661,     "Logan", 12 }
};

struct T_likes
likes[] = {
	{ 1689, 1709 },
	{ 1709, 1689 },
	{ 1782, 1709 },
	{ 1911, 1247 },
	{ 1247, 1468 },
	{ 1641, 1468 },
	{ 1316, 1304 },
	{ 1501, 1934 },
	{ 1934, 1501 },
	{ 1025, 1101 }
};

#endif