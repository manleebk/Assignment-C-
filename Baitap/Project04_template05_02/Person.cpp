#include "Person.h"

Person::Person() {
	this->ten = "null";
	this->tuoi = 0;
	this->diaChi = "null";
	this->gioiTinh = true;
}
Person::Person(string ten, int tuoi, string diaChi, bool gioiTinh):ten(ten), tuoi(tuoi), diaChi(diaChi), gioiTinh(gioiTinh){
}
Person::Person(const Person& ps) {
	this->ten = ps.ten;
	this->tuoi = ps.tuoi;
	this->diaChi = ps.diaChi;
	this->gioiTinh = ps.gioiTinh;
}
Person::~Person()
{
}
ostream& operator<<(ostream& os, Person& ps) {
	os << "Ten: " << ps.ten << endl;
	os << "Tuoi: " << ps.tuoi << endl;
	os << "Dia chi: " << ps.diaChi << endl;
	os << "Gioi tinh: " << ps.gioiTinh << endl;
	return os;
}
