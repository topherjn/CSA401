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
	{
		aaronAlive = true;
		bobAlive = true;
		charlieAlive = true;

		do
		{
			Aaron_shoots(aaronAlive, bobAlive, charlieAlive);
			Bob_shoots(aaronAlive, bobAlive, charlieAlive);
			Charlie_shoots(aaronAlive, bobAlive, charlieAlive);

		} while ((aaronAlive && bobAlive) || (aaronAlive && charlieAlive) || (bobAlive && charlieAlive));

		if (aaronAlive) aaronWins++;
		if (bobAlive) bobWins++;
		if (charlieAlive) charlieWins++;

	}

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Aaron won " << aaronWins << "/10000 duels or " << (static_cast<double>(aaronWins) / NUM_DUELS) * 100 << "%" << endl;
	cout << "Bob won " << bobWins << "/10000 duels or " << (static_cast<double>(bobWins) / NUM_DUELS) * 100 << "%" << endl;
	cout << "Charlie won " << charlieWins << "/10000 duels or " << (static_cast<double>(charlieWins) / NUM_DUELS) * 100 << "%" << endl;
	
	return 0;
}

void Aaron_shoots(bool aaron, bool & bob, bool & charlie)
{
	int shot;

	if (!aaron) return;

	shot = rand() % 3;

	if (shot == 0)
	{
		if (charlie) charlie = false;
		else if (bob) bob = false;
	}

	return;
}

void Bob_shoots(bool & aaron, bool bob, bool & charlie)
{
	int shot;

	if (!bob) return;

	shot = rand() % 2;

	if (shot == 0)
	{
		if (charlie) charlie = false;
		else if (aaron) aaron = false;
	}

	return;
}

void Charlie_shoots(bool & aaron, bool & bob, bool charlie)
{
	if (!charlie) return;

	if (bob) bob = false;
	else if (aaron) aaron = false;

	return;
}
