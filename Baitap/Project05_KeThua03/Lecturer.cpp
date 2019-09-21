#include "Lecturer.h"



Lecturer::Lecturer(): maLec("null"), cap("null") {
}
Lecturer::Lecturer(string ten, int tuoi, string diaChi, bool gioiTinh, string maLec, string cap) :Person(ten, tuoi, diaChi, gioiTinh) {
	this->maLec = maLec;
	this->cap = cap;
}

Lecturer::~Lecturer()
{
}
ostream& operator<<(ostream& os, Lecturer&l) {
	os << setw(15) << l.ten 
		<< setw(10) << l.tuoi 
		<<setw(10)<<l.diaChi 
		<< setw(5) << l.gioiTinh 
		<< setw(15) << l.maLec 
		<< setw(15) << l.cap << endl;
	return os;
}