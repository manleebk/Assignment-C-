#include "Person.h"



Person::Person(): ten("null"), tuoi(0), diaChi("null"), gioiTinh(false) {
}
Person::Person(string ten, int tuoi, string diaChi, bool gioiTinh) : ten(ten), tuoi(tuoi), diaChi(diaChi), gioiTinh(gioiTinh) {
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
