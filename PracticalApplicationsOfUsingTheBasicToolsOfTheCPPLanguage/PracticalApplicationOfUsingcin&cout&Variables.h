#pragma once

#include <iostream>
using namespace std;


void TotalSeconds()
{
	float numofdays, numofhours, numofminutes, numofseconds;
	cout << "please enter a number of days and number of hours and number of minutes, number of seconds: " << endl;
	cin >> numofdays >> numofhours >> numofminutes >> numofseconds;
	float totalseconds = (numofdays * 24 * 60 * 60) + (numofhours * 60 * 60) + (numofminutes * 60) + numofseconds;
	cout << "Total Seconds: " << totalseconds << endl;
}

void ConvertTotalSecondsToDaysHoursMinutesSeconds()
{
	int totalseconds;
	cout << "please enter the total seconds : " << endl;
	cin >> totalseconds;
	int secondsperday = 24 * 60 * 60, secondsperhour = 60 * 60, secondsperminute = 60;
	int numberofdays = totalseconds / secondsperday;
	int remainder = totalseconds % secondsperday;
	int numberofhours = remainder / secondsperhour;
	int remainder2 = remainder % secondsperhour;
	int numberofminutes = remainder2 / secondsperminute;
	int remainder3 = remainder2 % secondsperminute;
	int numberofseconds = remainder3;
	cout << numberofdays << " day(s), " << numberofhours << " hour(s), " << numberofminutes << " minute(s), " << numberofseconds << " second(s)." << endl;
}

void Swap()
{
	short num1, num2;
	cout << "please enter two numbers : " << endl;
	cin >> num1 >> num2;
	cout << "your numbers : " << endl << num1 << endl << num2 << endl << endl;
	short temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "your numbers swap : " << endl << num1 << endl << num2 << endl << endl;
}