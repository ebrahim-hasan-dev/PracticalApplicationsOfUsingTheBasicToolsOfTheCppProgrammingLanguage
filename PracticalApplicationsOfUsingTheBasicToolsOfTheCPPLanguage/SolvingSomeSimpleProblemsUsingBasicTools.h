#pragma once

#include <iostream>
#include <string>
using namespace std;


// ===============================================================

// solution to problem 1

void fill_array_of_int(int arr[], int len) {
	for (int i = 0; i < len; i++)
	{
		arr[i] = i + 1;
	}
}

// ===============================================================

// solution to problem 2

void s_rand()
{
	srand((unsigned)time(NULL));
}

int random_namber(int from = 1, int to = 100)
{
	int n = rand() % (to - from + 1) + from;

	return n;
}

// ===============================================================

// solution to problem 3

char get_random_capital_character()
{
	return char(random_namber(65, 90));
}

// ===============================================================

// solution to problem 4

char get_random_small_character()
{
	return char(random_namber(97, 122));
}

// ===============================================================

// solution to problem 5

char get_random_digit_character()
{
	return char(random_namber(48, 57));
}

// ===============================================================

// solution to problem 6

char get_random_special_character()
{
	return char(random_namber(32, 47));
}

// ===============================================================

// solution to problem 7

enum enChoiceCharacter { CapitalCharacter = 1, SmallCharacter, Digit, SpecialCharacter, Mix };

char get_random_character(enChoiceCharacter ChoiceCharacter)
{
	if (ChoiceCharacter == enChoiceCharacter::Mix)
	{
		ChoiceCharacter = (enChoiceCharacter)random_namber(1, 3);
	}

	switch (ChoiceCharacter)
	{

	case enChoiceCharacter::CapitalCharacter:
	{
		return get_random_capital_character();
	}
	case enChoiceCharacter::SmallCharacter:
	{
		return get_random_small_character();
	}
	case enChoiceCharacter::Digit:
	{
		return get_random_digit_character();
	}
	case enChoiceCharacter::SpecialCharacter:
	{
		return get_random_special_character();
	}

	}
}

// ===============================================================

// solution to problem 8

string get_random_word(enChoiceCharacter ChoiceCharacters = enChoiceCharacter::CapitalCharacter, short LengthOfWord = 4)
{
	if (ChoiceCharacters == enChoiceCharacter::SpecialCharacter || ChoiceCharacters == enChoiceCharacter::Digit)
	{
		return "\nYou Must Choice Any Characters Unless Special And Digit";
	}

	string word = "";

	for (short i = 0; i < LengthOfWord; i++)
	{
		word += get_random_character(ChoiceCharacters);
	}

	return word;

}

// ===============================================================

// solution to problem 9

string generate_key(enChoiceCharacter ChoiceCharacters = enChoiceCharacter::Mix, short HowManyWord = 4, short LengthOfWord = 4)
{
	string key = "";

	for (int i = 0; i < HowManyWord; i++)
	{
		key += get_random_word(ChoiceCharacters, LengthOfWord);

		if (i != (HowManyWord - 1))
		{
			key += '-';
		}
	}

	return key;

}

// ===============================================================

// solution to problem 10

void fill_array_of_string(string arr[], int len) {
	for (int i = 0; i < len; i++)
	{
		arr[i] = generate_key();
	}
}

// ===============================================================

// solution to problem 11

void print_arr_of_string(string arr[], int len) {

	cout << "\n Array Elements : \n";

	for (int i = 0; i < len; i++)
	{
		cout << "\n Array [" << i << "] : " << arr[i] << endl;
	}
	cout << "\n\n";
}

// ===============================================================

// solution to problem 12

float sum_nums(int arr[], int len)
{
	float sum = 0;

	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}

	return sum;
}

// ===============================================================

// solution to problem 13

float avarege_nums(int arr[], int len) {

	return (float)sum_nums(arr, len) / len;
}

// ===============================================================

// solution to problem 14

