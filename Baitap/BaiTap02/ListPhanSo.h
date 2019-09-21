#pragma once
#include"PhanSo.h"
class ListPhanSo {
public:
	PhanSo *data;
	int n;
public:
	ListPhanSo(int);
	~ListPhanSo();
	friend istream& operator >>(istream& , ListPhanSo&);
	friend ostream& operator <<(ostream&, ListPhanSo&);
	PhanSo operator[](int);
};
