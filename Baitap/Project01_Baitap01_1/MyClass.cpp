#include "MyClass.h"
#include<iostream>
using namespace std;

int MyClass::count = 2;

MyClass::MyClass() {
	this->count++;
	cc++;
	c++;
}

MyClass::~MyClass() {
	this->count--;
	cc--;
	c--;
	cout << "Static delete: " << this->count <<endl;
	cout << "Global cc: " << cc << endl;
	cout << "Member c: " << c << endl;
}

void MyClass::show() {
	cout << "Static There are current count: " << this->count << endl;
	cout << "Global cc: " << cc << endl;
	cout << "Member c: " << c << endl;
}