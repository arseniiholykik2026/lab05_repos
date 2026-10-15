// lw_5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath>

using namespace std;
 
double k(const double x, const double y);

int main()
{
	double p, q;

	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;

	double result = k(1 + p, q * q) * k(1 + p, q * q) - k(q * p, 1) / (1 + k(p * p, q));

	cout << "result = " << result << endl;
 };

double k(const double x, const double y) 
{
	return (sin(x) / (y * y)) + (cos(y) / (x * x));
}