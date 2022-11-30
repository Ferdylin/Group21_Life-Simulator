//The header file for controlling user's corresponding stats
#include <string>
using namespace std;

void ShowStats( Stats s, string name ); //originally printstats

void ChangeStats( Stats &s, int health, int money, int happiness ); //originally updateStats

void FinalStats( int health, int money, int happiness );  //original finalFunc