#include "Person.h"



Person::Person():ten("khong ten"),tuoi(0), diaChi("khong diaChi"), gioiTinh(false) {
}
Person::Person(string ten, int tuoi, string diaChi, bool gioiTinh):ten(ten),tuoi(tuoi),diaChi(diaChi),gioiTinh(gioiTinh) {
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
	os << "ten: " << ps.ten << endl;
	os << "tuoi: " << ps.tuoi << endl;
	os << "dia chi : " << ps.diaChi << endl;
	os << "gioi tinh: " << ps.gioiTinh << endl;
	return os;
}