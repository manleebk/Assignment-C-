#include "Lecturer.h"



Lecturer::Lecturer(): maLec("null"), cap("null"){
}
Lecturer::Lecturer(string ten, int tuoi, string diaChi, bool gioiTinh, string maLec, string cap) : Person(ten, tuoi, diaChi, gioiTinh) {
	this->maLec = maLec;
	this->cap = cap;
}

Lecturer::Lecturer(const Lecturer& l) {
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
