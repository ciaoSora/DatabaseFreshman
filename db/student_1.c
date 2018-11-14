/*
Database "student_1" contains tables:
	list
	teachers
*/

#ifndef STUDENT_1
#define STUDENT_1

struct T_list {
	char last_name[0];
	char first_name[0];
	double grade;
	double class_room;
};

struct T_teachers {
	char last_name[0];
	char first_name[0];
	double class_room;
};

struct T_list
list[] = {
};

struct T_teachers
teachers[] = {
};

#endif