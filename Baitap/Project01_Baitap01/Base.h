#pragma once
#include<iostream>
using namespace std;
class Base
{
private:
	int x;
	int y;
public:
	Base();
	Base(int, int);
	Base(const Base&);
	~Base();

	friend istream &operator >>(istream &, Base&);
	friend ostream &operator <<(ostream &, Base&);
};

