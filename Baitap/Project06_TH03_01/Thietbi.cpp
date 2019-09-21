#include "Thietbi.h"



Thietbi::Thietbi():maTB(0), loaiTB("null"), gia(0) {
}
Thietbi::Thietbi(int maTB, string loaiTB, int gia) : maTB(maTB), loaiTB(loaiTB), gia(gia) {

}
Thietbi::Thietbi(const Thietbi& tb) {
	this->maTB = tb.maTB;
	this->loaiTB = tb.loaiTB;
	this->gia = tb.gia;
}
Thietbi::~Thietbi()
{
}
istream &operator>>(istream& is, Thietbi& tb) {
	cout << "maTb: ";
	is >> tb.maTB;
	cout << "loaiTb: ";
	is >> tb.loaiTB;
	cout << "gia: ";
	is >> tb.gia;
	return is;
}
ostream &operator <<(ostream& os, Thietbi& tb) {
	os << setw(10) << tb.maTB << setw(10) << tb.loaiTB << setw(10) << tb.gia << endl;
	return os;
}