/*
Database "course_teach" contains tables:
	course
	course_arrange
	teacher
*/

#ifndef COURSE_TEACH
#define COURSE_TEACH

struct T_course {
	double course_id;
	char staring_date[7];
	char course[14];
};

struct T_course_arrange {
	double course_id;	// --> course.course_id
	double teacher_id;	// --> teacher.teacher_id
	double grade;
};

struct T_teacher {
	double teacher_id;
	char name[18];
	char age[3];
	char hometown[28];
};

struct T_course
course[] = {
	{  1,  "5 May", "Language Arts" },
	{  2,  "6 May",          "Math" },
	{  3,  "7 May",       "Science" },
	{  4,  "9 May",       "History" },
	{  5, "10 May",         "Bible" },
	{  6, "11 May",     "Geography" },
	{  7, "13 May",        "Sports" },
	{  8, "14 May",        "French" },
	{  9, "15 May",        "Health" },
	{ 10, "17 May",         "Music" }
};

struct T_course_arrange
course_arrange[] = {
	{  2, 5, 1 },
	{  2, 3, 3 },
	{  3, 2, 5 },
	{  4, 6, 7 },
	{  5, 6, 1 },
	{ 10, 7, 4 }
};

struct T_teacher
teacher[] = {
	{ 1,       "Joseph Huts", "32",     "Blackrod Urban District" },
	{ 2,    "Gustaaf Deloor", "29",       "Bolton County Borough" },
	{ 3, "Vicente Carretero", "26", "Farnworth Municipal Borough" },
	{ 4,       "John Deloor", "33",      "Horwich Urban District" },
	{ 5,    "Kearsley Brown", "45",     "Kearsley Urban District" },
	{ 6,       "Anne Walker", "41", "Little Lever Urban District" },
	{ 7,         "Lucy Wong", "39",       "Turton Urban District" }
};

#endif