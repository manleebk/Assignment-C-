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
	o << ps.tuSo << "/" << ps.mauSo << endl;
	return o;
}

//Toan tu don hang
PhanSo PhanSo::operator +() {
	return *this;
}
PhanSo PhanSo::operator -() {
	PhanSo ps(-this->tuSo, this->mauSo);
	//cout << ps;
	*this = ps;
	return *this;
}
bool PhanSo::operator !() {
	if (this->tuSo != 0) {
		return true;
	}
		return false;
}
PhanSo PhanSo::operator++() {
	this->tuSo = this->tuSo + this->mauSo;
	this->mauSo = this->mauSo;
	return *this;
}
PhanSo PhanSo::operator--() {
	this->tuSo = this->tuSo - this->mauSo;
	this->mauSo = this->mauSo;
	return *this;
}
	//hau to
PhanSo PhanSo::operator++(int x) {
	PhanSo ps = *this;
	*this = *this + 1;
	return ps;
}
PhanSo PhanSo::operator--(int x) {
	PhanSo ps00 = *this;
	*this = *this - 1;
	//cout << *this;
	return ps00;
}
//Toan tu nhi hang
PhanSo PhanSo::operator+(PhanSo ps) {
	this->tuSo = this->tuSo*ps.mauSo + this->mauSo*ps.tuSo;
	this->mauSo = this->mauSo*ps.mauSo;
	this->rutGon();
	return *this;
}
PhanSo PhanSo::operator+ (int so) {
	PhanSo ps(so, 1);
	return *this + ps;
}
PhanSo operator+ (int so, PhanSo ps) {
	return ps + so;
}

PhanSo PhanSo::operator-(PhanSo ps) {
	PhanSo ps00(-ps.tuSo, ps.mauSo);
	*this = *this + ps00;
	*this = this->rutGon();
	//cout << "lost" << endl;
	return *this;
}
PhanSo PhanSo::operator- (int so) {
	PhanSo ps(-so, 1);
	return (*this + ps);
}
PhanSo operator-(int so, PhanSo ps) {
	return -(ps - so);
}

PhanSo PhanSo::operator* (PhanSo ps) {
	this->tuSo = this->tuSo*ps.tuSo;
	this->mauSo = this->mauSo*ps.mauSo;
	this->rutGon();
	return *this;
}
PhanSo PhanSo::operator*(int so) {
	PhanSo ps(so, 1);
	return *this*ps;
}
PhanSo operator* (int so, PhanSo ps) {
	return ps * so;
}
PhanSo PhanSo::operator/ (PhanSo ps) {
	PhanSo ps00(ps.mauSo, ps.tuSo);
	*this = *this * ps00;
	this->rutGon();
	return *this;
}
PhanSo PhanSo::operator/ (int so) {
	PhanSo ps(so, 1);
	return (*this / ps).rutGon();
}
PhanSo operator/ (int so, PhanSo ps) {
	PhanSo ps00(so, 1);
	return ps00 / ps;
}
PhanSo PhanSo::operator= (const PhanSo& ps) {
	this->tuSo = ps.tuSo;
	this->mauSo = ps.mauSo;
	this->rutGon();
	return *this;
}
PhanSo PhanSo::operator= (const int& so) {
	PhanSo ps(so, 1);
	*this = ps;
	return *this;
}
PhanSo PhanSo::operator+=(PhanSo ps) {
	*this = *this + ps;
	return *this;
}
PhanSo PhanSo::operator+=(int so) {
	PhanSo ps(so,1);
	*this += ps;
	return *this;
}

PhanSo operator+=(int so, PhanSo ps) {
	//static_cast<PhanSo>(so);
	//(PhanSo)so =  ps00;
	cout << "Phan so: " << so << endl;
	return so + ps;
}
PhanSo PhanSo::operator-=(PhanSo ps) {
	return (*this - ps).rutGon();
}
PhanSo PhanSo::operator-=(int so) {
	return (*this - so).rutGon();
}
PhanSo operator-=(int so, PhanSo ps) {
	static_cast<PhanSo>(so);
	return (so - ps).rutGon();
}
PhanSo PhanSo::operator*=(PhanSo ps) {
	*this = *this*ps;
	return *this;
}
PhanSo PhanSo::operator*=(int so) {
	return *this*PhanSo(so,1);
}
PhanSo operator*=(int so, PhanSo ps) {
	return ps * PhanSo(so,1);
}
PhanSo PhanSo::operator/=(PhanSo ps) {
	return *this / ps;
}
PhanSo PhanSo::operator/=(int so) {
	return *this / so;
}
PhanSo operator/=(int so, PhanSo ps) {
	return so / ps;
}
bool PhanSo::operator== (PhanSo ps) {
	PhanSo ps00 = ps.rutGon();
	if (this->tuSo*ps00.mauSo == this->mauSo*ps00.tuSo)
		return true;
	return false;
}
bool PhanSo::operator== (int so) {
	PhanSo ps(so, 1);
	if (*this == ps)
		return true;
	return false;
}
bool operator==(int so, PhanSo ps) {
	if (ps == so) {
		return true;
	}
	return false;
}
bool PhanSo::operator!=(PhanSo ps) {
	if (*this == ps) {
		return false;
	}
		return true;
}
bool PhanSo::operator!=(int so) {
	if (*this == so) {
		return false;
	}
		return true;
}
bool operator!=(int so, PhanSo ps) {
	if (so != ps) {
		return true;
	}
	return false;
}
bool PhanSo::operator>(PhanSo ps) {
	if (this->tuSo*ps.mauSo > this->mauSo*ps.tuSo) {
		return true;
	}
	return false;
}
bool PhanSo::operator>(int so) {
	if (this->tuSo > this->mauSo*so) {
		return true;
	}
	return false;
}
bool operator>(int so, PhanSo ps) {
	if (so*ps.mauSo > ps.tuSo) {
		return true;
	}
	return false;
}
bool PhanSo::operator<(PhanSo ps) {
	if (this->tuSo*ps.mauSo < this->mauSo*ps.tuSo) {
		return true;
	}
	return false;
}
bool PhanSo::operator<(int so) {
	if (this->tuSo < this->mauSo*so) {
		return true;
	}
	return false;
}
bool operator<(int so, PhanSo ps) {
	if (so*ps.mauSo < ps.tuSo) {
		return true;
	}
	return false;
}
bool PhanSo::operator<=(PhanSo ps) {
	if (*this < ps || *this == ps) {
		return true;
	}
	return false;
}
bool PhanSo::operator<=(int so) {
	if (*this < so || *this == so) {
		return true;
	}
	return false;
}
bool operator<=(int so, PhanSo ps) {
	if (so < ps || so == ps) {
		return true;
	}
	return false;
}
bool PhanSo::operator>=(PhanSo ps) {
	if (*this > ps || *this == ps) {
		return true;
	}
	return false;
}
bool PhanSo::operator>=(int so) {
	if (*this > so || *this == so) {
		return true;
	}
	return false;
}
bool operator>=(int so, PhanSo ps) {
	if (so > ps || so == ps) {
		return true;
	}
	return false;
}