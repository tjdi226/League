//-------------------------------------------------------------------------
//                                league.cpp
//         Complete the methods where //TO DO: comments are found
//-------------------------------------------------------------------------
#include <iostream>
#include "league.h"
#include <array>
#include <fstream>
using namespace std;


void league::printTeams(){
	string line;
	string id,team,coach;
	
	int i = 0;
	cout << "--------------------TEAMS (4)--------------------" << endl;
	cout << "TID	TEAM			COACH		  " << endl;
	cout << "----   ----------------------- ------------------" << endl;
	ifstream myfile("teams.txt");	
	if(myfile.is_open())
	{
		while(getline(myfile,line))
		{
			cout << line << "	";
			
			
		}
		myfile.close();
	}
	else
	{
		cout << "unable to open file" << endl;	
	}
	cout << endl;

}//printTeams()

/*
//-------------------------------------------------------------------------
//                               askTeamId
//-------------------------------------------------------------------------
team * league::askTeamId(string prompt) {
	string teamId;		// id entered by the user
	team * tid;			// pointer to the found team in the team list

	// print the given question and let the user enter an answer
	cout << prompt;		
	cin >> teamId;

	// TO DO: search the team list by teamId to get a pointer to it (tid)


	while ( ) { // TO DO: repeat while the team ID was NOT found in the team list
		cout << "Invalid entry! Please choose from the list above.\n";
		cout << prompt;
		cin >> teamId;
		// TO DO: repeat the search coded before the beginning of the while loop

	}
	return tid;
} // askTeamId()

//-------------------------------------------------------------------------
//                               addGame
//-------------------------------------------------------------------------
void league::addGame() {
	team * t1, *t2;		// pointers to the 2 teams in the team list
	int pts1, pts2;		// points scored by the 2 teams
	string date;		// date the new game was played
	game g;				// a game object: populate and use to add a game

	// TO DO: print the teams in the team List

	t1 = askTeamId("Enter Team Id for team 1: ");
	t2 = askTeamId("Enter Team Id for team 2: ");
	cout << "Enter points for team 1:  ";
	cin >> pts1;
	cout << "Enter points for team 2:  ";
	cin >> pts2;
	cout << "Enter date (YYYY-MM-DD):  ";
	cin >> date;

	// TO DO: populate the g object with the data entered/searched
	//        and add the game to the game list


	cout << "Game added.\n\n";
} // addGame()

//-------------------------------------------------------------------------
//                               queryTeam
//-------------------------------------------------------------------------
void league::queryTeam() {
	// TO DO: print the teams and use askTeamId to get the pointer to the team
	teams.printTeams();
	team * t = askTeamId("Enter Team Id: ");

	// TO DO: finish the cout using getWhatever from the found team (replace _WHATEVERs)
	cout << "NAME: " << _NAME << "  COACH: " << _COACH
		 << "  WINS: " << _NUM_WINS << "  LOSSES: " 
		 << _NUM_LOSSES << endl;
	
	// TO DO: print the game list for THIS team

} // queryTeam()
*/
//-------------------------------------------------------------------------
//                               getMenuOption
//-------------------------------------------------------------------------
char league::getMenuOption() {
	string userInput;
	char opt;
	
	cout << "\n+------------------------------------------+\n";
	cout << "|             LEAGUE STATS PRO             |\n";
	cout << "|              by Tyler Dishman            |\n";
	cout << "+------------------------------------------+\n";
	cout << "T - List all Teams       Q - Query Team\n";
	cout << "G - List all Games       A - Add Game \n";
	cout << "X - Exit   \n";
	cout << "Enter Menu Option ===> ";
	if (cin.peek() == '\n') cin.ignore();
	getline(cin, userInput);
	opt = toupper(userInput[0]);
	while (opt != 'T' && opt != 'G' && opt != 'Q' && opt != 'A' && opt != 'X') {
		cout << "Invalid entry, enter T,G,Q,A or X!\n";
		cout << "Enter Menu Option ===> ";
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, userInput);
		opt = toupper(userInput[0]);
	}
	return opt;
} // getMenuOption()

//-------------------------------------------------------------------------
//                               go - the "main"
//-------------------------------------------------------------------------
void league::go() {
	//-------------------------------------------------------------
	// TO DO: read the teams and games from input files	
	//team *t1 = new team();
	//t1->setId("UK")
	/*string line;
	int i = 0;
	ifstream myfile("teams.txt");	
	if(myfile.is_open())
	{
		while(getline(myfile,line))
		{
			cout << line << endl;
			
		}
		myfile.close();
	}
	else
	{
		cout << "unable to open file" << endl;	
	}
        cout << endl;
	ifstream myfile2("games.txt");	
	if(myfile2.is_open())
	{
		while(getline(myfile2,line))
		{
			cout << line << endl;
		}
		myfile2.close();
	}
	else
	{
		cout << "unable to open file" << endl;	
	}
	cout << endl;*/
	//---------------------------------------------------
	cout << "testing 1 2 3..." << endl;	
		
	char opt = '?';
	
	while (opt != 'X') {
		opt = getMenuOption();
		switch (opt) {
		case 'T': printTeams(); break;//teams.printTeams(); break;
		case 'G': break;//games.printGames(NULL); break; // NULL means "all games"
		case 'A': break;//addGame(); break;
		case 'Q': break;//queryTeam(); break;
		case 'X': break;//games.writeGames(); break;
		}
	}
} // go()