void copy_array(int SourceArray[], int CopyArray[], int LengthOfSourceArray)
{
	for (int i = 0; i < LengthOfSourceArray; i++)
	{
		CopyArray[i] = SourceArray[i];
	}
}

// ===============================================================

// solution to problem 15

short is_repeat_more_than_one(int Array[], int LengthOfArray, int number)
{
	int c = 0;

	for (int i = 0; i < LengthOfArray; i++)
	{
		if (Array[i] == number)
			c++;
	}

	return c == 0 ? -1 : c == 1 ? 0 : 1;
}

void shuffle_array(int arr[], int len) {
	int arr2[50];
	int len_arr2 = 0;
	for (int i = 0; i < len; i++)
	{
		do
		{
			arr2[i] = random_namber(arr[0], arr[len - 1]);
			len_arr2++;
		} while (is_repeat_more_than_one(arr2, len_arr2, arr2[i]));
	}
	copy_array(arr2, arr, len);
}

// ===============================================================

// solution to problem 16

void add_element_in_array(int Element, int Array[], int& PositionElementinArray)
{
	Array[PositionElementinArray] = Element;

	PositionElementinArray++;
}

void copy_array_use_add_element_in_array(int arr[], int arr2[], int len, int& len2) {
	for (int i = 0; i < len; i++)
	{
		add_element_in_array(arr[i], arr2, len2);
	}
}

// ===============================================================

// solution to problem 17

void copy_array_use_add_element_in_array_only_odd_numbers(int arr[], int arr2[], int len, int& len2) {
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 != 0)
			add_element_in_array(arr[i], arr2, len2);
	}
}

// ===============================================================

// solution to problem 18

bool is_prime(int number)
{
	if (number == 1 || number == 0)
	{
		return false;
	}

	int m = number / 2;

	for (int i = 2; i <= m; i++)
	{
		if (number % i == 0)
			return false;
	}

	return true;

}

// ===============================================================

// solution to problem 19

void copy_array_use_add_element_in_array_only_prime_numbers(int arr[], int arr2[], int len, int& len2) {
	for (int i = 0; i < len; i++)
	{
		if (is_prime(arr[i]))
			add_element_in_array(arr[i], arr2, len2);
	}
}

// ===============================================================

// solution to problem 20

void make_sure_it_is_number(int& Number)
{
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Invalid Input, Please Enter a valid one : ";
		cin >> Number;
	}
}

int read_int(string MasssegeEnterNumber = "\nPlease enter a positive number : ")
{
	int n = 0;

	do
	{
		cout << MasssegeEnterNumber;
		cin >> n;

		// if user enter input not number
		make_sure_it_is_number(n);

	} while (n < 0);

	return n;

}

// ===============================================================

// solution to problem 21

void input_user_numbers_in_array(int arr[], int& len) {
	bool add_number = true;
	do
	{
		int num = read_int("\n Please enter a number : ");
		add_element_in_array(num, arr, len);
		cout << "\n Do you want to add number in array : [1] yes, [0] no ? ";
		cin >> add_number;
	} while (add_number);
}

// ==========================================================================================================================================

// solution to problem 22

string read_name() {
	string name;
	cout << "please enter your name : ";
	cin >> name;
	return name;
}
// ===============================================================

// solution to problem 23

void print_name(string name) {
	cout << "\nyour name is " << name << endl;
}

// ===============================================================

// solution to problem 24

int read_number() {
	cout << "please enter the number : ";
	int num;
	cin >> num;
	return num;
}

// ===============================================================

// solution to problem 25

enum en_number_type { Odd = 1, Even };

en_number_type check_number(int num) {
	en_number_type numtype;
	return num % 2 == 0 ? numtype = en_number_type::Even : numtype = en_number_type::Odd;
}

// ===============================================================

// solution to problem 26

void print_number(en_number_type numtype) {
	if (numtype == en_number_type::Even) {
		cout << "\nthe number is Even\n";
	}
	else {
		cout << "\nthe number is Odd\n";
	}
}

// ===============================================================

// solution to problem 27

struct st_info {
	int age;
	bool Has_driver_license;
	bool Has_recommendation;
};

