/*
Database "car_1" contains tables:
	car_makers
	car_names
	cars_data
	continents
	countries
	model_list
*/

#ifndef CAR_1
#define CAR_1

struct T_car_makers {
	double id;
	char maker[0];
	char full_name[0];
	char country[0];	// --> countries.country_id
};

struct T_car_names {
	double make_id;
	char model[0];	// --> model_list.model
	char make[0];
};

struct T_cars_data {
	double id;	// --> car_names.make_id
	char mpg[0];
	double cylinders;
	double edispl;
	char horsepower[0];
	double weight;
	double accelerate;
	double year;
};

struct T_continents {
	double cont_id;
	char continent[0];
};

struct T_countries {
	double country_id;
	char country_name[0];
	double continent;	// --> continents.cont_id
};

struct T_model_list {
	double model_id;
	double maker;	// --> car_makers.id
	char model[0];
};

struct T_car_makers
car_makers[] = {
};

struct T_car_names
car_names[] = {
};

struct T_cars_data
cars_data[] = {
};

struct T_continents
continents[] = {
};

struct T_countries
countries[] = {
};

struct T_model_list
model_list[] = {
};

#endif