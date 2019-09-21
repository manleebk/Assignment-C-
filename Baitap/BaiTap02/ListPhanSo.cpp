#include "ListPhanSo.h"


ListPhanSo::ListPhanSo(int n) {
	this->n = n;
	this->data = new PhanSo[this->n];
}

ListPhanSo::~ListPhanSo() {
	delete[]this->data;
}

istream& operator >>(istream& is, ListPhanSo& list) {
	for (int i = 0; i < list.n; i++) {
		cout << i << endl;
		is >> *(list.data + i);
	}
	return is;
}
ostream& operator <<(ostream& os, ListPhanSo&list) {
	for (int i = 0; i < list.n; i++) {
		os << *(list.data + i);
	}
	return os;
}
PhanSo ListPhanSo::operator[](int i) {
	if (i < 0 || i >= n) {
		return PhanSo(0, 1);
	}
	return *(data + i);
}