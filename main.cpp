/*
Author(s): 
1. Wu Hanbo
2. 
3.
4.
5.
UID(s): 
1. 3035834876
2. 
3.
4.
5.
Project: 
<BitTeenLife>
Description: 
A game that parodies the mobile game BitLife, for ages [13, 36]
CS Academy Server tested on: 
<academy11>
How to play:
1. Go to shell terminal
2. Type 'make play'
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <iomanip>
#include "Show.h"
#include "Stats_control.h"
#include "major year.h"
#include "minor year.h"

using namespace std;

// declaration and initialization of arrays containing events (ages 14-17)
string events_14_to_17[7] = {
"aaaaaa"
"bbbbbbbb",
"cccccccccc",
"cccccccccccc",
"dddddddddd",
"eeeeeeeeeeeee",
"xxxxxxxxxxxxxxxx",
};

// declaration and initialization of arrays containing events (age 20-23)
string events_20_to_23[7] = {
"aaaaaax",
"bbbbbbx",
"ccccccx",
"ddddddx",
"eeeeeex",
"ffffffx",
"ttttttx",
};

// declaration and initialization of arrays containing events (age 26-29)
string events_26_to_29[7] = {
"aaaaaay",
"bbbbbby",
"ccccccy",
"ddddddy",
"eeeeeey",
"ffffffy"
"tttttty"
};

// declaration and initialization of arrays containing events (age 32-34)
string events_32_to_44[7] = {
"aaaaaau",
"bbbbbbu",
"ccccccu",
"ddddddu",
"eeeeeeu",
"ffffffu"
"ttttttu"
};
******** 这个note我不知道还要不要
// NOTE: functions that print stuff are defined here as they involve manipulating the global arrays above 
*******

/*
FUNCTION: prints choice-based events for ages 14-17
INPUT(s): 
1. pass-by-reference player stats
2. pass-by-reference output file stream (for saving game progress in temporary file)
OUTPUT(s): 
1. a random event for ages 14-17
*/
void printEvents14_17( Stats &s, ofstream & fout ) {
	cout << endl;
	cout << "[ Random Event ]";
	fout << "[ Random Event ]" << endl;
	cout << endl;

	int selection;

	while ( true ) {
		selection = rand() % 7;
		if ( events_14_to_17[selection] != "Taken" ) {
			cout << events_14_to_17[selection] << endl;

			// saves game progress in temporary file
			fout << events_14_to_17[selection];
			
      // changes the element to "Taken" so the same event won't be outputted twice
			events_14_to_17[selection] = "Taken";

			break;
		}
	}

	resultsEvents14_to_17( selection, s, fout );

	return;
}


/*
FUNCTION: prints choice-based events for ages 20-23
INPUT(s): 
1. pass-by-reference player stats
2. pass-by-reference output file stream (for saving game progress in temporary file)
OUTPUT(s): 
1. a random event for ages 20-23
*/
void printEvents20_23( Stats &s, ofstream & fout ) {
	cout << endl;
	cout << "[ Random Event ]";
	fout << "[ Random Event ]" << endl;
	cout << endl;

	int selection;

	while ( true ) {
		selection = rand() % 7;
		if ( events_20_to_23[selection] != "Taken" ) {
			cout << events_20_to_23[selection] << endl;

			// saves game progress in temporary file
			fout << events_20_to_23[selection];
			
      // changes the element to "Taken" so the same event won't be outputted twice
			events_20_to_23[selection] = "Taken";

			break;
		}
	}

	resultsEvents20_to_23( selection, s, fout );

	return;
}

/*
FUNCTION: prints choice-based events for ages 26-29
INPUT(s): 
1. pass-by-reference player stats
2. pass-by-reference output file stream (for saving game progress in temporary file)
OUTPUT(s): 
1. a random event for ages 26-29
*/
void printEvents26_29( Stats &s, ofstream & fout ) {
	cout << endl;
	cout << "[ Random Event ]";
	fout << "[ Random Event ]" << endl;
	cout << endl;

	int selection;

	while ( true ) {
		selection = rand() % 7;
		if ( events_26_to_29[selection] != "Taken" ) {
			cout << events_26_to_29[selection] << endl;

			// saves game progress in temporary file
			fout << events_26_to_29[selection];
			
      // changes the element to "Taken" so the same event won't be outputted twice
			events_26_to_29[selection] = "Taken";

			break;
		}
	}

	resultsEvents26_to_29( selection, s, fout );

	return;
}

