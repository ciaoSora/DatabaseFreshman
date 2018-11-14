/*
Database "csu_1" contains tables:
	campuses
	csu_fees
	degrees
	discipline_enrollments
	enrollments
	faculty
*/

#ifndef CSU_1
#define CSU_1

struct T_campuses {
	double id;
	char campus[0];
	char location[0];
	char county[0];
	double year;
};

struct T_csu_fees {
	double campus;	// --> campuses.id
	double year;
	double campus_fee;
};

struct T_degrees {
	double year;
	double campus;	// --> campuses.id
	double degrees;
};

struct T_discipline_enrollments {
	double campus;	// --> campuses.id
	double discipline;
	double year;
	double undergraduate;
	double graduate;
};

struct T_enrollments {
	double campus;	// --> campuses.id
	double year;
	double totalenrollment_ay;
	double fte_ay;
};

struct T_faculty {
	double campus;	// --> campuses.id
	double year;
	double faculty;
};

struct T_campuses
campuses[] = {
};

struct T_csu_fees
csu_fees[] = {
};

struct T_degrees
degrees[] = {
};

struct T_discipline_enrollments
discipline_enrollments[] = {
};

struct T_enrollments
enrollments[] = {
};

struct T_faculty
faculty[] = {
};

#endif