#pragma once
#include<string>
#include<iostream>
using namespace std;

class ThietBi
{
public:
	int ma;
	string loai;
	int gia;
public:
	ThietBi();
	ThietBi(int, string, int);
	ThietBi(const ThietBi&);

	friend istream& operator>>(istream&, ThietBi&);
	friend ostream& operator<<(ostream&, ThietBi&);
	~ThietBi();
};

