#pragma once

#include <iostream>
using namespace std;


void read_array(short array[], short& length)
{
	cout << "How many numbers do you want from thr Array consisting of 1 to 100 : ";
	cin >> length;

	length = length - 1;

	for (short i = 0; i <= length; i++)
	{
		cout << "\nplease enter number " << i + 1 << ": ";
		cin >> array[i];
	}
}

void print_array(short array[], short length)
{
	for (short i = 0; i <= length; i++)
	{
		cout << "number " << i + 1 << " = " << array[i] << endl;
	}
}

float sum_array(short array[], short length)
{
	float sum = 0;
	for (short i = 0; i <= length; i++)
	{
		sum += array[i];
	}
	return (sum);
}


// This is an example of how to use this code in the main function

//int main()
//{
//	short array[100], length = 0;
//
//	read_array(array, length);
//	cout << "*********************************************\n";
//	print_array(array, length);
//	cout << "*********************************************\n";
//	cout << "sum array = " << sum_array(array, length) << "\n\n";
//	float sum = sum_array(array, length) / (length + 1);
//	cout << "average = " << sum << "\n";
//
//	return 0;
//}
