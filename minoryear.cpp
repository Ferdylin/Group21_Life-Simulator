// This file contains functions related to the minor years

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <iomanip>
#include "Show.h"
#include "Stats_control.h"
#include "majoryear.h"
#include "minoryear.h"

using namespace std;

// outputs the results of events at ages 14-17
// inputs: chosen index, player's stats as a pass-by reference
void resultsEvents14_to_17( int index, Show &s, ofstream & fout ) {
	int choice;
	cout << "Please enter the choice number when prompted!" << endl;
  cout << "--------------------------------------------------" << endl;
	switch ( index ) {
		case 0:
			cout << "There is a new video game. Every friend of yours seem obsessed with it. You find it interesting as well. They constantly invite you to play with them for long hours. What will you do?" << endl;
			cout << "1. Join them and play the hell out of it. Friendship and glory!" << endl;
			cout << "2. Play the game but try not to indulge in it. School and your life and other gaming are equally important." << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "You spend too much time on gaming that your grades are negatively affected. But you achieve high in the game anyway." << endl;
				cout << "<5555555555555>" << endl;
				ChangeStats( s, -1, -1, +2);
				

				// save game
				fout << endl << "Choice: Join them and play the hell out of it. Friendship and glory!" << endl;
				fout << "You spend too much time on gaming that your grades are negatively affected. But you achieve high in the game anyway." << endl;
				
			}
			else if ( choice == 2 ) {
				cout << "You maintain good grades, and have fun in gaming." << endl;
				cout << "<55555555555>" << endl;
				ChangeStats( s, +1, 0, +1 );

				//save game
				fout << endl << "Play the game but try not to indulge in it. School and your life and other gaming are equally important." << endl;
				fout << "You maintain good grades, and have fun in gaming." << endl;
			}

		case 1:
			cout << "For the first time in your life, you have a crush on someone. It feels wonderful but you are shy to approach that person. What will you do?" << endl;
			cout << "1. Burry your feelings and act as if nothing happens." << endl;
			cout << "2. Be brave to express your affection." << endl;
			cout << "3. Tease your crush to get attention." << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "Your crush never knows your affection. You feel depressed for not open about your feelings." << endl;
				cout << "<5555555555555>" << endl;
				ChangeStats(s, 0, 0, -1);

				// save game
				fout << endl << "Choice: Burry your feelings and act as if nothing happens." << endl;
				fout << "Your crush never knows your affection. You feel depressed for not open about your feelings." << endl;
			}
			else if ( choice == 2 ) {
				cout << "“Wow… I like you too!” You become a cute couple. First love is so sweet!" << endl;
				cout << "<55555555555>" << endl;
				ChangeStats( s, 0, 0, +2 );

				//save game
				fout << endl << "Choice: Be brave to express your affection." << endl;
				fout << "“Wow… I like you too!” You become a cute couple. First love is so sweet!" << endl;
			}
			else if ( choice == 3 ) {
				cout << "Your crush hates you and everyone think you are mean. You feel awful." << endl;
				cout << "<55555555555555>" << endl;
				ChangeStats( s, 0, 0, -2 );

				//save game
				fout << endl << "Choice: Tease your crush to get attention." << endl;
				fout << "Your crush hates you and everyone think you are mean. You feel awful" << endl;
			}

		case 2:
			cout << "Drama Society is recruiting. "
					    "You always wanted to try being an actor and this is precious opportunity. "
					    "But you are worried about too much stress of performing a complete play in front of everyone. What will you do?" << endl;		    
			cout << "1. I’ll go to the audition!" << endl;
			cout << "2. Maybe… I’ll try next time?" << endl;
			
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "They are really impressed by your performance! The play turns out to be a huge success. You made great friends and this become a memory of a lifetime." << endl;
				cout << "satisfaction+2" << endl;
				ChangeStats(s, 0, 0, +1);

				// save game
				fout << endl << "Choice:  I’ll go to the audition!" << endl;
				fout << "They are really impressed by your performance! The play turns out to be a huge success. You made great friends and this become a memory of a lifetime." << endl;
			}
			else if ( choice == 2 ) {
				cout << "Bad choice! If you want something, just go for it!" << endl;
				cout << "<55555555555>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: Maybe… I’ll try next time?" << endl;
				fout << "Bad choice! If you want something, just go for it!" << endl;
		}
			
		
		case 3:
			cout << "School trip! Please select your destination: ";	    
			cout << "1. Zoo." << endl;
			cout << "2. Disneyland." << endl;
			cout << "3. Ocean Park." << endl;
			cout << "4. Universal Studios." << endl;		   
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "Yeah great time at the zoo!" << endl;
				

				// save game
				fout << endl << "Choice: zoo." << endl;
				fout << "Yeah great time at the zoo!" << endl;
			}
			else if ( choice == 2 ) {
				cout << "Yeah great time at Disneyland!" << endl;
				
				

				//save game
				fout << endl << "Choice: Disneyland." << endl;
				fout << "Yeah great time at Disneyland!" << endl;
			}
			else if ( choice == 3 ) {
				cout << "Yeah great time at Ocean Park!" << endl;
				
				

				//save game
				fout << endl << "Choice: Ocean Park." << endl;
				fout << "Yeah great time at Ocean Park!" << endl;
			}
			else if ( choice == 4 ){
				cout << "Yeah great time at Universal Studios!" << endl;
				
				//save game
				fout << endl << "Choice: Universal Studios." << endl;
				fout << endl << "Yeah great time at Universal Studios!" << endl;
			}	
			cout << "satisfaction+1";
			ChangeStats (s, 0, 0, +1);

		
		case 4:
			cout << "You are learning how to drive an automatic transmission car. In your driving test you:" << endl;
			cout << "1. Use both feet to apply the brake and throttle." << endl;
			cout << "2. Use one foot to apply the brake and throttle." << endl;
			
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "!!!Car Crash Warning!!! Failed your test." << endl;
				cout << "satisfaction-1" << endl;
				ChangeStats(s, -1, 0, -1);

				// save game
				fout << endl << "Choice: Use both feet to apply the brake and throttle.." << endl;
				fout << "!!!Car Crash Warning!!! Failed your test." << endl;
			}
			else if ( choice == 2 ) {
				cout << "Congratulations on your driver’s licence!" << endl;
				cout << "satisfaction+!" << endl;
				ChangeStats( s, 0, 0, +1 );

				//save game
				fout << endl << "Choice: Use one foot to apply the brake and throttle." << endl;
				fout << "Congratulations on your driver’s licence" << endl;
			}
			


		case 5:
			cout << "Best Friends Movie Night! You are so lucky to have each other~" << endl;
			cout << "satisfaction+2" << endl;
			ChangeStats(s, 0, 0, +2);
					    
			//save game
			?		    


		case 6:
			cout << "Just get back from the hair salon. AWFUL haircut." << endl;
			cout << "satisfaction-1 wealth-1" << endl;
			ChangeStats(s, 0, -1, -1);
			//save game?
		}			    
	 }


