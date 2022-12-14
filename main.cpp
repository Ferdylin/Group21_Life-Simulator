/*
【LiveLaughLove_Simulator】

Student Names & UIDs: 
1. Wu Hanbo 3035834876
2. Chen Huiwen 3035790642
3. Xu Qingluo 3035908108
4. Tang Chengxin 3035845162
5. Lin Junyan 3035750018


Description: 
A life simulator game simulating a players' life for the age of[13 - 36]
CS Academy Server tested on: 
<academy11>

Instructions on starting the game:
1. Save this game file to your computer
2. cd to the correct directory (Make sure to the game files)
2. Type in 'make play'
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <iomanip>
#include "Show.h"
#include "Stats_control.h"
#include "fixedevents.h"
#include "randomevents.h"

using namespace std;

// declaration and initialization of arrays containing events (ages 14-17)
string events_14_to_17[7] = {
	"There is a new video game. Every friend of yours seems so obsessed with it. You find it interesting as well. They constantly ask you to play with them. What will you do?",
	"For the first time in your life, you have a crush on someone. It feels wonderful but you are shy to approach that person. What will you do?",
	"Drama Society is recruiting. You have always wanted to try being an actor and this is a precious opportunity. But you are worried about too much stress of performing a complete play in front of everyone. What will you do?",
	"School trip! Please select your destination...",
	"You are learning how to drive an automatic transmission car. In your driving test you...",
	"BFF movienight!!!",
	"Just got back from the hair salon.",
};

// declaration and initialization of arrays containing events (age 20-23)
string events_20_to_23[7] = {
	"Someone hot in uni wants to go on a date with you. You will...",
	"Your favourite pop star is coming to Hong Kong on her global tour, but the ticket is so expensive. What will you do?",
	"You have a growing passion about music. You have finally decided to pick up a musical instrument from scratch. You have shortlisted several options. Please make the final decision....",
	"Graduation! When the fork in life comes, what will you do?",
	"You got several job offers. Which one will you choose?",
	"You are looking for places to live. Which one will you choose?",
	"One of your distant aunts recently passed away and she left you a generous inheritance. How will you spend this small fortune?",
};

// declaration and initialization of arrays containing events (age 26-29)
string events_26_to_29[7] = {
	"Your relationship partner got tired of you, they think that you’re a workaholic and wanted to break up, what do you do?",
	"You felt that you don’t enjoy what you do anymore, you like the workplace and the people but not the job itself anymore. What are the next steps that you’re going to take?",
	"You got bored so you started making Tik Tok with your friends, after doing some research, you’ve decided to make videos on:",
	"You’ve decided to stop by a coffee shop one night, but later, you realize that Beyonce was at the cashier but struggling to make the payment for her order! What do you do?",
	"Crypto and Web 3 is the new trend now and everyone’s crazy about it. You recently just discovered a new platform for crypto trading and wanted to invest in some crypto assets, what do you do:",
	"For a rare holiday, you choose to:",
	"You found out that your ex was severely injured in a car accident, you guys broke up without conflicts and are still friends. You’re currently very happy in your relationship too but doing something stupid might trigger your partner, you will:",
};

// declaration and initialization of arrays containing events (age 32-35)
string events_32_to_35[7] = {
	"Your career is becoming stable, and you don't need to worry about it, you think:",
	"When the poor child you sponsored grew up, he/she was sent to:",
	"You're tested for high blood pressure and high cholesterol, and you decide:",
	"House prices have risen quite a lot recently and you want to:",
	"When the World Cup starts and you get together with old friends to watch the game, you decide to:",
	"You are walking along a street in Causeway Bay when you are suddenly stopped by a man claiming to be a talent scout who says he thinks you are very talented and wants to tap you as a star and take part in a talent show.",
	"Your spendthrift brother says he has a business problem and needs money to run it urgently and asks you to borrow money, but you don't have much savings of your own, you decide:",
};

/*
FUNCTION: prints choice-based events for ages 14-17
INPUT(s): 
1. pass-by-reference player stats
2. pass-by-reference output file stream (for saving game progress in temporary file)
OUTPUT(s): 
1. a random event for ages 14-17
*/
void showevents14_17( Show &s, ofstream & fout ) {
	
	fout << "[ Random Event ]" << endl;
	
	int selection;

	while ( true ) {
		selection = rand() % 7;
		if ( events_14_to_17[selection] != "Exists" ) {
			cout << "Please enter the choice number when prompted!" << endl;
  			cout << "--------------------------------------------------" << endl;
			cout << "[ Random Event ]" << endl;
			cout << events_14_to_17[selection] << endl;

			// saves game progress in temporary file
			fout << events_14_to_17[selection];
			
      // changes the element to "Exists" so the same event won't be outputted twice
			events_14_to_17[selection] = "Exists";

			break;
		}
	}

	resultsevents14_to_17( selection, s, fout );

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
void showevents20_23( Show &s, ofstream & fout ) {
	
	fout << "[ Random Event ]" << endl;
	
	int selection;

	while ( true ) {
		selection = rand() % 7;
		if ( events_20_to_23[selection] != "Exists" ) {
			cout << "Please enter the choice number when prompted!" << endl;
  			cout << "--------------------------------------------------" << endl;
			cout << "[ Random Event ]" << endl;
			cout << events_20_to_23[selection] << endl;

			// saves game progress in temporary file
			fout << events_20_to_23[selection];
			
      // changes the element to "Exists" so the same event won't be outputted twice
			events_20_to_23[selection] = "Exists";

			break;
		}
	}

	resultsevents20_to_23( selection, s, fout );

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
void showevents26_29( Show &s, ofstream & fout ) {
	
	fout << "[ Random Event ]" << endl;

	int selection;

	while ( true ) {
		selection = rand() % 7;
		if ( events_26_to_29[selection] != "Exists" ) {
			cout << "Please enter the choice number when prompted!" << endl;
  			cout << "--------------------------------------------------" << endl;
			cout << "[ Random Event ]" << endl;
			cout << events_26_to_29[selection] << endl;

			// saves game progress in temporary file
			fout << events_26_to_29[selection];
			
      // changes the element to "Exists" so the same event won't be outputted twice
			events_26_to_29[selection] = "Exists";

			break;
		}
	}

	resultsevents26_to_29( selection, s, fout );

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
void showevents32_35( Show &s, ofstream & fout ) {
	
	fout << "[ Random Event ]" << endl;
	
	int selection;

	while ( true ) {
		selection = rand() % 7;
		if ( events_32_to_35[selection] != "Exists" ) {
			cout << "Please enter the choice number when prompted!" << endl;
  			cout << "--------------------------------------------------" << endl;
			cout << "[ RANDOM EVENTS ]" << endl;
			cout << events_32_to_35[selection] << endl;

			// saves game progress in temporary file
			fout << events_32_to_35[selection];
			
      // changes the element to "Exists" so the same event won't be outputted twice
			events_32_to_35[selection] = "Exists";

			break;
		}
	}

	resultsevents32_to_35( selection, s, fout );

	return;
}

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
bool growUpOrQuit( int * &age, string filename, string tempfile, Show player, string name ) {
	// For the storage of users choices
  string truefalse; 
	bool choice; 

	//Message prompt for player to either proceed with the next year or quit the game
  cout << "You are done with the current age, choose to proceed to the next year or save the game progress: " << endl;
  cout << "1. Proceed to my next age." << endl << "2. Quit and Save my game progress." << endl << "Enter choice: " ;

	// store user input choice in a string variable
  cin >> truefalse;

	// continue playing
  if ( truefalse == "1" ) {
		// inrease age by 1 and store input
	* age += 1; 
	choice = true; 
  }

	// save and quit game
	else if ( truefalse == "2" ) {
		// inrease age by 1 and store input
		* age += 1;
		choice = false;
		// define ofstream object for transferring game progress from tempfile> to user-supplied filename
		ofstream save; 
		save.open( filename.c_str() );
		if ( save.fail() ) {
			cout << "Error opening file for saving!" << endl;
			exit( 1 );
		}

		// the first five lines of the file are used to save the player's name, age, and stats.
		save << "[ FILE I/O INFORMATION ]" << endl;
		save << name << endl;
		save << * age << endl;
		save << player.health << endl;
		save << player.wealth << endl;
		save << player.satisfaction << endl << endl;

		// declare an object of type ifstream for reading game progress from the temporary file referred to as tempfile.
		ifstream copy;
		copy.open( tempfile.c_str() );
		if ( copy.fail() ) {
			cout << "Error opening file for copying!" << endl;
			exit( 1 );
		}

		// The progress made in the game should be copied line by line from the 'tempfile' to the 'filename'.
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

//general user guidline (message prompt will be provided below:
int main() {
	
	//cover picture
	cout << ".____    .__" << endl<<
    "|    |   |__|__  __ ____" <<endl<<
    "|    |   |  \\  \\/ // __ \\" <<endl<<
    "|    |___|  |\\   /\\  ___/" <<endl<<
    "|_______ \\__| \\_/  \\___  >" <<endl<<
    "        \\/             \\/" <<endl<<
    ".____                        .__" <<endl<<
    "|    |   _____   __ __  ____ |  |__" <<endl<<
    "|    |   \\__  \\ |  |  \\/ ___\\|  |  \\" <<endl<<
    "|    |___ / __ \\|  |  / /_/  >   Y  \\" <<endl<<
    "|_______ (____  /____/\\___  /|___|  /" <<endl<<
    "        \\/    \\/     /_____/      \\/" <<endl<<
    ".____" <<endl<<
    "|    |    _______  __ ____" <<endl<<
    "|    |   /  _ \\  \\/ // __ \\" <<endl<<
    "|    |__(  <_> )   /\\  ___/" <<endl<<
    "|_______ \\____/ \\_/  \\___  >" <<endl<<
    "        \\/               \\/          " << endl << endl;
	
	
  cout << "Welcome to LiveLaughLove, your own life-simulator!" << endl; 
  cout << "Here you will live a life from the age of 13 to 36." << endl;
  cout << "Each year an event occurs and you can make choices, ";
  cout << "which results in the change in value of the three variables: health, wealth, and satisfaction." << endl;
  cout << "After each year, you can either choose to continue with the game, or save and quit." << endl;
  cout << "And at the end of the game, you can see a summary of the life you have lived." << endl;
  cout << endl << "But bear in mind that this game is just for fun." << endl;
  cout << "PLEASE don't take it personally." << endl;
  cout << endl << "Please make sure that:" << endl;
  cout << "1. All inputs entered are VALID INPUTS." << endl;
  cout << "2. Name should consist of characters ONLY." << endl; 
  cout << "Else your game might be terminated accidentally!" << endl;
  cout << "Ready? Let'go!" << endl << endl;

	srand( time( NULL ) ); // initiates the random seed
	string name; // declare string variable for player name
	Show player; // declare struct variable for player stats
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
	cout << "Do you want to load a new game or a saved game?" << endl << "1. To load new game" << endl << "2. To load saved game" << endl << "Enter choice: " ;
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
		ShowStats( player, name );

		
		string * upgrade = new string;  // initialization of dynamic variable for storing upgrade choice

		// prompt user for upgrade choice
		cout << "You get to upgrade one of your stats! " << endl;
		cout << "1. health" << endl << "2. wealth" << endl << "3. satisfaction" << endl;

		// facilitates the upgrade of a single stat
		cout << "Enter choice: ";
		cin >> * upgrade;
		if ( * upgrade == "1" ) {
                        ChangeStats( player, 1, 0, 0 );
		}
		else if ( * upgrade == "2" ) {
			ChangeStats( player, 0, 1, 0 );
		}
		else if ( * upgrade == "3" ) { 
			ChangeStats( player, 0, 0, 1 );
		}

		delete upgrade; // frees dynamic variable

		cout << endl;

		ShowStats( player , name );

		// initialization of age of character 
		* age = 13;
	}	

	// load a saved game
	else if ( newOrLoad == "2" ) {
		// Ask the player for the name of the file to load and save, then place the information in the variable named "filename" that was declared earlier.
		cout << "Enter name of .txt file to load game progress: ";
		cin >> filename;

		// declare ifstream object to read file 
		ifstream fin;
		fin.open( filename.c_str() );
		if ( fin.fail() ) {
			cout << "Error opening file!" << endl;
			exit( 1 );
		}

		string resume; // a string variable should be declared in order to read lines from the file.
		int linecount = 0; // a line number tracking int variable should be declared.
		
		while ( getline( fin, resume ) ) {
			
			// line 1 contains player's name
			if ( linecount == 1 ) {
				name = resume;
			}
			
			// line 2 contains player's age
			else if ( linecount == 2 ) {
				* age = stoi( resume );
			}
			
			// get health
			else if ( linecount == 3 ) {
				player.health = stoi( resume );
			}
			
			// get wealth
			else if ( linecount == 4 ) {
				player.wealth = stoi( resume );
			}
			
			// get satisfaction 
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

  //The main structure of program starting from age 13
	
	// Operate before reaching the age of 36 years
	while ( * age != 36 ) {
		fout << endl;
		cout << endl;

		switch ( * age ) {
			
		// event when age is 13
		case 13:
        	cout << "Age: 13" << endl;
        	cout << "-------" << endl;

		fout << "Age: 13" << endl;
       	 	fout << "-------" << endl;

		Events13( player, name, fout );
		ShowStats( player, name );
        	break;
	
		// event when age is 14
		case 14:
        	cout << "Age: 14" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 14" << endl;
        	fout << "-------" << endl;

        	showevents14_17( player, fout );
        	ShowStats( player, name );
		break;

		// event when age is 15
      		case 15:
        	cout << "Age: 15" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 15" << endl;
        	fout << "-------" << endl;

        	showevents14_17( player, fout );
        	ShowStats( player, name );		
		break;

		// event when age is 16
      		case 16:
        	cout << "Age: 16" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 16" << endl;
        	fout << "-------" << endl;		

        	showevents14_17( player, fout );
        	ShowStats( player, name );
		break;

		// event when age is 17
      		case 17:
        	cout << "Age: 17" << endl;
        	cout << "-------" << endl;

       	 	fout << "Age: 17" << endl;
        	fout << "-------" << endl;

        	showevents14_17( player, fout );
        	ShowStats( player, name );	
		break;

		// event when age is 18
      		case 18:
        	cout << "Age: 18" << endl;
        	cout << "-------" << endl;
				
        	fout << "Age: 18" << endl;
        	fout << "-------" << endl;		

		Events18( player, name, fout );
		ShowStats( player, name );
		break;

		// event when age is 19
      		case 19:
        	cout << "Age: 19" << endl;
        	cout << "-------" << endl;

       	 	fout << "Age: 19" << endl;
        	fout << "-------" << endl;

        	Events19( player, name, fout );
		ShowStats( player, name );
        	break;

		// event when age is 20
      		case 20:
        	cout << "Age: 20" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 20" << endl;
        	fout << "-------" << endl;

        	showevents20_23( player, fout );
        	ShowStats( player, name );
        	break;

		// event when age is 21
      		case 21:
        	cout << "Age: 21" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 21" << endl;
        	fout << "-------" << endl;

       	 	showevents20_23( player, fout );
        	ShowStats( player, name );
        	break;

		// event when age is 22
      		case 22:
        	cout << "Age: 22" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 22" << endl;
        	fout << "-------" << endl;

        	showevents20_23( player, fout );
        	ShowStats( player, name );	
        	break;

		// event when age is 23
      		case 23:
        	cout << "Age: 23" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 23" << endl;
        	fout << "-------" << endl;

        	showevents20_23( player, fout );
        	ShowStats( player, name );
        	break;
		
		// event when age is 24
      		case 24:
        	cout << "Age: 24" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 24" << endl;
        	fout << "-------" << endl;

        	Events24( player, name, fout );
		ShowStats( player, name );
        	break;      
       
		// event when age is 25
      		case 25:
        	cout << "Age: 25" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 25" << endl;
        	fout << "-------" << endl;

        	Events25( player, name, fout );
        	ShowStats( player, name );
		break;

		// event when age is 26
      		case 26:
        	cout << "Age: 26" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 26" << endl;
        	fout << "-------" << endl;

        	showevents26_29( player, fout );
        	ShowStats( player, name );	
        	break;

		// event when age is 27
      		case 27:
        	cout << "Age: 27" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 27" << endl;
        	fout << "-------" << endl;

        	showevents26_29( player, fout );
        	ShowStats( player, name );	
        	break;
      
		// event when age is 28
      		case 28:
        	cout << "Age: 28" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 28" << endl;
        	fout << "-------" << endl;

        	showevents26_29( player, fout );
        	ShowStats( player, name );	
        	break;

		// event when age is 29
      		case 29:
        	cout << "Age: 29" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 29" << endl;
        	fout << "-------" << endl;

        	showevents26_29( player, fout );
        	ShowStats( player, name );	
        	break;

		// event when age is 30
      		case 30:
        	cout << "Age: 30" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 30" << endl;
        	fout << "-------" << endl;

        	Events30( player, name, fout );
		ShowStats( player, name );
        	break;

		// event when age is 31
      		case 31:
        	cout << "Age: 31" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 31" << endl;
        	fout << "-------" << endl;

        	Events31( player, name, fout );
		ShowStats( player, name );
        	break;

		// event when age is 32
      		case 32:
        	cout << "Age: 32" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 32" << endl;
        	fout << "-------" << endl;

        	showevents32_35( player, fout );
        	ShowStats( player, name );	
        	break;
      
		// event when age is 33
      		case 33:
        	cout << "Age: 33" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 33" << endl;
        	fout << "-------" << endl;

        	showevents32_35( player, fout );
        	ShowStats( player, name );	
        	break;

		// event when age is 34
      		case 34:
        	cout << "Age: 34" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 34" << endl;
        	fout << "-------" << endl;

        	showevents32_35( player, fout );
        	ShowStats( player, name );	
        	break;

		// event when age is 35
      		case 35:
        	cout << "Age: 35" << endl;
        	cout << "-------" << endl;

        	fout << "Age: 35" << endl;
        	fout << "-------" << endl;

        	showevents32_35( player, fout );
        	ShowStats( player, name );	
        	break;

	}

		// call the function to ascertain the player's intent about the game's continuation or termination.
		bool continuePlaying = growUpOrQuit( age, filename, tempfile, player, name );

		// procedures on saving or quitting
    		if ( !continuePlaying ) {
			fout.close(); // close temp file 
			delete age; // delete age dynamic variable
			return 0; // exit
		}
  }
	if (*age == 36){
		fout << endl;
		cout << "Age: 36" << endl;
        cout << "-------" << endl;

        fout << "Age: 36" << endl;
        fout << "-------" << endl;

        Events36( player, name, fout );
	ShowStats( player, name );
	
	}

  	delete age; // delete dynamic variable
	fout.close(); // close temporary file

  	// FinalStats gives summary of the players' events and choices
  	FinalStats( player.health, player.wealth, player.satisfaction );
	
	// declare ofstream object for copying contents in <tempfile> to <filename>
	ofstream save;
	save.open( filename.c_str() ); // open user-provided file <filename> for saving game progress 
	if ( save.fail() ) {
		cout << "Error opening file for saving!" << endl;
		exit( 1 );
	}

	// declare an object of type ifstream for reading from the "tempfile"
	ifstream copy;
	copy.open( tempfile.c_str() ); // open temporary file containing game progress 
	if ( copy.fail() ) {
		cout << "Error opening file for copying!" << endl;
		exit( 1 );
	}
	
	string linecopy; // string variable for storing file lines while reading <tempfile>
	while( getline( copy, linecopy ) ) {
		save << linecopy << endl; // saves game summary by copying from temporary file
		
	}
	
	// close all files
	save.close();
	copy.close();

	// informs player that a summary of their game can be viewed in the file they provided
	cout << endl << "To view your game summary, open the <.txt> file you provided at the start of the game!" << endl;
	cout << "Please enter 'make clean' to remove the contemporary files!" << endl;

  return 0;
}
