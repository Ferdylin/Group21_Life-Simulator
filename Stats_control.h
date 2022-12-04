//The header file for controlling user's corresponding stats
#include <string>
using namespace std;

void ShowStats( Show s, string name ); //originally printstats

void ChangeStats( Show &s, int wealth, int health, int satisfaction ); 

void FinalStats( int wealth, int health, int satisfaction );  
