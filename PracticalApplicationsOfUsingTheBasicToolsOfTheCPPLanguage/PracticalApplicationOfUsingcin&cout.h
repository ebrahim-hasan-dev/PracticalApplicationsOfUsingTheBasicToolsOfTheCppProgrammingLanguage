#pragma once

#include <iostream>
using namespace std;


void PracticalApplicationOfUsingcinAndcout()
{
	string stars = "********************************";
	string name;
	cout << "please enter your name" << endl;
	cin >> name;
	short int age;
	cout << "please enter your age" << endl;
	cin >> age;
	string city;
	cout << "please enter your city" << endl;
	cin >> city;
	string country;
	cout << "please enter your country" << endl;
	cin >> country;
	float monthlysalary;
	cout << "please type a monthly salary" << endl;
	cin >> monthlysalary;
	float yearlysalary;
	cout << "please type a yearly salary" << endl;
	cin >> yearlysalary;
	char gender;
	cout << "please enter your gender" << endl;
	cin >> gender;
	bool ismarried;
	cout << "Are you married" << endl;
	cin >> ismarried;
	cout << stars << endl << "your name is : " << name << endl << "your age is : " << age << " years" << endl << "your city is: " << city <<
		endl << "your country is : " << country << endl << "your monthly Salary is : " << monthlysalary
		<< endl << "your yearly Salary is : " << yearlysalary << endl
		<< "your gender is : " << gender << endl << "Married : " << ismarried << endl << stars << endl;
}

