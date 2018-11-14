/*
Database "music_2" contains tables:
	albums
	band
	instruments
	performance
	songs
	track_lists
	vocals
*/

#ifndef MUSIC_2
#define MUSIC_2

struct T_albums {
	double aid;
	char title[0];
	double year;
	char label[0];
	char type[0];
};

struct T_band {
	double id;
	char first_name[0];
	char last_name[0];
};

struct T_instruments {
	double song_id;	// --> songs.song_id
	double bandmate_id;	// --> band.id
	char instrument[0];
};

struct T_performance {
	double song_id;	// --> songs.song_id
	double bandmate;	// --> band.id
	char stage_position[0];
};

struct T_songs {
	double song_id;
	char title[0];
};

struct T_track_lists {
	double album_id;	// --> albums.aid
	double position;
	double song_id;	// --> songs.song_id
};

struct T_vocals {
	double song_id;	// --> songs.song_id
	double bandmate;	// --> band.id
	char type[0];
};

struct T_albums
albums[] = {
};

struct T_band
band[] = {
};

struct T_instruments
instruments[] = {
};

struct T_performance
performance[] = {
};

struct T_songs
songs[] = {
};

struct T_track_lists
track_lists[] = {
};

struct T_vocals
vocals[] = {
};

#endif