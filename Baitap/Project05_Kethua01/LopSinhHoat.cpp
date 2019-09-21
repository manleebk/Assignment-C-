#include "LopSinhHoat.h"
//class SinhVien;

LopSinhHoat::LopSinhHoat() {
	this->lop = "null";
	this->n = 1;

	// cái chỗ này khoan khai báo contror đã
	// this->danhsachSV = new SinhVien[this->n];
	Lecturer l;
	this->gvcn = l;

}


LopSinhHoat::~LopSinhHoat() {
}
string LopSinhHoat::getLop() {
	return this->lop;
}
ostream& operator<<(ostream& os, LopSinhHoat&lopSH) {
	os << "lop: " << lopSH.lop << endl;
	os << "gvcn: " << lopSH.gvcn << endl;
	return os;
}