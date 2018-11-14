/*
Database "scholar" contains tables:
	author
	cite
	dataset
	journal
	key_phrase
	paper
	paper_dataset
	paper_key_phrase
	venue
	writes
*/

#ifndef SCHOLAR
#define SCHOLAR

struct T_author {
	double author_id;
	char author_name[0];
};

struct T_cite {
	double citing_paper_id;
	char cited_paper_id[0];
};

struct T_dataset {
	double dataset_id;
	char dataset_name[0];
};

struct T_journal {
	double journal_id;
	char journal_name[0];
};

struct T_key_phrase {
	double key_phrase_id;
	char key_phrase_name[0];
};

struct T_paper {
	double paper_id;
	char title[0];
	double venue_id;	// --> author.author_id
	double year;
	double number_of_citing;
	double number_cited_by;
	double journal_id;	// --> journal.journal_id
};

struct T_paper_dataset {
	double paper_id;	// --> paper.paper_id
	double dataset_id;	// --> paper.paper_id
};

struct T_paper_key_phrase {
	double paper_id;
	double key_phrase_id;
};

struct T_venue {
	double venue_id;	// --> paper.paper_id
	double venue_name;	// --> key_phrase.key_phrase_id
};

struct T_writes {
	double paper_id;	// --> paper.paper_id
	double author_id;	// --> cite.citing_paper_id
};

struct T_author
author[] = {
};

struct T_cite
cite[] = {
};

struct T_dataset
dataset[] = {
};

struct T_journal
journal[] = {
};

struct T_key_phrase
key_phrase[] = {
};

struct T_paper
paper[] = {
};

struct T_paper_dataset
paper_dataset[] = {
};

struct T_paper_key_phrase
paper_key_phrase[] = {
};

struct T_venue
venue[] = {
};

struct T_writes
writes[] = {
};

#endif