st_info read_stinfo() {
	st_info info;

	cout << "How old are you : ";
	cin >> info.age;
	cout << "Do you have a driver license : ";
	cin >> info.Has_driver_license;
	cout << "Do you have a recommendation : ";
	cin >> info.Has_recommendation;

	return info;
}

// ===============================================================

// solution to problem 28

bool Is_Accepted(st_info info) {

	return info.Has_recommendation ? true : info.age >= 18 && info.Has_driver_license;

}
void print_result(st_info info) {
	if (Is_Accepted(info)) {
		cout << "\nHired\n";
	}
	else {
		cout << "\nRejected\n";
	}
}

// ===============================================================

// solution to problem 29

struct st_full_name {
	string first_name;
	string last_name;
};

st_full_name read_full_name() {
	st_full_name full_name;

	cout << "please enter your first name : ";
	cin >> full_name.first_name;
	cout << "please enter your last name : ";
	cin >> full_name.last_name;

	return full_name;
}

// ===============================================================

// solution to problem 30

string get_full_name(st_full_name full_name, bool reversed) {
	return reversed ? full_name.last_name + " " + full_name.first_name : full_name.first_name + " " + full_name.last_name;
}

// ===============================================================

// solution to problem 31

void print_full_name(string full_name) {
	cout << "\nyour full name is : " << full_name << endl;
}

// ===============================================================

// solution to problem 32

float get_half_the_number(int num) {
	return (float)num / 2;
}
void print(int num) {
	cout << "\nHalf of " + to_string(num) + " is " + to_string(get_half_the_number(num)) << endl;
}

// ===============================================================

// solution to problem 33

enum enPassFail { Pass = 1, Fail };

int read_mark() {
	int mark;
	cout << "Please enter your mark : ";
	cin >> mark;
	return mark;
}

// ===============================================================

// solution to problem 34

enPassFail check_mark(int mark) {
	return mark >= 50 ? enPassFail::Pass : enPassFail::Fail;
}

void print_result(int mark) {
	if (check_mark(mark) == enPassFail::Pass)
		cout << "\nPass\n";
	else
		cout << "\nFail\n";
}

// ===============================================================

// solution to problem 35

void read_numbers(int nums[3]) {
	cout << "Please enter three numbers :\n";
	for (int i = 0; i < 3; i++)
	{
		cin >> nums[i];
	}
}

// ===============================================================

// solution to problem 36

int sum_nums(int nums[3]) {
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum += nums[i];
	}
	return sum;
}

// ===============================================================

// solution to problem 37

float average(int sum) {
	return (float)sum / 3;
}

// ===============================================================

// solution to problem 38

enPassFail check_average(float average) {
	return average >= 50 ? enPassFail::Pass : enPassFail::Fail;
}

void print_result(float average) {
	cout << "The Average is : " << average << endl;

	if (check_average(average) == enPassFail::Pass)
		cout << "\nYou Passed" << endl;
	else
		cout << "\nYou Failed" << endl;
}

// ===============================================================

// solution to problem 39

void read_numbers(int& num1, int& num2, int& num3) {
	cout << "Please enter three numbers :\n";
	cin >> num1 >> num2 >> num3;
}

// ===============================================================

// solution to problem 40

int get_max_number(int num1, int num2, int num3) {
	if (num1 > num2) {
		if (num1 > num3)
			return num1;
		else
			return num3;
	}
	else {
		if (num2 > num3)
			return num2;
		else
			return num3;
	}
}

// ===============================================================

// solution to problem 41

void print_result_of_max_number(int num) {
	cout << "\n The max number is " << num << endl;
}

// ===============================================================

// solution to problem 42

void read_nums(int& a, int& b) {
	cout << "Please enter number of a : ";
	cin >> a;
	cout << "Please enter number of b : ";
	cin >> b;
}

// ===============================================================

// solution to problem 43

void swap_nums(int& a, int& b) {
	int tump;
	tump = a;
	a = b;
	b = tump;
}

// ===============================================================

// solution to problem 45

