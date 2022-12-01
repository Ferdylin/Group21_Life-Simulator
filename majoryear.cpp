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
void resultsEvents13( int index, Show &s, ofstream & fout ) {
	int choice;
	cout << "Please enter the choice number when prompted!" << endl;
  cout << "--------------------------------------------------" << endl;
	
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
		ChangeStats(( s, -1, 0, 0 );

		//save game
		fout << endl << "Choice: 222222222222222222" << endl;
		fout << "666666666666666666666666666" << endl;
	}
	else if ( choice == 3 ) {
		cout << "777777777777777777777777777." << endl;
		cout << "<55555555555555>" << endl;
		ChangeStats(( s, 0, 0, -1 );

		//save game
		fout << endl << "Choice: 333333333333333333" << endl;
		fout << "77777777777777777" << endl;
	}
	break;
}
		
void resultsEvents18( int index, Show &s, ofstream & fout ) {
	int choice;
	cout << "Please enter the choice number when prompted!" << endl;
  cout << "--------------------------------------------------" << endl;
	
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
		ChangeStats(( s, -1, 0, 0 );

		//save game
		fout << endl << "Choice: 222222222222222222" << endl;
		fout << "666666666666666666666666666" << endl;
	}
	else if ( choice == 3 ) {
		cout << "777777777777777777777777777." << endl;
		cout << "<55555555555555>" << endl;
		ChangeStats(( s, 0, 0, -1 );

		//save game
		fout << endl << "Choice: 333333333333333333" << endl;
		fout << "77777777777777777" << endl;
	}
	break;
}
			    
void resultsEvents19( int index, Show &s, ofstream & fout ) {
	int choice;
	cout << "Please enter the choice number when prompted!" << endl;
  cout << "--------------------------------------------------" << endl;
	
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
		ChangeStats(( s, -1, 0, 0 );

		//save game
		fout << endl << "Choice: 222222222222222222" << endl;
		fout << "666666666666666666666666666" << endl;
	}
	else if ( choice == 3 ) {
		cout << "777777777777777777777777777." << endl;
		cout << "<55555555555555>" << endl;
		ChangeStats(( s, 0, 0, -1 );

		//save game
		fout << endl << "Choice: 333333333333333333" << endl;
		fout << "77777777777777777" << endl;
	}
	break;
}
			  
void resultsEvents24( int index, Show &s, ofstream & fout ) {
	int choice;
	cout << "Please enter the choice number when prompted!" << endl;
  cout << "--------------------------------------------------" << endl;
	
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
		ChangeStats(( s, -1, 0, 0 );

		//save game
		fout << endl << "Choice: 222222222222222222" << endl;
		fout << "666666666666666666666666666" << endl;
	}
	else if ( choice == 3 ) {
		cout << "777777777777777777777777777." << endl;
		cout << "<55555555555555>" << endl;
		ChangeStats(( s, 0, 0, -1 );

		//save game
		fout << endl << "Choice: 333333333333333333" << endl;
		fout << "77777777777777777" << endl;
	}
	break;
}
			    
void resultsEvents25( int index, Show &s, ofstream & fout ) {
	int choice;
	cout << "Please enter the choice number when prompted!" << endl;
  cout << "--------------------------------------------------" << endl;
	
	cout << "You have been working OT these days, but your work is not recognized by anyone, everyone else has been promoted before except you because your boss hates you, what do you do?" << endl;
	cout << "1. Hand in that resignation letter, and prepare for job hunting" << endl;
	cout << "2. Keep up with the hard work because you believe that your work would be recognized one day" << endl;
	cout << "3. Slack off during work because why not" << endl;
	cout << "Enter choice: ";
	cin >> choice;

	if ( choice == 1 ) {
		cout << "You got unemployed for over a month since you do not have enough work experiences, but eventually landed with a normal job in Hong Kong" << endl;
		cout << "<Wealth -1>" << endl;
		ChangeStats(( s, -1, 0, 0 );

		// save game
		fout << endl << "Choice: Hand in that resignation letter, and prepare for job hunting." << endl;
		fout << "You got unemployed for over a month since you do not have enough work experiences, but eventually landed with a normal job in Hong Kong" << endl;
	}
	else if ( choice == 2 ) {
		cout << "Your work still was not recognized by any colleagues, and they just kept gossiping about you because they know that you’re not liked by the boss" << endl;
		cout << "<Satisfaction -2>" << endl;
		ChangeStats(( s, 0, 0, -2 );

		//save game
		fout << endl << "Choice: Keep up with the hard work because you believe that your work would be recognized one day" << endl;
		fout << "Your work still was not recognized by any colleagues, and they just kept gossiping about you because they know that you’re not liked by the boss" << endl;
	}
	else if ( choice == 3 ) {
		cout << "Your colleague dropped by and asked what happened, you told them how toxic your boss is, and they helped you transfer to another division within the workplace. Your salary got boosted." << endl;
		cout << "<Wealth +1, Satisfaction +1>" << endl;
		ChangeStats(( s, +1, 0, +1 );

		//save game
		fout << endl << "Choice: Slack off during work because why not" << endl;
		fout << "Your colleague dropped by and asked what happened, you told them how toxic your boss is, and they helped you transfer to another division within the workplace. Your salary got boosted. " << endl;
	}
	break;
}
			    
void resultsEvents30( int index, Show &s, ofstream & fout ) {
	int choice;
	cout << "Please enter the choice number when prompted!" << endl;
  cout << "--------------------------------------------------" << endl;
	
	cout << "Your mother-in-law got very sick, and your partner is suggesting sending her to Australia for treatment therapy. What should you do?" << endl;
	cout << "1. Agree with them completely, you sold one of your apartments in Hong Kong, and decided to do everything you can to help your mother-in-law out" << endl;
	cout << "2. You told your partner frankly that you currently just do not have enough money to send their mother to the treatment therapy, you suggested to transfer your mother-in-law to a local hospital where you had connection with" << endl;
	cout << "3. You told your partner that you cannot afford to send your mother-in-law to Australia but still wanted to find them a solution" << endl;
	cout << "Enter choice: ";
	cin >> choice;

	if ( choice == 1 ) {
		cout << "You used up a lot of your money, but your partner was very grateful for your effort. They have decided to cook healthy food for you to take to your workplace every day, you felt that your health is improving as you eat healthy." << endl;
		cout << "<Wealth -2, Health +1, Satisfaction +1>" << endl;
		ChangeStats(( s, -2, +1, +1 );
			    
		// save game
		fout << endl << "Choice: Agree with them completely, you sold one of your apartments in Hong Kong, and decided to do everything you can to help your mother-in-law out." << endl;
		fout << "You used up a lot of your money, but your partner was very grateful for your effort. They have decided to cook healthy food for you to take to your workplace every day, you felt that your health is improving as you eat healthy. " << endl;
	}
	else if ( choice == 2 ) {
		cout << "Your partner has also agreed given the financial constraints; but you had still used up some money for it. " << endl;
		cout << "<Wealth –1>" << endl;
		ChangeStats(( s, -1, 0, 0 );

		//save game
		fout << endl << "Choice: You told your partner frankly that you currently just do not have enough money to send their mother to the treatment therapy, you suggested to transfer your mother-in-law to a local hospital where you had connection with" << endl;
		fout << "Your partner has also agreed given the financial constraints; but you had still used up some money for it." << endl;
	}
	else if ( choice == 3 ) {
		cout << "You and your partner fought, they wanted to break up and thought that you’re a cold-blooded monster. You felt very helpless and didn't know what to do. " << endl;
		cout << "<Health -1, Satisfaction -2>" << endl;
		ChangeStats(( s, 0, -1, -2 );

		//save game
		fout << endl << "Choice: You told your partner that you cannot afford to send your mother-in-law to Australia but still wanted to find them a solution" << endl;
		fout << "You and your partner fought, they wanted to break up and thought that you’re a cold-blooded monster. You felt very helpless and didn't know what to do. " << endl;
	}
	break;
}
			    
void resultsEvents31( int index, Show &s, ofstream & fout ) {
	int choice;
	cout << "Please enter the choice number when prompted!" << endl;
  cout << "--------------------------------------------------" << endl;
  	cout << "You and your lover are considering whether to welcome a new family member while you are still young and, after much deliberation, at the age of 30, you have chosen to:" << endl;
	cout << "1. Giving birth" << endl;
	cout << "2. Not considering the child " << endl;
	cout << "Enter choice: ";
	cin >> choice;

	if ( choice == 1 ) {
		cout << "You have a new family member, more laughter in the house, and with that comes an increased financial burden and more energy needed." << endl;
		cout << "<Satisfaction +1, Wealth -1, Health -1>" << endl;
		ChangeStats(( s, -1, -1, +1 );

		// save game
		fout << endl << "Choice: Giving birth." << endl;
		fout << "You have a new family member, more laughter in the house, and with that comes an increased financial burden and more energy needed." << endl;
	}
	else if ( choice == 2 ) {
		cout << "You think about it and decide not to have children, to give yourself more personal time and the energy to do your own thing." << endl;
		cout << "<Health +1, Wealth +1>" << endl;
		ChangeStats(( s, +1, +1, 0 );

		//save game
		fout << endl << "Choice: Not considering the child " << endl;
		fout << "You think about it and decide not to have children, to give yourself more personal time and the energy to do your own thing." << endl;
	}
	break;
}
			    
void resultsEvents36( int index, Show &s, ofstream & fout ) {
	int choice;
	cout << "Please enter the choice number when prompted!" << endl;
  cout << "--------------------------------------------------" << endl;
  	cout << "You have reached a bottleneck in your career, and you want to move up further and improve the quality of life for your family, you decide to" << endl;
	cout << "1. Take a class to learn professional knowledge" << endl;
	cout << "2. Get together with your boss more often and buy your clients drinks" << endl;
	cout << "3. You're happy to be a salty fish" << endl;
	cout << "Enter choice: ";
	cin >> choice;

	if ( choice == 1 ) {
		cout << "You have spent some money on professional training to improve the ability of yourself." << endl;
		cout << "<Wealth -1, Satisfaction +1>" << endl;
		ChangeStats(( s, -1, 0, +1 );
			    
		// save game
		fout << endl << "Choice: Take a class to learn professional knowledge." << endl;
		fout << "You have spent some money on professional training to improve the ability of yourself." << endl;
	}
	else if ( choice == 2 ) {
		cout << "You often ask your boss to go out for dinner after work, and you are socializing more, trying to get on good terms with your clients' bosses. " << endl;
		cout << "<Satisfaction -1, Health -1>" << endl;
		ChangeStats(( s, 0, -1, -1 );

		//save game
		fout << endl << "Choice: Get together with your boss more often and buy your clients drinks" << endl;
		fout << "You often ask your boss to go out for dinner after work, and you are socializing more, trying to get on good terms with your clients' bosses." << endl;
	}
	else if ( choice == 3 ) {
		cout << "You decide to go with the flow, and you think that when the time comes, you will be promoted." << endl;
		cout << "<Satisfaction +1, Wealth -1>" << endl;
		ChangeStats(( s, -1, 0, -1 );

		//save game
		fout << endl << "Choice: You're happy to be a salty fish" << endl;
		fout << "You decide to go with the flow, and you think that when the time comes, you will be promoted." << endl;
	}
	break;
}
