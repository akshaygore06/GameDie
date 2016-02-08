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
	int maxNumber = 20;
	int minNumber = 4;
	int limit = 0;
	srand(time(NULL));
  limit = rand()%(maxNumber - minNumber + 1) + minNumber; //generates number between Min Number and Max Number
	randNumber = rand()%limit+1;
	cout << "Random Number is :"<< limit<<endl;
return randNumber;
}
