#pragma once
#include "Lecturer.h"
//#include "SinhVien.h"   // dung con tro ko can include
class SinhVien;
class LopSinhHoat
{
public:
	string lop;
	int n; //so luong sinh vien
	SinhVien* danhsachSV;
	Lecturer gvcn;
public:
	LopSinhHoat();
	~LopSinhHoat();
	string getLop();
	friend ostream& operator<<(ostream&, LopSinhHoat&);
};

