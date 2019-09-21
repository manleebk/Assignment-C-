#include "QuanLy.h"



QuanLy::QuanLy() {
}
QuanLy::QuanLy(int size) {
	this->size = size;
	this->Data = new ThietBi[this->size];
}

QuanLy::~QuanLy()
{
}

istream& operator>> (istream& is, QuanLy& ql) {
	ql.Data = new ThietBi[ql.size];
	for (int i = 0; i < ql.size; i++)
	{
		cin >> *(ql.Data + i);
	}
	return is;
}
ostream& operator<< (ostream& os, QuanLy& ql) {
	cout <<setw(5) <<"STT"<< setw(10) << "maTB" << setw(10) << "loaiTB" << setw(10) << "gia" << endl;
	for (int i = 0; i < ql.size; i++) {
		cout << setw(5) << i;
		cout << *(ql.Data + i);
	}
	return os;
}

void QuanLy::addLast(ThietBi tb) {
	ThietBi *tmp = new ThietBi[this->size];
	for (int i = 0; i < this->size; i++)
	{
		*(tmp + i) = *(this->Data + i);
	}
	delete[] this->Data;
	this->size++;
	this->Data = new ThietBi[this->size];
	for (int i = 0; i < this->size-1; i++)
	{
		*(this->Data + i) = *(tmp + i);
	}
	*(this->Data + size-1) = tb;
	delete[] tmp;
}

void QuanLy::deleteTB(int vt) {
	if (vt < 0 || vt > this->size) {
		cout << "Vi tri khong hop le!!!!" << endl;
	}
	else {
		ThietBi* tmp = new ThietBi[this->size - 1];
		for (int i = 0; i < vt; i++)
		{
			*(tmp + i) = *(this->Data + i);
		}
		for (int i = vt; i < this->size-1; i++)
		{
			*(tmp + i) = *(this->Data + i + 1);
		}
		delete[] this->Data;
		this->size--;
		this->Data = new ThietBi[this->size];
		for (int i = 0; i < this->size; i++)
		{
			*(this->Data + i) = *(tmp + i);
		}
		delete[] tmp;
	}
}