/*
FUNCTION: prints choice-based events for ages 32-35
INPUT(s): 
1. pass-by-reference player stats
2. pass-by-reference output file stream (for saving game progress in temporary file)
OUTPUT(s): 
1. a random event for ages 32-35
*/
void printEvents32_35( Stats &s, ofstream & fout ) {
	cout << endl;
	cout << "[ Random Event ]";
	fout << "[ Random Event ]" << endl;
	cout << endl;

	int selection;

	while ( true ) {
		selection = rand() % 7;
		if ( events_32_to_44[selection] != "Taken" ) {
			cout << events_32_to_35[selection] << endl;

			// saves game progress in temporary file
			fout << events_32_to_35[selection];
			
      // changes the element to "Taken" so the same event won't be outputted twice
			events_32_to_35[selection] = "Taken";

			break;
		}
	}

	resultsEvents32_to_35( selection, s, fout );

	return;
}

**************************************************************************以下
/* 
FUNCTION: 
Gives player choice to: 
1. continue game
2. save + quit the game
INPUT(s):
1. pass-by-reference dynamic variable age
2. user-provided file for saving game progress
3. temporary file for saving game progress temporarily
4. player stats
5. player name
OUTPUT(s):
1. Prompts player to choose between:
	a) continue
	b) save and quit 
RETURN VALUE:
1. bool variable indicating player's choice to continue / quit game.
*/
bool growUpOrQuit( int * &age, string filename, string tempfile, Stats player, string name ) {
	// declaration of string and bool variables for storing user choice
  string truefalse; 
	bool choice; 

	//prompt user for choice
  cout << "You're all done for this year. Grow up or quit?" << endl;
  cout << "Enter:" << endl << "<1> grow up" << endl << "<2> save and quit game" << endl;

	// store user choice in string variable
  cin >> truefalse;

	// continue playing
  if ( truefalse == "1" ) {
		// increment age and store user choice
    * age += 1; 
		choice = true; 
  }

	// save and quit game
	else if ( truefalse == "2" ) {
		// increment age and store user choice
		* age += 1;
		choice = false;
		// declare ofstream object for copying game progress in temporary file <tempfile> to user-provided file <filename>
		ofstream save; 
		save.open( filename.c_str() );
		if ( save.fail() ) {
			cout << "Error opening file for saving!" << endl;
			exit( 1 );
		}

		// saves player name, age, and stats in the first 5 lines of the file (purpose: for loading game)
		save << "[ FILE I/O INFORMATION ]" << endl;
		save << name << endl;
		save << * age << endl;
		save << player.health << endl;
		save << player.money << endl;
		save << player.happiness << endl << endl;

		// declare ifstream object for reading game progress in temporary file <tempfile> 
		ifstream copy;
		copy.open( tempfile.c_str() );
		if ( copy.fail() ) {
			cout << "Error opening file for copying!" << endl;
			exit( 1 );
		}

		// copy game progress in <tempfile> to <filename> line by line
		save << "[ GAME PROGRESS ]" << endl;
		string linecopy;
		while( getline( copy, linecopy ) ) {
			save << linecopy << endl;
		}
			
		// close files 
		save.close();
		copy.close();
  }

	return choice;
}