// outputs the results of events at ages 20-23
// inputs: chosen index, player's stats as a pass-by reference
void resultsEvents20( int index, Show &s, ofstream & fout ) {
	int choice;
	cout << "Please enter the choice number when prompted!" << endl;
  cout << "--------------------------------------------------" << endl;
	switch ( index ) {
		case 0:
			cout << "Someone hot in uni wants to go on a date with you. You will:" << endl;
			cout << "1. Hey it's college, step aside GPA! I only care about my love life." << endl;
			cout << "2.  Surely I can balance my study and love life." << endl;
			cout << "3. Getting into Stanford is all I want." << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "Congratulations on a very romantic college experience! Unfortunately, now you have a really fucked-up GPA." << endl;
				cout << "<health+1 wealth-1 satisfaction+1>" << endl;
				ChangeStats(s, +1, -1, +1);

				// save game
				fout << endl << "Choice: Hey it's college, step aside GPA! I only care about my love life." << endl;
				fout << "Congratulations on a very romantic college experience! Unfortunately, now you have a really fucked-up GPA." << endl;
			}
			else if ( choice == 2 ) {
				cout << "Oh no, you’ve overestimated yourself." << endl;
				cout << "<wealth-1 satisfaction+1>" << endl;
				ChangeStats( s, 0, -1, +1 );

				//save game
				fout << endl << "Choice:  Surely I can balance my study and love life." << endl;
				fout << "Oh no, you’ve overestimated yourself." << endl;
			}
			else if ( choice == 3 ) {
				cout << "GPA++! Everything seems great except the sad fact that you remain single throughout college.." << endl;
				cout << "<satisfaction-1>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: Getting into Stanford is all I want." << endl;
				fout << "GPA++! Everything seems great except the sad fact that you remain single throughout college." << endl;
			}


		case 1:
			cout << "1. Your favourite pop star is coming to Hong Kong on her global tour, but the ticket is so expensive. You will:" << endl;
			cout << "2. OMG this is a once-in-a-lifetime opportunity! I need to save every penny to get a ticket!" << endl;
			cout << "3. 33333333333333" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "This indeed turns out to be an experience of a lifetime." << endl;
				cout << "<satisfaction+2 wealth-2>" << endl;
				ChangeStats(s, 0, -2, +2);

				// save game
				fout << endl << "Choice: OMG this is a once-in-a-lifetime opportunity! I need to save every penny to get a ticket!." << endl;
				fout << "This indeed turns out to be an experience of a lifetime." << endl;
			}
			else if ( choice == 2 ) {
				cout << "6666666666666666666666666666" << endl;
				cout << "<55555555555>" << endl;
				ChangeStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: OMG this is a once-in-a-lifetime opportunity! I need to save every penny to get a ticket!" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}


		case 2:
			cout << "1. 11111111111111" << endl;
			cout << "2. 22222222222222" << endl;
			cout << "3. 33333333333333" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "444444444444444444444444" << endl;
				cout << "<5555555555555>" << endl;

				// save game
				fout << endl << "Choice: 1111111111111." << endl;
				fout << "4444444444444444444444444" << endl;
			}
			else if ( choice == 2 ) {
				cout << "6666666666666666666666666666" << endl;
				cout << "<55555555555>" << endl;
				ChangeStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}

		
		case 3:
			cout << "1. 11111111111111" << endl;
			cout << "2. 22222222222222" << endl;
			cout << "3. 33333333333333" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "444444444444444444444444" << endl;
				cout << "<5555555555555>" << endl;

				// save game
				fout << endl << "Choice: 1111111111111." << endl;
				fout << "4444444444444444444444444" << endl;
			}
			else if ( choice == 2 ) {
				cout << "6666666666666666666666666666" << endl;
				cout << "<55555555555>" << endl;
				ChangeStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}

		
		case 4:
			cout << "1. 11111111111111" << endl;
			cout << "2. 22222222222222" << endl;
			cout << "3. 33333333333333" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "444444444444444444444444" << endl;
				cout << "<5555555555555>" << endl;

				// save game
				fout << endl << "Choice: 1111111111111." << endl;
				fout << "4444444444444444444444444" << endl;
			}
			else if ( choice == 2 ) {
				cout << "6666666666666666666666666666" << endl;
				cout << "<55555555555>" << endl;
				ChangeStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}

		case 5:
			cout << "1. 11111111111111" << endl;
			cout << "2. 22222222222222" << endl;
			cout << "3. 33333333333333" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "444444444444444444444444" << endl;
				cout << "<5555555555555>" << endl;

				// save game
				fout << endl << "Choice: 1111111111111." << endl;
				fout << "4444444444444444444444444" << endl;
			}
			else if ( choice == 2 ) {
				cout << "6666666666666666666666666666" << endl;
				cout << "<55555555555>" << endl;
				ChangeStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}


		case 6:
			cout << "1. 11111111111111" << endl;
			cout << "2. 22222222222222" << endl;
			cout << "3. 33333333333333" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "444444444444444444444444" << endl;
				cout << "<5555555555555>" << endl;

				// save game
				fout << endl << "Choice: 1111111111111." << endl;
				fout << "4444444444444444444444444" << endl;
			}
			else if ( choice == 2 ) {
				cout << "6666666666666666666666666666" << endl;
				cout << "<55555555555>" << endl;
				ChangeStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
            }
    }
}
    
	          



