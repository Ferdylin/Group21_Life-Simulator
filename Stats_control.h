//The header file for controlling user's corresponding stats
#include <string>
using namespace std;

void ShowStats( Show s, string name ); //originally printstats

void ChangeStats( Show &s, int health, int money, int happiness ); //originally updateStats

void FinalStats( int health, int money, int happiness );  //original finalFunc
