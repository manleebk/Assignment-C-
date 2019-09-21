#include "SinhVien.h"

SinhVien::SinhVien():mssv(""), diemTB(0.0){
}
SinhVien::SinhVien(string ten, int tuoi, string diaChi, bool gioiTinh, string mssv, double diem) : Person(ten, tuoi, diaChi, gioiTinh) {
	this->mssv = mssv;
	//this->lopSH = lopSH;
	this->diemTB = diemTB;
}
SinhVien::SinhVien(const SinhVien& sv) {
	this->ten = sv.ten;
	this->tuoi = sv.tuoi;
	this->diaChi = sv.diaChi;
	this->gioiTinh = sv.gioiTinh;
	this->mssv = sv.mssv;
	//this->lopSH = sv.lopSH;
	this->diemTB = sv.diemTB;
}
SinhVien::~SinhVien()
{
}
ostream& operator<<(ostream& os, SinhVien& sv) {
	// cái này m tự ngĩ hay đọc ở chỗ nào đây , t nghỉ rk á, 
	//comment dòng nớ lại thử
	//Person ps(sv.ten, sv.tuoi, sv.diaChi, sv.gioiTinh);
	//os << ps;
	os << "mssv: " << sv.mssv << endl;
	os << "diemTB: " << sv.diemTB << endl;
	os << "lop: " << sv.lopSH.getLop() << endl;
	return os;
}