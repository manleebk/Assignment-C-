#pragma once
#include "Person.h"
#include "LopSinhHoat.h"



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
	SinhVien(const SinhVien&);
	~SinhVien();
	friend ostream& operator<<(ostream&, SinhVien&);
};

