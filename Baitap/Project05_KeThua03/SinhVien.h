#pragma once
#include "Person.h"
#include"LopSinhHoat.h"

class SinhVien :
	public Person
{
public:
	string mssv;
	LopSinhHoat lopSH;
	double diemTB;
public:
	SinhVien();
	SinhVien(string, int, string, bool, string, double);
	~SinhVien();
	friend istream& operator>>(istream&, SinhVien&);
	friend ostream& operator<<(ostream&, SinhVien&);
	friend bool isNumber(string);
};

