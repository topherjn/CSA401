#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

char getFirstDigit(string number)
{
	return number.at(0);
}

int charToIndex(char ch)
{
	return ch - '0';
}

int main()
{
	int digits[] = { 0,0,0,0,0,0,0,0,0,0 };
	string number;
	fstream input;

	input.open("C:\\Projects\\CSA401\\Chapter02\\Homework\\pops.csv");

	while (input >> number)
	{
		digits[charToIndex(getFirstDigit(number))]++;
		digits[0]++;
	}

	input.close();

	for (int i = 1; i < 10; i++) cout << setprecision(2) << (digits[i] / (double) digits[0]) * 100 << "%" << endl;
}