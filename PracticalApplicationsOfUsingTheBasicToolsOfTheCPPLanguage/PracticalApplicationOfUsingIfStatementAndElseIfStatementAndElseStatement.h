#pragma once

#include <iostream>
#include <string>
using namespace std;


void PracticalApplicationOfUsingIfStatementAndElseIfStatementAndElseStatement()
{
	short num_of_Month;

	cout << "please enter the numbers of month\n";
	cin >> num_of_Month;

	if (num_of_Month == 1)
	{
		cout << "jan" << endl;
	}

	else if (num_of_Month == 2)
	{
		cout << "geb" << endl;
	}

	else if (num_of_Month == 3)
	{
		cout << "mar" << endl;
	}
	else if (num_of_Month == 4)
	{
		cout << "apr" << endl;
	}
	else if (num_of_Month == 5)
	{
		cout << "may" << endl;
	}
	else if (num_of_Month == 6)
	{
		cout << "june" << endl;
	}
	else if (num_of_Month == 7)
	{
		cout << "july" << endl;
	}
	else if (num_of_Month == 8)
	{
		cout << "aug" << endl;
	}
	else if (num_of_Month == 9)
	{
		cout << "sep" << endl;
	}
	else if (num_of_Month == 10)
	{
		cout << "oct" << endl;
	}
	else if (num_of_Month == 11)
	{
		cout << "nov" << endl;
	}
	else if (num_of_Month == 12)
	{
		cout << "dec" << endl;
	}
	else 
	{ 
		cout << "wrong answer\n"; 
	}
}