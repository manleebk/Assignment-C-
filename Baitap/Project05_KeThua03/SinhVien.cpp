#include "SinhVien.h"



SinhVien::SinhVien()
{
	this->mssv = "null";
	this->diemTB = 0;
}
SinhVien::SinhVien(string ten, int tuoi, string diaChi, bool gioiTinh, string mssv, double diemTB) :Person(ten, tuoi, diaChi, gioiTinh) {
	this->mssv = mssv;
	this->diemTB = diemTB;
}

SinhVien::~SinhVien()
{
}
bool isNumber(string str) {
	
	for (int i = 0; i < (str.length()); i++) {
		//cout << (int)str[i] << endl;// 48-57
		if ((int)str[i]<48 || (int)str[i]>57) {
			return false;
		}
	}
	return true;
}
istream& operator>>(istream& is, SinhVien& sv) {
	cout << "ten: ";
	is >> sv.ten;
	cout << "tuoi: ";
	is >> sv.tuoi;
	cout << "dia chi: ";
	is >> sv.diaChi;

	cout << "gioi tinh: 1 la Nam, 0 la Nu ";
	is >> sv.gioiTinh;


	do {
		cout << "mssv: ";
		is >> sv.mssv;
	} while (!isNumber(sv.mssv) || (sv.mssv.length()!=10) || (int)sv.mssv[0]==48);

	do {
		cout << "diem tb: ";
		is >> sv.diemTB;
	} while (sv.diemTB < 0 || sv.diemTB >10.0);
	
	return is;
}

ostream& operator<<(ostream& os, SinhVien& sv) {
	os << setw(20) << sv.ten 
		<< setw(10) << sv.tuoi 
		<< setw(10) << sv.diaChi 
		<< setw(5) << sv.gioiTinh 
		<< setw(15) << sv.mssv 
		<< setw(10) << sv.diemTB << endl;
	return os;
}