/*
Database "restaurants" contains tables:
	geographic
	location
	restaurant
*/

#ifndef RESTAURANTS
#define RESTAURANTS

struct T_geographic {
	char city_name[0];
	char county[0];
	char region[0];
};

struct T_location {
	double restaurant_id;	// --> restaurant.id
	double house_number;
	char street_name[0];
	char city_name[0];	// --> geographic.city_name
};

struct T_restaurant {
	double id;
	char name[0];
	char food_type[0];
	char city_name[0];	// --> geographic.city_name
	double rating;
};

struct T_geographic
geographic[] = {
};

struct T_location
location[] = {
};

struct T_restaurant
restaurant[] = {
};

#endif