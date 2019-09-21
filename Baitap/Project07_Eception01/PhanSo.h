#pragma once
#include<iostream>
#include<string>
using namespace std;
class PhanSo
{
public:
	int tuSo;
	int mauSo;
public:
	PhanSo();
	PhanSo(int, int);
	~PhanSo();

	friend ostream& operator <<(ostream&, PhanSo&);
};

