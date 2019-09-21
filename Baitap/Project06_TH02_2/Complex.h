#pragma once
#include<iostream>
using namespace std;
class Complex
{
public:
	int real;
	int img;
public:
	Complex();
	Complex(int, int);
	Complex(const Complex&);
	~Complex();

	friend istream &operator >>(istream&, Complex&);
	friend ostream &operator <<(ostream&, Complex&);

	Complex operator+(Complex);
	Complex operator-(Complex);
	Complex operator*(Complex);
	Complex operator/(Complex);
};

