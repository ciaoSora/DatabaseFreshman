/*
Database "geo" contains tables:
	border_info
	city
	highlow
	lake
	mountain
	river
	state
*/

#ifndef GEO
#define GEO

struct T_border_info {
	char state_name[0];	// --> state.state_name
	char border[0];	// --> state.state_name
};

struct T_city {
	char city_name[0];
	double population;
	char country_name[0];
	char state_name[0];	// --> state.state_name
};

struct T_highlow {
	char state_name[0];	// --> state.state_name
	char highest_elevation[0];
	char lowest_point[0];
	char highest_point[0];
	char lowest_elevation[0];
};

struct T_lake {
	char lake_name[0];
	double area;
	char country_name[0];
	char state_name[0];
};

struct T_mountain {
	char mountain_name[0];
	double mountain_altitude;
	char country_name[0];
	char state_name[0];	// --> state.state_name
};

struct T_river {
	char river_name[0];
	double length;
	char country_name[0];
	char traverse[0];	// --> state.state_name
};

struct T_state {
	char state_name[0];
	double population;
	double area;
	char country_name[0];
	char capital[0];
	double density;
};

struct T_border_info
border_info[] = {
};

struct T_city
city[] = {
};

struct T_highlow
highlow[] = {
};

struct T_lake
lake[] = {
};

struct T_mountain
mountain[] = {
};

struct T_river
river[] = {
};

struct T_state
state[] = {
};

#endif