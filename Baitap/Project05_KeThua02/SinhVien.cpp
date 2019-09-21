#include "SinhVien.h"

SinhVien::SinhVien() :mssv("ko cos msssv"), diemTB(0.0) {
}
SinhVien::SinhVien(string ten, int tuoi, string diaChi, bool gioiTinh, string mssv, double diem) : Person(ten, tuoi, diaChi, gioiTinh) {
	this->mssv = mssv;
	this->diemTB = diemTB;
}
SinhVien::SinhVien(const SinhVien& sv) {
	this->ten = sv.ten;
	this->tuoi = sv.tuoi;
	this->diaChi = sv.diaChi;
	this->gioiTinh = sv.gioiTinh;
	this->mssv = sv.mssv;
	this->diemTB = sv.diemTB;
}

SinhVien::~SinhVien()
{
}

ostream& operator<<(ostream& os, SinhVien& sv) {
	os << "ten: " << sv.ten << endl;
	os << "tuoi: " << sv.tuoi << endl;
	os << "dia chi : " << sv.diaChi << endl;
	os << "gioi tinh: " << sv.gioiTinh << endl;
	os << "mssv: " << sv.mssv << endl;
	os << "diemTB: " << sv.diemTB << endl;
	os << "lop: " << sv.lopSH.getLop() << endl;
	return os;
}