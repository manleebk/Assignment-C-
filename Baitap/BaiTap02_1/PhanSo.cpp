#include "PhanSo.h"



PhanSo::PhanSo():tuSo(0), mauSo(1) {
}
PhanSo::PhanSo(int tu, int mau) : tuSo(tu), mauSo(mau) {
}

PhanSo::~PhanSo() {
}

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
	else if (this->tuSo*this->mauSo >0) {
		this->tuSo = abs(this->tuSo);
		this->mauSo = abs(this->mauSo);
		return *this;
	}
	else if (this->tuSo*this->mauSo < 0) {
		PhanSo ps;
		ps.tuSo = abs(this->tuSo);
		ps.mauSo = abs(this->mauSo);
		ps.rutGon00();
		this->tuSo = -ps.tuSo;
		this->mauSo = ps.mauSo;
		return *this;
	}
}
ostream &operator <<(ostream&o, PhanSo ps) {
	ps = ps.rutGon();
	o << ps.tuSo << "/" << ps.mauSo;
	return o;
}
PhanSo PhanSo::operator--() {
	this->tuSo = this->tuSo - this->mauSo;
	this->mauSo = this->mauSo;
	return *this;
}
PhanSo PhanSo::operator--(int x) {
	PhanSo ps00 = this->rutGon();
	--(*this);
	return ps00.rutGon();
}
PhanSo PhanSo::operator++() {
	this->tuSo = this->tuSo + this->mauSo;
	this->mauSo = this->mauSo;
	return *this;
}
PhanSo PhanSo::operator++(int x) {
	PhanSo ps = *this;
	++*this;
	return ps;
}