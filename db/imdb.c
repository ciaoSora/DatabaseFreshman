/*
Database "imdb" contains tables:
	actor
	cast
	classification
	company
	copyright
	directed_by
	director
	genre
	keyword
	made_by
	movie
	producer
	tags
	tv_series
	writer
	written_by
*/

#ifndef IMDB
#define IMDB

struct T_actor {
	double aid;
	char gender[0];
	char name[0];
	char nationality[0];
	char birth_city[0];
	double birth_year;
};

struct T_cast {
	double id;
	double msid;	// --> copyright.msid
	double aid;	// --> actor.aid
	double role;
};

struct T_classification {
	double id;
	double msid;	// --> copyright.msid
	double gid;	// --> genre.gid
};

struct T_company {
	double id;
	char name[0];
	char country_code[0];
};

struct T_copyright {
	double id;
	double msid;
	double cid;
};

struct T_directed_by {
	double id;
	double msid;	// --> copyright.msid
	double did;	// --> director.did
};

struct T_director {
	double did;
	char gender[0];
	char name[0];
	char nationality[0];
	char birth_city[0];
	double birth_year;
};

struct T_genre {
	double gid;
	char genre[0];
};

struct T_keyword {
	double id;
	char keyword[0];
};

struct T_made_by {
	double id;
	double msid;	// --> copyright.msid
	double pid;	// --> producer.pid
};

struct T_movie {
	double mid;
	char title[0];
	double release_year;
	char title_aka[0];
	char budget[0];
};

struct T_producer {
	double pid;
	char gender[0];
	char name[0];
	char nationality[0];
	char birth_city[0];
	double birth_year;
};

struct T_tags {
	double id;
	double msid;	// --> copyright.msid
	double kid;	// --> keyword.id
};

struct T_tv_series {
	double sid;
	char title[0];
	double release_year;
	double num_of_seasons;
	double num_of_episodes;
	char title_aka[0];
	char budget[0];
};

struct T_writer {
	double wid;
	char gender[0];
	double name;
	double nationality;
	double num_of_episodes;
	char birth_city[0];
	double birth_year;
};

struct T_written_by {
	double id;
	double msid;	// --> copyright.msid
	double wid;	// --> writer.wid
};

struct T_actor
actor[] = {
};

struct T_cast
cast[] = {
};

struct T_classification
classification[] = {
};

struct T_company
company[] = {
};

struct T_copyright
copyright[] = {
};

struct T_directed_by
directed_by[] = {
};

struct T_director
director[] = {
};

struct T_genre
genre[] = {
};

struct T_keyword
keyword[] = {
};

struct T_made_by
made_by[] = {
};

struct T_movie
movie[] = {
};

struct T_producer
producer[] = {
};

struct T_tags
tags[] = {
};

struct T_tv_series
tv_series[] = {
};

struct T_writer
writer[] = {
};

struct T_written_by
written_by[] = {
};

#endif