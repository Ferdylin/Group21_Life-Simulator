// This file contains functions related to the minor years

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include "struct.h"
#include "manipulateStats.h"
#include "majorYears13_18.h"
#include "majorYears21_23.h"
#include "minorYears.h"

using namespace std;

// outputs the results of events at ages 14-17
// inputs: chosen index, player's stats as a pass-by reference
void resultsEvents14_to_17( int index, Stats &s, ofstream & fout ) {
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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;

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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;

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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;
		
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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;
		
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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;

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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;

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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;

// outputs the results of events at ages 20-23
// inputs: chosen index, player's stats as a pass-by reference
void resultsEvents20_to_23( int index, Stats &s, ofstream & fout ) {
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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;

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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;

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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;
		
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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;
		
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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;

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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;

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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;



// outputs the results of events at ages 32-35
// inputs: chosen index, player's stats as a pass-by reference

void resultsEvents32_to_35( int index, Stats &s, ofstream & fout ) {
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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;

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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;

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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;
		
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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;
		
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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;

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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;

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
				updateStats( s, -1, 0, 0 );

				//save game
				fout << endl << "Choice: 222222222222222222" << endl;
				fout << "666666666666666666666666666" << endl;
			}
			else if ( choice == 3 ) {
				cout << "777777777777777777777777777." << endl;
				cout << "<55555555555555>" << endl;
				updateStats( s, 0, 0, -1 );

				//save game
				fout << endl << "Choice: 333333333333333333" << endl;
				fout << "77777777777777777" << endl;
			}
			break;
  }

	return;
}