// outputs the results of events at ages 32-35
// inputs: chosen index, player's stats as a pass-by reference

void resultsEvents32_to_35( int index, Show &s, ofstream & fout ) {
	int choice;
	cout << "Please enter the choice number when prompted!" << endl;
  cout << "--------------------------------------------------" << endl;
	switch ( index ) {
		case 0:
			cout << "1. 11111111111111" << endl;
			cout << "2. 22222222222222" << endl;
			cout << "3. 33333333333333" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "444444444444444444444444" << endl;
				cout << "<5555555555555>" << endl;

				// save game
				fout << endl << "Choice: 1111111111111." << endl;
				fout << "4444444444444444444444444" << endl;
			}
			else if ( choice == 2 ) {
				cout << "6666666666666666666666666666" << endl;
				cout << "<55555555555>" << endl;
				ChangeStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}


		case 1:
			cout << "1. 11111111111111" << endl;
			cout << "2. 22222222222222" << endl;
			cout << "3. 33333333333333" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "444444444444444444444444" << endl;
				cout << "<5555555555555>" << endl;

				// save game
				fout << endl << "Choice: 1111111111111." << endl;
				fout << "4444444444444444444444444" << endl;
			}
			else if ( choice == 2 ) {
				cout << "6666666666666666666666666666" << endl;
				cout << "<55555555555>" << endl;
				ChangeStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}


		case 2:
			cout << "1. 11111111111111" << endl;
			cout << "2. 22222222222222" << endl;
			cout << "3. 33333333333333" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "444444444444444444444444" << endl;
				cout << "<5555555555555>" << endl;

				// save game
				fout << endl << "Choice: 1111111111111." << endl;
				fout << "4444444444444444444444444" << endl;
			}
			else if ( choice == 2 ) {
				cout << "6666666666666666666666666666" << endl;
				cout << "<55555555555>" << endl;
				ChangeStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}

		
		case 3:
			cout << "1. 11111111111111" << endl;
			cout << "2. 22222222222222" << endl;
			cout << "3. 33333333333333" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "444444444444444444444444" << endl;
				cout << "<5555555555555>" << endl;

				// save game
				fout << endl << "Choice: 1111111111111." << endl;
				fout << "4444444444444444444444444" << endl;
			}
			else if ( choice == 2 ) {
				cout << "6666666666666666666666666666" << endl;
				cout << "<55555555555>" << endl;
				ChangeStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}

		
		case 4:
			cout << "1. 11111111111111" << endl;
			cout << "2. 22222222222222" << endl;
			cout << "3. 33333333333333" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "444444444444444444444444" << endl;
				cout << "<5555555555555>" << endl;

				// save game
				fout << endl << "Choice: 1111111111111." << endl;
				fout << "4444444444444444444444444" << endl;
			}
			else if ( choice == 2 ) {
				cout << "6666666666666666666666666666" << endl;
				cout << "<55555555555>" << endl;
				ChangeStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}



		case 5:
			cout << "1. 11111111111111" << endl;
			cout << "2. 22222222222222" << endl;
			cout << "3. 33333333333333" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "444444444444444444444444" << endl;
				cout << "<5555555555555>" << endl;

				// save game
				fout << endl << "Choice: 1111111111111." << endl;
				fout << "4444444444444444444444444" << endl;
			}
			else if ( choice == 2 ) {
				cout << "6666666666666666666666666666" << endl;
				cout << "<55555555555>" << endl;
				ChangeStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}

		case 6:
			cout << "1. 11111111111111" << endl;
			cout << "2. 22222222222222" << endl;
			cout << "3. 33333333333333" << endl;
			cout << "Enter choice: ";
			cin >> choice;

			if ( choice == 1 ) {
				cout << "444444444444444444444444" << endl;
				cout << "<5555555555555>" << endl;

				// save game
				fout << endl << "Choice: 1111111111111." << endl;
				fout << "4444444444444444444444444" << endl;
			}
			else if ( choice == 2 ) {
				cout << "6666666666666666666666666666" << endl;
				cout << "<55555555555>" << endl;
				ChangeStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				ChangeStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
    }
  }

	return;
