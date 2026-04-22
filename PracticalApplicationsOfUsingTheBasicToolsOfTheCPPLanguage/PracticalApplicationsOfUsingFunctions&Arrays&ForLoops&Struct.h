#pragma once

#include <iostream>
#include <string>
using namespace std;


struct stinfo {
	string firstname;
	string lastname;
	int age;
	string phone;
};

void readpersons(stinfo& person)
{
	cout << "please enter your first name: ";
	cin >> person.firstname;
	cout << "please enter your last name: ";
	cin >> person.lastname;
	cout << "please enter your phone: ";
	cin >> person.phone;
	cout << "please enter your age: ";
	cin >> person.age;
}

void printpersons(stinfo person1)
{
	cout << person1.firstname << "\n" << person1.lastname << "\n" << person1.phone << "\n" << person1.age;
}

void readall(struct stinfo persons[2])
{
	readpersons(persons[0]);
	cout << "\n********************************************\n";
	readpersons(persons[1]);
	cout << "\n********************************************\n";
}

void printall(stinfo persons[2])
{
	printpersons(persons[0]);
	cout << "\n********************************************\n";
	printpersons(persons[1]);
	cout << "\n********************************************\n";
}

// This is an example of how to use this code in the main function without for loop

//int main()
//{
//	struct stinfo persons[2];
//	readall(persons);
//	printall(persons);
//
//	return 0;
//}

// ==============================================================================================================

// update two functions (readall) and (printall) using for loop


void readall(struct stinfo persons[], short& people)
{
	cout << "How many people? ";
	cin >> people;

	people = people - 1;

	for (short i = 0; i <= people; i++)
	{
		cout << "please enter person info number : " << i + 1 << "\n\n";
		readpersons(persons[i]);
		cout << "\n********************************************\n";
	}
}

void printall(stinfo persons[], short people)
{
	for (short i = 0; i <= people; i++)
	{
		cout << "that is person info number : " << i + 1 << "\n\n";
		printpersons(persons[i]);
		cout << "\n********************************************\n";
	}
}


// // This is an example of how to use this code in the main function with for loop

//int main()
//{
//	short people;
//	struct stinfo persons[100];
//	readall(persons, people);
//	printall(persons, people);
//
//	return 0;
//}