int main() {
  // print out game to-knows 
  cout << "Welcome to BitTeenLife, a short parody of BitLife! " << endl; 
  cout << "For optimal experience, play with your terminal maximized to Fullscreen!" << endl;
  cout << "Various assumptions on input:" << endl;
  cout << "1. All inputs must be VALID" << endl;
  cout << "2. Name must be a SINGLE word" << endl << endl;

	srand( time( NULL ) ); // initiates the random seed
	string name; // declare string variable for player name
	Stats player; // declare struct variable for player stats
	int * age = new int( 0 ); // declare and initialize dynamic variable for age

	// file I/O requirement 
	ofstream fout; // writes game progress to temporary file
	string newOrLoad; // for storing user choice to load new or previously saved game
	string filename; //for storing name of user-provided file

	// temporary file for writing game progress to
	string tempfile = "tempfile.txt";
	fout.open( tempfile.c_str() );
	if ( fout.fail() ) {
		cout << "Error opening file!" << endl;
		exit( 1 );
	}

	// prompts user for choice to load new or previously saved game
	cout << "Enter:" << endl << "<1> to load new game" << endl << "<2> to load saved game" << endl;
	cin >> newOrLoad;

	// new game 
	if ( newOrLoad == "1" ) {
		cout << "Enter name of .txt file to save game progress: ";
		cin >> filename;

		cout << "Enter your character's name: ";

		// input of name
		cin >> name;
		fout << "Name: " << name << endl; // write to game progress file
		cout << endl;

		// initialization of the struct variable
		player = { 1, 1, 1 };
		printStats( player, name );

		
		string * upgrade = new string;  // initialization of dynamic variable for storing upgrade choice


*************************************以上部分未做修改

		// prompt user for upgrade choice
		cout << "You get to upgrade one of your stats! " << endl;
		cout << "<1> health" << endl << "<2> wealth" << endl << "<3> satisfaction" << endl;

		// facilitates the upgrade of a single stat
		cout << "Enter choice: ";
		cin >> * upgrade;
		if ( * upgrade == "1" ) {
			updateStats( player, 1, 0, 0 );
		}
		else if ( * upgrade == "2" ) {
			updateStats( player, 0, 1, 0 );
		}
		else if ( * upgrade == "3" ) { 
			updateStats( player, 0, 0, 1 );
		}

		delete upgrade; // frees the upgrade dynamic variable

		cout << endl;

		printStats( player , name );

		// initialization of age 
		* age = 13;
	}	

	// load saved game
	else if ( newOrLoad == "2" ) {
		// prompt user for filename to load + save game progress and store it in the previously declared variable <filename>
		cout << "Enter name of .txt file to load game progress: ";
		cin >> filename;

		// declare ifstream object to read file 
		ifstream fin;
		fin.open( filename.c_str() );
		if ( fin.fail() ) {
			cout << "Error opening file!" << endl;
			exit( 1 );
		}

		string resume; // declare string variable for reading lines in file
		int linecount = 0; // declare int variable to track line number
		
		while ( getline( fin, resume ) ) {
			// line 1 contains player name
			if ( linecount == 1 ) {
				name = resume;
			}
			// line 2 contains player age
			else if ( linecount == 2 ) {
				* age = stoi( resume );
			}
			// line 3 contains player health stat
			else if ( linecount == 3 ) {
				player.health = stoi( resume );
			}
			// line 4 contains player wealth stat
			else if ( linecount == 4 ) {
				player.wealth = stoi( resume );
			}
			// line 5 contains player satisfaction stat
			else if ( linecount == 5 ) {
				player.satisfaction = stoi( resume ); 
			}
			// remaining lines contain previous game progress
			else if ( linecount > 6 ) {
				fout << resume << endl;
			}

			linecount++; // increment linecount after reading a line
		}

		fin.close();
	}

  // main structure of the entire game
	while ( * age != 36 ) {
		fout << endl;

		switch ( * age ) {
			case 13:
        cout << "Age: 13" << endl;
        cout << "-------" << endl;

				fout << "Age: 13" << endl;
        fout << "-------" << endl;

				Events13( player, name, fout );
        break;

			case 14:
        cout << "Age: 14" << endl;
        cout << "-------" << endl;

        fout << "Age: 14" << endl;
        fout << "-------" << endl;

        printEvents14_17( player, fout );
        printStats( player, name );
				break;

      case 15:
        cout << "Age: 15" << endl;
        cout << "-------" << endl;

        fout << "Age: 15" << endl;
        fout << "-------" << endl;

        printEvents14_17( player, fout );
        printStats( player, name );		
				break;

      case 16:
        cout << "Age: 16" << endl;
        cout << "-------" << endl;

        fout << "Age: 16" << endl;
        fout << "-------" << endl;		

        printEvents14_17( player, fout );
        printStats( player, name );
				break;

      case 17:
        cout << "Age: 17" << endl;
        cout << "-------" << endl;

        fout << "Age: 17" << endl;
        fout << "-------" << endl;

        printEvents14_17( player, fout );
        printStats( player, name );	
				break;

      case 18:
        cout << "Age: 18" << endl;
        cout << "-------" << endl;
				
        fout << "Age: 18" << endl;
        fout << "-------" << endl;		

				Events18( player, name, fout );
				break;

      case 19:
        cout << "Age: 19" << endl;
        cout << "-------" << endl;

        fout << "Age: 19" << endl;
        fout << "-------" << endl;

        Events19( player, name, fout );
        break;

      case 20:
        cout << "Age: 20" << endl;
        cout << "-------" << endl;

        fout << "Age: 20" << endl;
        fout << "-------" << endl;

        printEvents20_23( player, fout );
        printStats( player, name );
        break;

******************** 我不知道case 21 和 case 23 有什么特殊的 所以21 23 我都没改

      case 21:
        cout << "Age: 21" << endl;
        cout << "-------" << endl;

        fout << "Age: 21" << endl;
        fout << "-------" << endl;

        Events21( player, player.happiness, player.health, player.money, name, fout );
        break;

      case 22:
        cout << "Age: 22" << endl;
        cout << "-------" << endl;

        fout << "Age: 22" << endl;
        fout << "-------" << endl;

        printEvents20_23( player, fout );
        printStats( player, name );	
        break;

      case 23:
        cout << "Age: 23" << endl;
        cout << "-------" << endl;

        fout << "Age: 23" << endl;
        fout << "-------" << endl;

        Events23( player, player.happiness, player.health, player.money, name, fout );
        break;
		
      case 24:
        cout << "Age: 24" << endl;
        cout << "-------" << endl;

        fout << "Age: 24" << endl;
        fout << "-------" << endl;

        Events24( player, name, fout );
        break;      
       
      case 25:
        cout << "Age: 25" << endl;
        cout << "-------" << endl;

        fout << "Age: 25" << endl;
        fout << "-------" << endl;

        Events25( player, name, fout );
        break;

      case 26:
        cout << "Age: 26" << endl;
        cout << "-------" << endl;

        fout << "Age: 26" << endl;
        fout << "-------" << endl;

        printEvents26_29( player, fout );
        printStats( player, name );	
        break;

      case 27:
        cout << "Age: 27" << endl;
        cout << "-------" << endl;

        fout << "Age: 27" << endl;
        fout << "-------" << endl;

        printEvents26_29( player, fout );
        printStats( player, name );	
        break;
      
      case 28:
        cout << "Age: 28" << endl;
        cout << "-------" << endl;

        fout << "Age: 28" << endl;
        fout << "-------" << endl;

        printEvents26_29( player, fout );
        printStats( player, name );	
        break;

      case 29:
        cout << "Age: 29" << endl;
        cout << "-------" << endl;

        fout << "Age: 29" << endl;
        fout << "-------" << endl;

        printEvents26_29( player, fout );
        printStats( player, name );	
        break;

      case 30:
        cout << "Age: 30" << endl;
        cout << "-------" << endl;

        fout << "Age: 30" << endl;
        fout << "-------" << endl;

        Events30( player, name, fout );
        break;

      case 31:
        cout << "Age: 31" << endl;
        cout << "-------" << endl;

        fout << "Age: 31" << endl;
        fout << "-------" << endl;

        Events31( player, name, fout );
        break;

      case 32:
        cout << "Age: 32" << endl;
        cout << "-------" << endl;

        fout << "Age: 32" << endl;
        fout << "-------" << endl;

        printEvents32_35( player, fout );
        printStats( player, name );	
        break;
      
      case 33:
        cout << "Age: 33" << endl;
        cout << "-------" << endl;

        fout << "Age: 33" << endl;
        fout << "-------" << endl;

        printEvents32_35( player, fout );
        printStats( player, name );	
        break;

      case 34:
        cout << "Age: 34" << endl;
        cout << "-------" << endl;

        fout << "Age: 34" << endl;
        fout << "-------" << endl;

        printEvents32_35( player, fout );
        printStats( player, name );	
        break;

      case 35:
        cout << "Age: 35" << endl;
        cout << "-------" << endl;

        fout << "Age: 35" << endl;
        fout << "-------" << endl;

        printEvents32_35( player, fout );
        printStats( player, name );	
        break;

      case 36:
        cout << "Age: 36" << endl;
        cout << "-------" << endl;

        fout << "Age: 36" << endl;
        fout << "-------" << endl;

        Events36( player, name, fout );
        break;

		}
*************************** 因为我知道他原本的 21 23 为什么是不一样的 所以以上可能还要修改




		// call function to determine whether player wants to continue or quit game
		bool continuePlaying = growUpOrQuit( age, filename, tempfile, player, name );

		// save amd quit game procedures
    if ( !continuePlaying ) {
			fout.close(); // close temporary file 
			delete age; // delete age dynamic variable
			return 0; // exit game
		}
  }

  delete age; // delete dynamic variable
	fout.close(); // close temporary file

	// declare ofstream object for copying contents in <tempfile> to <filename>
	ofstream save;
	save.open( filename.c_str() ); // open user-provided file <filename> for saving game progress 
	if ( save.fail() ) {
		cout << "Error opening file for saving!" << endl;
		exit( 1 );
	}

	// declare ifstream object for reading from <tempfile>
	ifstream copy;
	copy.open( tempfile.c_str() ); // open temporary file containing game progress 
	if ( copy.fail() ) {
		cout << "Error opening file for copying!" << endl;
		exit( 1 );
	}

	string linecopy; // string variable for storing file lines while reading <tempfile>
	while( getline( copy, linecopy ) ) {
		save << linecopy << endl; // saves game summary by copying from temporary file
		cout << linecopy << endl; // displays summary of game
	}

	// close all files
	save.close();
	copy.close();

  // calls the final function to output a summary of the game
	printStats( player, name );
  finalFunc( player.health, player.wealth, player.satisfaction );
	
	// informs player that a summary of their game can be viewed in the file they provided
	cout << endl << "To view your game summary, open the <.txt> file you provided at the start of the game!" << endl;

  return 0;
}