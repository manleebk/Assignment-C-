#include "LopSinhHoat.h"


LopSinhHoat::LopSinhHoat() {
	this->lop = "15T1";
	this->n = 2;
	this->gvcn = Lecturer();
}
LopSinhHoat::LopSinhHoat(string lop, int n, Lecturer gvcn) {
	this->lop = lop;
	this->n = n;
	this->gvcn = gvcn;
}

LopSinhHoat::~LopSinhHoat()
{
}
