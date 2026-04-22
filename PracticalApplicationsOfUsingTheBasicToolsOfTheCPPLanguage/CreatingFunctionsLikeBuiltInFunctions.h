#pragma once

#include <iostream>
using namespace std;


float my_abs(float n) {
	return n >= 0 ? n : n * -1;
}

int my_round_fast_and_easy_algorithm(float n) {
	int num = n;

	if (n == num) { return n; }

	return n > 0 ? n + 0.5 : n - 0.5;
}

float my_fraction(float n) {
	return n - int(n);
}

int my_round2(float n) {

	int int_part = int(n);
	float farction = my_fraction(n);
	if (my_abs(farction) >= 0.5)
	{
		if (n > 0)
			return ++int_part;
		else
			return --int_part;
	}
	else
		return int_part;
}

int my_floor(float n) {
	int num = n;

	if (n == num) { return n; }

	return n >= 0 ? n : --n;
}

int my_ceil(float n) {
	int num = n;

	if (n == num) { return n; }

	return n >= 0 ? ++n : n;
}

int my_ceil2(float n) {
	int num = n;

	if (abs(my_fraction(n)) == 0)
		return n;
	else
		return n >= 0 ? ++n : n;
}

int my_pow(int n, int pow) {
	if (pow <= 1)
		return n * pow;

	int c = 1;
	for (int i = 0; i < pow; i++)
	{
		c *= n;
	}
	return c;
}

float my_sqrt(float n) {

	for (float i = 2; i < n; i++)
	{
		if (i * i == n)
			return i;
	}
}

float my_sqrt2(float n) {
	return pow(n, 0.5);
}
