// ConsoleApplication8.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sum;
	string question;
	sum = 6;
	cin >> question;
	cout << "You are wakling through the streets of the city, while suddenly a giant tuna appears in front of you. Although impossible, it whispers to you 'bring me a chocolate cookie and I shall grant you a wish. What will you do? Accept or deny his request?" << endl;
	if (question == accept)
	{
		cout << "You share a chocolate cookie with the tuna. It is very happy, and grants you a wish. +7 Charisma and 500g! (Why didn't you ask for infinite you silly)" << endl;
	}
	if else(question == deny)
	{
		cout << "The tuna is sad and it begins to cry. Its tears turn into a river and the fish flows within it, looking for someone with a cookie. +3 Will, -5 kindness you insensitive gh8gh" << endl;
	}
	else
	{
		cout << "You eat the fish. Boy it was delicious. +15 sushi." << endl;
	}
	cout << "Your total health is " "sum " "because of reasons." << endl;
	system("pause");
	return 0;
}
