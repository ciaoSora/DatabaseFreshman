/*
Database "inn_1" contains tables:
	reservations
	rooms
*/

#ifndef INN_1
#define INN_1

struct T_reservations {
	double code;
	char room[0];	// --> rooms.room_id
	char check_in[0];
	char check_out[0];
	double rate;
	char last_name[0];
	char first_name[0];
	double adults;
	double kids;
};

struct T_rooms {
	char room_id[0];
	char room_name[0];
	double beds;
	char bed_type[0];
	double max_occupancy;
	double base_price;
	char decor[0];
};

struct T_reservations
reservations[] = {
};

struct T_rooms
rooms[] = {
};

#endif