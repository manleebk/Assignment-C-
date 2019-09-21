#pragma once
#include"ThietBi.h"
class QuanLy
{
public:
	ThietBi* Data;
	int size;
public:
	QuanLy();
	QuanLy(int);
	~QuanLy();

	friend istream &operator >>(istream&, QuanLy&);
	friend ostream &operator <<(ostream &, QuanLy&);
	void addLast(ThietBi);
	void deleteTB(int);
};

