#pragma once
#include<iostream>
using namespace std;
class PhanSo {
public:
	int tuSo;
	int mauSo;
public:
	PhanSo();
	PhanSo(int);
	PhanSo(int, int);
	PhanSo(const PhanSo&);
	~PhanSo();
	PhanSo rutGon00();
	PhanSo rutGon();
	//Da nang hoa 
	friend istream &operator >>(istream&, PhanSo&);
	//Da nang hoa <<
	friend ostream &operator <<(ostream&, PhanSo);
	/*
	Cac toan tu don hang:
	+ - ! ++ -- 
	*/
	//Da nang hoa toan tu don hang----------------------------------------------
	PhanSo operator +();
	PhanSo operator -();
	bool operator !();
	//Tien to
	PhanSo operator ++();
	PhanSo operator --();
	//Don hang hau to
	PhanSo operator ++(int);
	PhanSo operator --(int);

	//Da nang hoa toan tu nhi hang----------------------------------------------
	/*
	Cac toan tu nhi hang:
	+ - * / >> << = += -= /= 
	== != > < <= >=
	*/
	PhanSo operator+(PhanSo ps);
	PhanSo operator+(int);
	friend PhanSo operator+(int, PhanSo);
	PhanSo operator -(PhanSo ps);
	PhanSo operator-(int);
	friend PhanSo operator-(int, PhanSo);
	PhanSo operator* (PhanSo);
	PhanSo operator* (int);
	friend PhanSo operator* (int, PhanSo);
	PhanSo operator/ (PhanSo);
	PhanSo operator/ (int);
	friend PhanSo operator/ (int, PhanSo);
	PhanSo operator= (const PhanSo&);
	PhanSo operator= (const int&);
	PhanSo operator+=(PhanSo);
	PhanSo operator+=(int);
	friend PhanSo operator+=(int, PhanSo); //*
	PhanSo operator-=(PhanSo);
	PhanSo operator-=(int);
	friend PhanSo operator-=(int, PhanSo); //*
	PhanSo operator*=(PhanSo);
	PhanSo operator*=(int);
	friend PhanSo operator*=(int, PhanSo);
	PhanSo operator/=(PhanSo);
	PhanSo operator/=(int);
	friend PhanSo operator/=(int, PhanSo);
	bool operator==(PhanSo);
	bool operator==(int);
	friend bool operator==(int, PhanSo);
	bool operator!=(PhanSo);
	bool operator!=(int);
	friend bool operator!=(int, PhanSo);
	bool operator>(PhanSo);
	bool operator>(int);
	friend bool operator>(int, PhanSo);
	bool operator<(PhanSo);
	bool operator<(int);
	friend bool operator<(int, PhanSo);
	bool operator<=(PhanSo);
	bool operator<=(int);
	friend bool operator<=(int, PhanSo);
	bool operator>=(PhanSo);
	bool operator>=(int);
	friend bool operator>=(int, PhanSo);
};