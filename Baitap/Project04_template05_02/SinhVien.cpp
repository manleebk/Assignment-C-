#include "SinhVien.h"


template<typename T, typename U>
SinhVien<T,U>::SinhVien() {
}
template<typename T, typename U>
SinhVien<T,U>::SinhVien(string ten, int tuoi, string diaChi, bool gioiTinh, T mssv, U diem):Person(ten, tuoi, diaChi, gioiTinh) {
	this->mssv = mssv;
	this->diem = diem;
}

template<typename T, typename U>
SinhVien<T,U>::~SinhVien()
{
}

template<typename T, typename U>
void SinhVien<T,U>::show() {
	cout << "Ten: " << this->ten << endl;
	cout << "Tuoi: " << this->tuoi << endl;
	cout << "Dia chi: " << this->diaChi << endl;
	cout << "Gioi tinh: " << this->gioiTinh << endl;
	cout << "Mssv: " << this->mssv << endl;
	cout << "Diem: " << this->diem << endl;
}