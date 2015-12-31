// ConsoleApplication10.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string question;
	string food;
	int foodAmount;

	cout << "Hi!! Wanna eat pizza or sushi?" << endl;
	cin >> question;

	if (question == "pizza")
	{
		cout << "Excellent! we've got the best " << question << ". How many slices sir?" << endl;
		cin >> food;
		if (true)
		{
			cout << "You have received " << food << " slices of pizza!" << endl;
		}
	}
	else if(question == "sushi")
	{
		cout << "Excellent! we've got the best " << question << ". How many rolls sir?" << endl;
		cin >> food;

		if (true)
		{
			cout << "You have received " << food << " sushi rolls!" << endl;
		}
	}
	else
	{
		cout << "Ok, we'll eat salad." << endl;
	}

	system("pause");
	return 0;
}
