#include "Person.h"



Person::Person(): ten("null"), tuoi(0), diaChi("null"), gioiTinh(false){
}
Person::Person(string ten, int tuoi, string diaChi, bool gioiTinh): ten(ten), tuoi(tuoi), diaChi(diaChi), gioiTinh(gioiTinh) {
}
Person::Person(const Person&ps) {
	this->ten = ten;
	this->tuoi = tuoi;
	this->diaChi = diaChi;
	this->gioiTinh = gioiTinh;
}

Person::~Person()
{
}
ostream& operator<<(ostream& os, Person& ps) {
	os << "ten: " << ps.ten << endl;
	os << "tuoi: " << ps.tuoi << endl;
	os << "dia chi: " << ps.diaChi << endl;
	os << "gioi tinh" << ps.gioiTinh << endl;
	return os;
}