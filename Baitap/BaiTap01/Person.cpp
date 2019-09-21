#include "Person.h"
#include<iostream>
#include<iomanip>
using namespace std;

Person::Person() {
	this->ten = "no Name";
	this->tuoi = 0;
	this->diaChi = "no address";
	this->gioiTinh = false;
}
Person::Person(string name, int age, string add, bool gender) {
	this->ten = name;
	this->tuoi = age;
	this->diaChi = add;
	this->gioiTinh = gender;
}
Person::Person(const Person&ps) {
	this->ten = ps.ten;
	this->tuoi = ps.tuoi;
	this->diaChi = ps.diaChi;
	this->gioiTinh = ps.gioiTinh;
}
Person::~Person() {

}
/*
void Person::showPerson() {
	cout <<"Ten: "<<this->ten<<endl;
	cout <<"Tuoi: "<<this->tuoi<<endl;
	cout <<"dia chi: " <<this->diaChi <<endl;
	cout <<"gioi tinh: " <<this->gioiTinh<<endl;
}*/
istream &operator >>(istream &i, Person &ps) {
	do {
		cout << "Ten: ";
		cin >> ps.ten;
	} while (ps.ten == "");

	do {
		cout << "Tuoi: ";
		cin >> ps.tuoi;
	} while (ps.tuoi < 0 || ps.tuoi>150);
	do {
		cout << "Dia chi: ";
		cin >> ps.diaChi;
	} while (ps.diaChi == "");
	int check;
	do {

		cout << "Gioi tinh(0: Nu, 1: Nam): ";
		cin >> check;
		if (check == 1) {
			ps.gioiTinh = true;
			break;
		}
		else if (check == 0) {
			ps.gioiTinh = false;
			break;
		}
	} while (check != 0 || check != 1);
	return i;
}
ostream &operator <<(ostream &o, Person ps) {
	o << setw(7) << ps.ten << setw(10) << ps.tuoi << setw(14) << ps.diaChi << setw(9) << ps.gioiTinh << endl;
	cout << "_______________________________________________" << endl;
	return o;
}