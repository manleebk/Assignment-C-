#include "PhanSo.h"
#include<iostream>
using namespace std;

PhanSo::PhanSo() : tuSo(0), mauSo(1) {
}
PhanSo::PhanSo(int ts) : tuSo(ts), mauSo(1) {
}
PhanSo::PhanSo(int ts, int ms) : tuSo(ts), mauSo(ms) {
}
PhanSo::PhanSo(const PhanSo&ps) : tuSo(ps.tuSo), mauSo(ps.mauSo) {

}
PhanSo::~PhanSo() {
}
//Rut gon phan so
PhanSo PhanSo::rutGon00() {
	int min = this->tuSo < this->mauSo ? this->tuSo : this->mauSo;
	for (int i = min; i > 1; i--) {
		if (this->tuSo%i == 0 && this->mauSo%i == 0) {
			this->tuSo = this->tuSo / i;
			this->mauSo = this->mauSo / i;
			break;
		}
	}
	return *this;
}
PhanSo PhanSo::rutGon() {
	if (this->mauSo == 1) {
		return *this;
	}
	else if (this->tuSo*this->mauSo > 0) {
		this->tuSo = abs(this->tuSo);
		this->mauSo = abs(this->mauSo);
		return this->rutGon00();
	}
	else if (this->tuSo*this->mauSo < 0) {
		PhanSo ps;
		ps.tuSo = abs(this->tuSo);
		ps.mauSo = abs(this->mauSo);
		ps = ps.rutGon00();
		this->tuSo = -ps.tuSo;
		this->mauSo = ps.mauSo;
		return *this;
	}
}
//Da nang hoa >>
istream &operator >>(istream&i, PhanSo&ps) {
	cout << "Tu so: ";
	i >> ps.tuSo;
	do {
		cout << "Mau so: ";
		i >> ps.mauSo;
	} while (!ps.mauSo);
	return i;
}
ostream &operator <<(ostream&o, PhanSo ps) {
	ps = ps.rutGon();
	o << ps.tuSo << "/" << ps.mauSo;
	return o;
}
