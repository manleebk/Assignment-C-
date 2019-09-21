#include "Lecturer.h"



Lecturer::Lecturer():maLec("null"), cap("null"){
}
Lecturer::Lecturer(string ten, int tuoi, string diaChi, bool gioTinh, string maLec, string cap) : Person(ten, tuoi, diaChi, gioiTinh) {
	this->maLec = "null";
	this->cap = "null";
}

Lecturer::Lecturer(const Lecturer&l) {
	this->ten = l.ten;
	this->tuoi = l.tuoi;
	this->diaChi = l.diaChi;
	this->gioiTinh = l.gioiTinh;
	this->maLec = l.maLec;
	this->cap = l.cap;
}
Lecturer::~Lecturer()
{
}
 ostream& operator<<(ostream& os, Lecturer& l) {
// 	os << Person(l.ten,l.tuoi,l.diaChi,l.gioiTinh);
 	os << "maLec: " << l.maLec << endl;
 	os << "cap: " << l.cap << endl;
 	return os;
 }