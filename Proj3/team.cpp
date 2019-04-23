//-------------------------------------------------------------------------
//                                league.cpp
//         Complete the methods where //TO DO: comments are found
//-------------------------------------------------------------------------
#include <iostream>
#include "team.h"
#include <array>
#include <fstream>
using namespace std;

void team::setId(string id){
	teamId = id;
}

void team::setName(string n){
	name = n;
}

void team::setCoach(string c){
	coach = c;
}

string team::getId(string id){
	return teamId;
}

string team::getName(string n){
	return name;
}

string team::getCoach(string c){
	return coach;
}
