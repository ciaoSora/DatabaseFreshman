/*
Database "academic" contains tables:
	author
	cite
	conference
	domain
	domain_author
	domain_conference
	domain_journal
	domain_keyword
	domain_publication
	journal
	keyword
	organization
	publication
	publication_keyword
	writes
*/

#ifndef ACADEMIC
#define ACADEMIC

struct T_author {
	double aid;
	char homepage[0];
	char name[0];
	double oid;
};

struct T_cite {
	double cited;	// --> publication.pid
	double citing;	// --> publication.pid
};

struct T_conference {
	double cid;
	char homepage[0];
	char name[0];
};

struct T_domain {
	double did;
	char name[0];
};

struct T_domain_author {
	double aid;	// --> author.aid
	double did;	// --> domain.did
};

struct T_domain_conference {
	double cid;	// --> conference.cid
	double did;	// --> domain.did
};

struct T_domain_journal {
	double did;	// --> domain.did
	double jid;	// --> journal.jid
};

struct T_domain_keyword {
	double did;	// --> domain.did
	double kid;	// --> keyword.kid
};

struct T_domain_publication {
	double did;	// --> domain.did
	double pid;	// --> publication.pid
};

struct T_journal {
	char homepage[0];
	double jid;
	char name[0];
};

struct T_keyword {
	char keyword[0];
	double kid;
};

struct T_organization {
	char continent[0];
	char homepage[0];
	char name[0];
	double oid;
};

struct T_publication {
	char abstract[0];
	char cid[0];	// --> conference.cid
	double citation_num;
	double jid;	// --> journal.jid
	double pid;
	double reference_num;
	char title[0];
	double year;
};

struct T_publication_keyword {
	double pid;	// --> publication.pid
	double kid;	// --> keyword.kid
};

struct T_writes {
	double aid;	// --> author.aid
	double pid;	// --> publication.pid
};

struct T_author
author[] = {
};

struct T_cite
cite[] = {
};

struct T_conference
conference[] = {
};

struct T_domain
domain[] = {
};

struct T_domain_author
domain_author[] = {
};

struct T_domain_conference
domain_conference[] = {
};

struct T_domain_journal
domain_journal[] = {
};

struct T_domain_keyword
domain_keyword[] = {
};

struct T_domain_publication
domain_publication[] = {
};

struct T_journal
journal[] = {
};

struct T_keyword
keyword[] = {
};

struct T_organization
organization[] = {
};

struct T_publication
publication[] = {
};

struct T_publication_keyword
publication_keyword[] = {
};

struct T_writes
writes[] = {
};

#endif