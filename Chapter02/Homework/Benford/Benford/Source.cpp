#include<iostream>
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
		cout << number << endl;

	input.close();

	for (int i = 0; i < 10; i++)
	{
		cout << digits[i] << endl;
	}


}