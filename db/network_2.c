/*
Database "network_2" contains tables:
	person
	person_friend
*/

#ifndef NETWORK_2
#define NETWORK_2

struct T_person {
	char name[6];
	double age;
	char city[15];
	char gender[7];
	char job[9];
};

struct T_person_friend {
	char name[6];	// --> person.name
	char friend[6];	// --> person.name
	double year;
};

struct T_person
person[] = {
	{ "Alice", 25,  "new york city", "female",  "student" },
	{   "Bob", 35, "salt lake city",   "male", "engineer" },
	{  "Zach", 45,         "austin",   "male",   "doctor" },
	{   "Dan", 26,        "chicago", "female",  "student" }
};

struct T_person_friend
person_friend[] = {
	{ "Alice",   "Bob", 10 },
	{  "Zach",   "Dan", 12 },
	{   "Bob",  "Zach",  5 },
	{  "Zach", "Alice",  6 }
};

#endif