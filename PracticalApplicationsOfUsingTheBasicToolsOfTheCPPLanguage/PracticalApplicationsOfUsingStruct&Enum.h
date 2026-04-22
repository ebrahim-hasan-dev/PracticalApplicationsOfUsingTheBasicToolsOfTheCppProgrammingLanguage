#pragma once


#include <iostream>
using namespace std;

enum enColor { red, green, yallow, blue };
enum enGender { male, female };
enum enMaritalstatus { single, maried };

struct stAddress {
	string streetname;
	string buildingno;
	string pobox;
	string zipcode;

};

struct stContactinfo {
	string phone;
	string email;
	stAddress adress;
};

struct stPerson {
	string firstname;
	string lastname;
	stContactinfo contactinfo;
	enMaritalstatus maritalstatus;
	enGender gender;
	enColor favouratecolor;
};

// This is an example of how to use this code in the main function

//int main()
//{
//	stPerson person1;
//	person1.firstname = "Ebrahim";
//	person1.lastname = "Hasan";
//	person1.contactinfo.adress.streetname = "Al-Glaaa";
//	person1.contactinfo.adress.buildingno = "8";
//	person1.contactinfo.adress.pobox = "555";
//	person1.contactinfo.adress.zipcode = "1254";
//	person1.contactinfo.phone = "01001978166";
//	person1.contactinfo.email = "ebra@hasan.com";
//	person1.gender = male;
//	person1.maritalstatus = enMaritalstatus::single;
//	person1.favouratecolor = enColor::blue;
//
//	cout << person1.firstname << "\n" <<
//		person1.lastname << "\n" << person1.contactinfo.adress.streetname << "\n" <<
//		person1.contactinfo.adress.buildingno << "\n" <<
//		person1.contactinfo.adress.pobox << "\n" << person1.contactinfo.adress.zipcode << "\n" <<
//		person1.contactinfo.phone << "\n" << person1.contactinfo.email
//		<< "\n" << person1.gender << "\n" << person1.maritalstatus << "\n" <<
//		person1.favouratecolor << "\n";
//
//	return 0;
//}