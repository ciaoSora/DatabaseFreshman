/*
Database "yelp" contains tables:
	business
	category
	checkin
	neighbourhood
	review
	tip
	user
*/

#ifndef YELP
#define YELP

struct T_business {
	double bid;
	char business_id[0];
	char name[0];
	char full_address[0];
	char city[0];
	char latitude[0];
	char longitude[0];
	double review_count;
	double is_open;
	double rating;
	char state[0];
};

struct T_category {
	double id;
	char business_id[0];	// --> business.business_id
	char category_name[0];
};

struct T_checkin {
	double cid;
	char business_id[0];	// --> business.business_id
	double count;
	char day[0];
};

struct T_neighbourhood {
	double id;
	char business_id[0];	// --> business.business_id
	char neighbourhood_name[0];
};

struct T_review {
	double rid;
	char business_id[0];	// --> business.business_id
	char user_id[0];	// --> user.user_id
	double rating;
	char text[0];
	double year;
	char month[0];
};

struct T_tip {
	double tip_id;
	char business_id[0];	// --> business.business_id
	char text[0];
	char user_id[0];	// --> user.user_id
	double likes;
	double year;
	char month[0];
};

struct T_user {
	double uid;
	char user_id[0];
	char name[0];
};

struct T_business
business[] = {
};

struct T_category
category[] = {
};

struct T_checkin
checkin[] = {
};

struct T_neighbourhood
neighbourhood[] = {
};

struct T_review
review[] = {
};

struct T_tip
tip[] = {
};

struct T_user
user[] = {
};

#endif