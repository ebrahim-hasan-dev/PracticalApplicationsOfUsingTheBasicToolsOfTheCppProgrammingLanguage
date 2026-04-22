#pragma once

#include <iostream>
using namespace std;


void FindAreaOfCircleByDiameter()
{
	const float pi = 3.14;
	float number;
	cout << "please enter a number of diameter : " << endl;
	cin >> number;
	float area = (pi * number * number) / 4;
	cout << "area of circle is: " << area << endl;
}

void FindAreaOfCircleByCircumference()
{
	const float pi = 3.14;
	float number;
	cout << "please enter a number of circumference : " << endl;
	cin >> number;
	float area = (number * number) / (4 * pi);
	cout << "area of circle is: " << area << endl;
}

void FindAreaOfCircleInsideIsoscelesTriangle()
{
	const float pi = 3.14;
	float A, B;
	cout << "please enter a number of A and B : " << endl;
	cin >> A >> B;
	float area = (pi * B * B / 4) * ((2 * A - B) / (2 * A + B));
	cout << "area of circle is: " << area << endl;
}