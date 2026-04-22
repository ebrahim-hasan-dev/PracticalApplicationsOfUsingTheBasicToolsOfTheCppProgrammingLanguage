#pragma once

#include <iostream>
using namespace std;


void Average()
{
	float mark1, mark2, mark3;
	cout << "please enter your mark1 and mark2, mark3 : " << endl;
	cin >> mark1 >> mark2 >> mark3;
	float average = (mark1 + mark2 + mark3) / 3;
	cout << "your Average = " << average << endl;
}

void PracticalApplicationOfAdditionOperator()
{
	short num1, num2, num3;
	cout << "please enter number1, number2, number3 : " << endl;
	cin >> num1 >> num2 >> num3;
	//cout << "please enter number2: ";
	//cin >> num2;
	//cout << "please enter number3: ";
	//cin >> num3;
	short sum = num1 + num2 + num3;
	cout << sum << endl;
}

void PracticalApplicationOfDivisionOperator()
{
	short number;
	cout << "please enter a number : ";
	cin >> number;
	cout << "Half of the number is : " << number / 2 << endl;
}