#pragma once

#include <iostream>
using namespace std;


enum en_week_day { str = 1, sun, mon, tuas, wed, thers };

void the_show()
{
	cout << "please enter the number of day : ";
}

short read_num_of_day()
{
	short num_of_day;
	cin >> num_of_day;

	return (num_of_day);
}

string get_num_of_day(short num_of_day)
{
	switch (num_of_day)
	{
	case en_week_day::str:
		return("str");
		break;
	case sun:
		return("sun");
		break;
	case mon:
		return("mon");
		break;
	case tuas:
		return("tuas");
		break;
	case wed:
		return("wed");
		break;
	case thers:
		return("thers");
		break;
	default:
		return("invalid answer");
	}
}

// This is an example of how to use this code in the main function

//int main()
//{
//	the_show();
//	cout << get_num_of_day(read_num_of_day()) << "\n";
//
//	return 0;
//}