#include "LopSinhHoat.h"

LopSinhHoat::LopSinhHoat() {
	this->lop = "null";
	this->n = 1;
	//this->dsSV = new SinhVien[this->n];
	this->gvcn = Lecturer();

}
LopSinhHoat::LopSinhHoat(string lop, int n, Lecturer l) {
	this->lop = lop;
	this->n = n;
	//this->dsSV = new SinhVien[this->n];
	this->gvcn = gvcn;
}

LopSinhHoat::~LopSinhHoat()
{
}
string LopSinhHoat::getLop() {
	return this->lop;
}