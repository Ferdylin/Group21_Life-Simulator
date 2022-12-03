// This file contains code related to functions that manipulate player stats and also the display of final results

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <iomanip>
#include "Show.h"
#include "Stats_control.h"
#include "majoryear.h"
#include "minoryear.h"

using namespace std;


//Stats defined functions for displaying user name, and stats
// uses data structure
//It will output player's stats after each event

void ShowStats( Show s, string name ) {
	cout << endl;
  cout << name << "'s stats: " << endl;
  cout << "**================================================**" << endl;
  cout << "HEALTH: " << s.health << setw( 17 );
  cout << "WEALTH: " << s.wealth << setw( 22 );
  cout << "SATISFACTION: " << s.satisfaction;
  cout << endl;
  cout << "**================================================**" << endl;
	cout << endl;

  return;
}

//Stats function for updating players' stats, will be incorporated into main.cpp
//Updating health, wealth and satisfaction accordingly based on events

void ChangeStats( Show &s, int health, int wealth, int satisfaction) {
    //changing health
    if ( wealth == 1 && s.wealth < 3) {
		s.wealth++;
	  }
	  else if ( wealth == -1 && s.wealth > 0) {
		s.wealth--;
	  }
          else if (wealth == -2 && s.wealth == 3 ) {
                s.wealth = 1;
          }
          else if (wealth == -2 && s.wealth <= 2) {
                s.wealth = 0;
          }
	  else if (wealth == 2 && s.wealth == 2) {
		s.wealth = 3;
	  }
          else if (wealth == 1 && s.wealth ==2) {
		s.wealth = 3;
	  }
          else if ( wealth == -3 ) {
		s.wealth = 0;
          }
	  else if ( wealth == 3 ) {
		s.wealth = 3;
	  }

    //changing health
    if ( health == 1 && s.health < 3) {
		s.health++;
	  }
	  else if ( health == -1 && s.health > 0) {
		s.health--;
	  }
          else if (health == -2 && s.health == 3 ) {
                s.health = 1;
          }
          else if (health == -2 && s.health <= 2) {
                s.health = 0;
          }
	  else if (health == 2 && s.health == 2) {
		s.health = 3;
	  }
          else if (health == 1 && s.health ==2) {
		s.health = 3;
	  }
          else if ( health == -3 ) {
		s.health = 0;
          }
	  else if ( health == 3 ) {
		s.health = 3;
	  }

   //changing satisfaction
   if ( satisfaction == 1 && s.satisfaction < 3) {
		s.satisfaction++;
	  } 
	  else if ( satisfaction == -1 && s.satisfaction > 0) {
		s.satisfaction--;
	  }
          else if (satisfaction == -2 && s.satisfaction == 3 ) {
                s.satisfaction = 1;
          }
          else if (satisfaction == -2 && s.satisfaction <= 2) {
                s.satisfaction = 0;
          }
	  else if (satisfaction == 2 && s.satisfaction == 2) {
		s.satisfaction = 3;
	  }
          else if (satisfaction == 1 && s.satisfaction ==2) {
		s.satisfaction = 3;
	  }
          else if ( satisfaction == -3 ) {
		s.satisfaction = 0;
          }
	  else if ( satisfaction == 3 ) {
		s.satisfaction = 3;
	  }	

	  return;
}

//Results defined based on players' final status, different stats will trigger different output lines
void FinalStats( int health, int wealth, int satisfaction ) {
  cout << endl;
  cout << "Congratulations, this is the end of your game." << endl;
  cout << "Let's see what you got, do you feel like you've lived what's so called a good life?" << endl;

  if ( health == 0 && wealth == 0 && satisfaction == 0 ) {
    cout << "Can't say that you're a good life decisions maker...you died of several illnesses and were broke and hunrgy when you passed away" << endl;
  }
  else if ( health == 1 && wealth == 1 && satisfaction == 1 ) {
    cout << "You ended up broke and single but at least you're still alive!" << endl;
  }
  else if ( health == 2 && wealth == 2 && satisfaction == 2 ) {
    cout << "Hey yo, you've lived a pretty decent life, can you tell me how you did that??" << endl;
  }
  else if ( health == 3 && wealth == 3 && satisfaction == 3 ) {
    cout << "Smart, ambitious, rich, and fit! Everyone's jealous of you did you know that?" << endl;
  }
  else if ( health == 3 && wealth < 3 && satisfaction < 3) {
    cout << "Wow guess you're super healthy, congrats for being alive" << endl;
  }
  else if (health < 3 && wealth == 3 && satisfaction < 3) {
    cout << "Smart entrepreneur or a workaholic, anyways, congrats for being rich";
  }
  else if (health < 3 && wealth < 3 && satisfaction == 3) {
    cout << "Wow you looked so happy, what happened ?!";
  }
  else if (health < 2 && wealth <= 2 && satisfaction <= 2) {
    cout << "Dang look at your own health, can't say that you're a good decision maker but at least you've made it through!";
  }
  else if (health <=2 && wealth < 2 && satisfaction <=2) {
    cout << "You're kinda broke, sorry things need to be said...";
  }
  else if (health <=2 && wealth <=2 && satisfaction < 2) {
    cout << "Life is hard don't be too depressed my friend";
  }
  else {
    cout << "I guess you've had a...ummm pretty normal life" << endl;
  }

  cout << "Thanks for playing! Please feel free to play this game as many time as you want to discover different life/career paths for yourself!" << endl;
	  return;
}