void print_nums(int a, int b) {
	cout << "\na = " << a << endl;
	cout << "b = " << b << endl << endl;
}

// ===============================================================

// solution to problem 46

int read2() {
	int num;
	cout << "Please enter the number between 18 & 45 : ";
	cin >> num;
	return num;
}

bool validate_num_in_range(int num, int from, int to) {
	return num >= from && num <= to;
}

int read_until_enter_correct_num(int from, int to) {
	int num = 0;
	do
	{
		num = read2();
	} while (!validate_num_in_range(num, from, to));

	return num;
}

void print_correct_number(int num) {
	cout << "\n The number " << num << " is correct." << endl;
}

// ===============================================================

// solution to problem 47

enum en_odd_or_even { All = 1, eOdd, eEven };

en_odd_or_even check_odd_or_even(int num) {
	return num % 2 == 0 ? en_odd_or_even::eEven : en_odd_or_even::eOdd;
}

int sum(int n, en_odd_or_even en) {
	int x = 0;
	if (en == en_odd_or_even::eOdd) {
		for (size_t i = 1; i <= n; i++)
		{
			if (check_odd_or_even(i) == en_odd_or_even::eOdd)
				x += i;
		}
	}
	else if (en == en_odd_or_even::eEven) {
		for (size_t i = 1; i <= n; i++)
		{
			if (check_odd_or_even(i) == en_odd_or_even::eEven)
				x += i;
		}
	}
	else {
		for (size_t i = 1; i <= n; i++)
		{
			x += i;
		}
	}
	return x;
}

void print2(int x) {
	cout << "Sum Odd numbers = " << x << endl;
}

// ===============================================================

// solution to problem 48

int read_possative_num(string massege) {
	int num;
	do
	{
		cout << massege;
		cin >> num;
	} while (num < 0);

	return num;
}

// ===============================================================

// solution to problem 49

int calc_factorial_num(int n) {
	int fact = 1;
	for (int i = n; i >= 1; i--)
	{
		fact *= i;
	}
	return fact;
}

void print3(int x) {
	cout << "The factorial number = " << x << endl;
}

// ===============================================================

// solution to problem 50

int pow_of_num(int num, int n) {
	int x = 1;
	for (int i = 0; i < n; i++)
	{
		x *= num;
	}
	return x;
}

void print_result_of_pow_number(int n) {
	cout << "\n pow of number = " << n << endl;
}

// ===============================================================

// solution to problem 51

int read(string msg, int from, int to) {
	int num;
	do
	{
		cout << msg;
		cin >> num;

	} while (num < from || num > to);

	return num;
}

// ===============================================================

// solution to problem 52

char get_grade_letter(int grade) {
	if (grade >= 90)
		return 'A';
	else if (grade >= 80)
		return 'B';
	else if (grade >= 70)
		return 'C';
	else if (grade >= 60)
		return 'D';
	else if (grade >= 50)
		return 'E';
	else
		return 'F';
}

// ===============================================================

// solution to problem 53

float read_float(string msg) {
	float num = 0;
	cout << msg;
	cin >> num;
	return num;
}

// ===============================================================

// solution to problem 54

float get_commission_percentage(float total_sales) {
	if (total_sales >= 1000000)
		return 0.01;
	else if (total_sales >= 500000)
		return 0.02;
	else if (total_sales >= 100000)
		return 0.03;
	else if (total_sales >= 50000)
		return 0.05;
	else
		return 0.00;
}

float calc_total_commission(float total_sales) {
	return get_commission_percentage(total_sales) * total_sales;
}

// ===============================================================

// solution to problem 55

struct st_piggy_bank {
	int pennies, nickels, dimes, quarters, dollars;
};

st_piggy_bank read_st_piggy_bank() {
	st_piggy_bank piggy_bank;
	cout << "please enter total pennies : ";
	cin >> piggy_bank.pennies;
	cout << "please enter total nickels : ";
	cin >> piggy_bank.nickels;
	cout << "please enter total dimes : ";
	cin >> piggy_bank.dimes;
	cout << "please enter total quarters : ";
	cin >> piggy_bank.quarters;
	cout << "please enter total dollars : ";
	cin >> piggy_bank.dollars;

	return piggy_bank;
}

