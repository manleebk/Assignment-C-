#pragma once
#include<iostream>
#include <cmath> 
using namespace std;
class PhanSo
{
private:
	int tuSo;
	int mauSo;
public:
	PhanSo();
	PhanSo(int, int);
	~PhanSo();
	PhanSo rutGon00();
	PhanSo rutGon();
	friend ostream &operator <<(ostream&, PhanSo);
	PhanSo operator--();
	PhanSo operator--(int);
	PhanSo operator++();
	PhanSo operator++(int);
};

