#include <iostream>
#include "league.h"
#include "game.h"
#include "gameList.h"
#include "teamList.h"
#include <string>

#ifndef TEAM_H

#define TEAM_H

using namespace std;

class team
{
private:
	string teamId;
	string name;
	string coach;
	team *next;

public:
	team();   //constructor
	string getId();
	string getName();
	string getCoach();
	void setId(string id);       //done
	void setName(string name);   //done
	void setCoach(string coach); //done
	string getId(string id);
	string getName(string name);
	string getCoach(string coach);
};

#endif /* TEAM_H */
