#include <iostream>
#include <cstdlib>
#include "GameDie.h"

using namespace std;

//class constructor that seeds the random number generator
GameDie::GameDie()
{
}

//generate a random number between 1-6 (inclusive) and display it
int GameDie::roll()
{	
	int randNumber = 0;
	srand(time(NULL));
        randNumber = rand()%6+1;
//	cout << "Random Number is :"<< randNumber<<endl;
return randNumber;
}