float calc_total_pennies(st_piggy_bank piggy_bank) {
	return piggy_bank.pennies + piggy_bank.nickels * 5 + piggy_bank.dimes * 10 +
		piggy_bank.quarters * 25 + piggy_bank.dollars * 100;
}

// ===============================================================

// solution to problem 56

enum en_operation_type { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

int read_intger(string msg) {
	int n = 0;
	cout << msg;
	cin >> n;
	return n;
}

en_operation_type read_operation_type() {
	char op = '+';
	cout << "Please enter operation type ( + , - , * , / ) : ";
	cin >> op;
	return (en_operation_type)op;
}

float calc(int num1, int num2, en_operation_type op) {
	switch (op)
	{
	case Add:
		return num1 + num2;
	case Subtract:
		return num1 - num2;
	case Multiply:
		return num1 * num2;
	case Divide:
		return num1 / num2;
	default:
		return num1 + num2;
	}
}

// ===============================================================

// solution to problem 57

int print_until_100() {
	int x = 0, n = 0, c = 1;
	do
	{
		x = read_int("enter the number : " + to_string(c) + ": ");
		if (x == -99) break;

		n += x;
		c++;
	} while (x != -99);

	return n;
}

// ===============================================================

// solution to problem 58

bool is_Prime_number(int n) {
	for (int i = 2; i <= n - 1; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

void print_prime_number(int n) {
	switch (is_Prime_number(n))
	{
	case true:
		cout << "\n " << n << " is a Prime number" << endl;
		break;
	case false:
		cout << "\n " << n << " is a not Prime number" << endl;
	}
}

// ===============================================================

// solution to problem 59

float CalcRemainder(float totalBill, float cashPaid) {
	return cashPaid - totalBill;
}

void print(float totalBill, float cashPaid) {
	float x = CalcRemainder(totalBill, cashPaid);
	if (x > 0)
		cout << "You give to the customer = " << x << endl;
	else
		cout << "You take from the customer = " << x * -1 << endl;
}

// ===============================================================

// solution to problem 60

float AddServiceFeeAndSalesTax(float BillValue) {
	BillValue *= 1.10;
	BillValue *= 1.16;
	return  BillValue;
}

void print_totalBill(float totalBill) {
	cout << "\n Total Bill = " << totalBill << endl;
}

// ===============================================================

// solution to problem 61

struct st_time {
	float days;
	float hours;
	float minutes;
	float seconds;
};

st_time read_st_time() {
	st_time x;
	cout << "Please enter a number of days : ";
	cin >> x.days;
	cout << "Please enter a number of hours : ";
	cin >> x.hours;
	cout << "Please enter a number of minutes : ";
	cin >> x.minutes;
	cout << "Please enter a number of seconds : ";
	cin >> x.seconds;
	return x;
}

float calc_totalseconds(st_time x) {
	float total_secondes = x.days * 24 * 60 * 60;
	total_secondes += x.hours * 60 * 60;
	total_secondes += x.minutes * 60;
	total_secondes += x.seconds;
	return total_secondes;
}

void print(float totalseconds) {
	cout << endl << "Total Seconds = " << totalseconds << endl;

}

// ===============================================================

// solution to problem 62

st_time calc(int seconds) {
	st_time f;
	int secondsperday = 24 * 60 * 60;
	int secondsperhour = 60 * 60;
	int secondsperminute = 60;

	f.days = seconds / secondsperday;
	int remainder = seconds % secondsperday;
	f.hours = remainder / secondsperhour;
	remainder = remainder % secondsperhour;
	f.minutes = remainder / secondsperminute;
	remainder = remainder % secondsperminute;
	f.seconds = remainder;

	return f;
}

void print(st_time f) {
	cout << "\n " << f.days << " Days : " << f.hours << " Hours : " <<
		f.minutes << " Minutes : " << f.seconds << " Seconds" << endl;
}

// ===============================================================



