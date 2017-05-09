#include<iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main();

void Aaron_shoots(bool aaron, bool& bob, bool& charlie);
void Bob_shoots(bool& aaron, bool bob, bool& charlie);
void Charlie_shoots(bool& aaron, bool& bob, bool charlie);

const int NUM_DUELS = 10000;

int main()
{

	bool aaronAlive, bobAlive, charlieAlive;
	int aaronWins = 0;
	int bobWins = 0;
	int charlieWins = 0;
	int i;

	srand(time(NULL));

	for (i = 0; i < NUM_DUELS; i++)
		return 0;
}

void Aaron_shoots(bool aaron, bool & bob, bool & charlie)
{
}

void Bob_shoots(bool & aaron, bool bob, bool & charlie)
{
}

void Charlie_shoots(bool & aaron, bool & bob, bool charlie)
{
}
