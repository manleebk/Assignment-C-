#pragma once
#include"Lecturer.h"
//#include"SinhVien.h"
class SinhVien;
class LopSinhHoat
{
public: 
	string lop;
	int n; // so luong sv
	SinhVien *dsSV;
	Lecturer gvcn;
public:
	LopSinhHoat();
	LopSinhHoat(string, int, Lecturer);
	~LopSinhHoat();
	string getLop();
};

