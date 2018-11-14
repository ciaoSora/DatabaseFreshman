/*
Database "formula_1" contains tables:
	circuits
	constructor_results
	constructor_standings
	constructors
	driver_standings
	drivers
	laptimes
	pitstops
	qualifying
	races
	results
	seasons
	status
*/

#ifndef FORMULA_1
#define FORMULA_1

struct T_circuits {
	double circuit_id;
	char circuit_reference[0];
	char name[0];
	char location[0];
	char country[0];
	double latitude;
	double longitude;
	double altitude;
	char url[0];
};

struct T_constructor_results {
	double constructor_results_id;
	double race_id;	// --> races.race_id
	double constructor_id;	// --> constructors.constructor_id
	double points;
	double status;
};

struct T_constructor_standings {
	double constructor_standings_id;
	double race_id;	// --> races.race_id
	double constructor_id;	// --> constructors.constructor_id
	double points;
	double position;
	char position_text[0];
	double wins;
};

struct T_constructors {
	double constructor_id;
	char constructor_reference[0];
	char name[0];
	char nationality[0];
	char url[0];
};

struct T_driver_standings {
	double driver_standings_id;
	double race_id;	// --> races.race_id
	double driver_id;	// --> drivers.driver_id
	double points;
	double position;
	char position_text[0];
	double wins;
};

struct T_drivers {
	double driver_id;
	char driver_reference[0];
	double number;
	char code[0];
	char forename[0];
	char surname[0];
	char dob[0];
	char nationality[0];
	char url[0];
};

struct T_laptimes {
	double race_id;	// --> races.race_id
	double driver_id;	// --> drivers.driver_id
	double lap;
	double position;
	char time[0];
	double milliseconds;
};

struct T_pitstops {
	double race_id;	// --> races.race_id
	double driver_id;	// --> drivers.driver_id
	double stop;
	double lap;
	char time[0];
	char duration[0];
	double milliseconds;
};

struct T_qualifying {
	double qualify_id;
	double race_id;	// --> races.race_id
	double driver_id;	// --> drivers.driver_id
	double constructor_id;	// --> constructors.constructor_id
	double number;
	double position;
	char q1[0];
	char q2[0];
	char q3[0];
};

struct T_races {
	double race_id;
	double year;
	double round;
	double circuit_id;	// --> circuits.circuit_id
	char name[0];
	char date[0];
	char time[0];
	char url[0];
};

struct T_results {
	double result_id;
	double race_id;	// --> races.race_id
	double driver_id;	// --> drivers.driver_id
	double constructor_id;	// --> constructors.constructor_id
	double number;
	double grid;
	double position;
	char position_text[0];
	double position_order;
	double points;
	double laps;
	char time[0];
	double milliseconds;
	double fastest_lap;
	double rank;
	char fastest_lap_time[0];
	char fastest_lap_speed[0];
	double status_id;
};

struct T_seasons {
	double year;
	char url[0];
};

struct T_status {
	double status_id;
	char status[0];
};

struct T_circuits
circuits[] = {
};

struct T_constructor_results
constructor_results[] = {
};

struct T_constructor_standings
constructor_standings[] = {
};

struct T_constructors
constructors[] = {
};

struct T_driver_standings
driver_standings[] = {
};

struct T_drivers
drivers[] = {
};

struct T_laptimes
laptimes[] = {
};

struct T_pitstops
pitstops[] = {
};

struct T_qualifying
qualifying[] = {
};

struct T_races
races[] = {
};

struct T_results
results[] = {
};

struct T_seasons
seasons[] = {
};

struct T_status
status[] = {
};

#endif