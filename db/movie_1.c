/*
Database "movie_1" contains tables:
	movie
	rating
	reviewer
*/

#ifndef MOVIE_1
#define MOVIE_1

struct T_movie {
	double movie_id;
	char title[24];
	double year;
	char director[17];
};

struct T_rating {
	double reviewer_id;	// --> reviewer.reviewer_id
	double movie_id;	// --> movie.movie_id
	double rating_stars;
	char rating_date[11];
};

struct T_reviewer {
	double reviewer_id;
	char name[17];
};

struct T_movie
movie[] = {
	{ 101,      "Gone with the Wind", 1939,   "Victor Fleming" },
	{ 102,               "Star Wars", 1977,     "George Lucas" },
	{ 103,      "The Sound of Music", 1965,      "Robert Wise" },
	{ 104,                    "E.T.", 1982, "Steven Spielberg" },
	{ 105,                 "Titanic", 1997,    "James Cameron" },
	{ 106,              "Snow White", 1937,             "None" },
	{ 107,                  "Avatar", 2009,    "James Cameron" },
	{ 108, "Raiders of the Lost Ark", 1981, "Steven Spielberg" }
};

struct T_rating
rating[] = {
	{ 201, 101, 2, "2011-01-22" },
	{ 201, 101, 4, "2011-01-27" },
	{ 202, 106, 4,       "None" },
	{ 203, 103, 2, "2011-01-20" },
	{ 203, 108, 4, "2011-01-12" },
	{ 203, 108, 2, "2011-01-30" },
	{ 204, 101, 3, "2011-01-09" },
	{ 205, 103, 3, "2011-01-27" },
	{ 205, 104, 2, "2011-01-22" },
	{ 205, 108, 4,       "None" },
	{ 206, 107, 3, "2011-01-15" },
	{ 206, 106, 5, "2011-01-19" },
	{ 207, 107, 5, "2011-01-20" },
	{ 208, 104, 3, "2011-01-02" }
};

struct T_reviewer
reviewer[] = {
	{ 201,   "Sarah Martinez" },
	{ 202,     "Daniel Lewis" },
	{ 203,  "Brittany Harris" },
	{ 204,    "Mike Anderson" },
	{ 205,    "Chris Jackson" },
	{ 206, "Elizabeth Thomas" },
	{ 207,    "James Cameron" },
	{ 208,     "Ashley White" }
};

#endif