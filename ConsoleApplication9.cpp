// ConsoleApplication9.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string question;
	string food;
	string door;
	string balloon;
	string car;
	int sum = 5;
	int sub = 2;
	int mult = 6;
	int div = 3;
	int total = (sum - sub) * mult / div;

	cout << "Wanna go to the mountains or the beach?" << endl;
	cin >> question;
	if (question == "mountains")
	{
		cout << "Ok, mountains it is" << endl;
	}
	else if (question == "beach")
	{
		cout << "Time to visit the beach" << endl;
	}
	else
	{
		food = "sushi";
		cout << "Sure, we can try some " << food << endl;
	}

	cout << "I'm too lazy to write more stories so here goes the rest of the strings and ints: " << door << balloon << car << sum << sub << mult << div << total << endl;
	system("pause");
	return 0;
}
