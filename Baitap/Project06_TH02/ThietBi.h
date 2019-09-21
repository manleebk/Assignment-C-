#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class ThietBi
{
public:
	int maTB;
	string loaiTB;
	int gia;
public:
	ThietBi();
	ThietBi(int, string, int);
	ThietBi(const ThietBi&);
	~ThietBi();

	friend istream& operator >>(istream&, ThietBi&);
	friend ostream& operator <<(ostream&, ThietBi&);
};

