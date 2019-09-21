#pragma once
#include<string>
#include<iomanip>
#include<iostream>
using namespace std;

class Thietbi
{
public:
	int maTB;
	string loaiTB;
	int gia;
public:
	Thietbi();
	Thietbi(int, string, int);
	Thietbi(const Thietbi&);
	~Thietbi();

	friend istream &operator>>(istream&, Thietbi&);
	friend ostream &operator<<(ostream&, Thietbi&);
};

