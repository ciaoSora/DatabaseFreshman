/*
Database "flight_2" contains tables:
	airlines
	airports
	flights
*/

#ifndef FLIGHT_2
#define FLIGHT_2

struct T_airlines {
	double airline_id;
	char airline_name[0];
	char abbreviation[0];
	char country[0];
};

struct T_airports {
	char city[0];
	char airport_code[0];
	char airport_name[0];
	char country[0];
	char country_abbrev[0];
};

struct T_flights {
	double airline;
	double flight_number;
	char source_airport[0];	// --> airports.airport_code
	char destination_airport[0];	// --> airports.airport_code
};

struct T_airlines
airlines[] = {
};

struct T_airports
airports[] = {
};

struct T_flights
flights[] = {
};

#endif