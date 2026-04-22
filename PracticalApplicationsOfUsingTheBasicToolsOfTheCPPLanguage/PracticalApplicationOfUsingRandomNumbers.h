#pragma once

#include <iostream>
using namespace std;

int FindingRandomNumberWithinCertainRange(int from, int to) {
	int n = rand() % (to - from + 1) + from;
	return n;
}


// This is an example of how to use this code in the main function

//int main()
//{
//	//هذا السطر بيعرف المولد العشوائي انه يبدا منين 
//	srand((unsigned)time(NULL));
//
//	cout << FindingRandomNumberWithinCertainRange(11, 12) << endl;
//	return 0;
//}
