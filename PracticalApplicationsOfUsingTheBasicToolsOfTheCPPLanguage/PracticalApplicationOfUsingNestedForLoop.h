#pragma once

#include <iostream>
using namespace std;


int read(string msg) {
	int n;
	do
	{
		cout << msg;
		cin >> n;
	} while (n < 0);
	return n;
}

string read_pass(string msg) {
	string pass = "";
	cout << msg;
	cin >> pass;
	return pass;
}

void print(string pass) {

	short c = 0;
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				string st = "";

				st = char(i) + st;
				st = st + char(j);
				st = st + char(k);
				c++;
				cout << "\n  trial [" << c << "] : " << st << endl;
				if (pass == st)
				{
					cout << "\n\n\n  Password is : " << st << endl;
					cout << "\n  Found after " << c << " trials\n" << endl;
					return;
				}
			}
		}
		cout << endl;
	}
}

// This is an example of how to use this code in the main function

//int main()
//{
//	print(read_pass("Please enter a password consisting of three capital letters: "));
//
//	return 0;
//}
