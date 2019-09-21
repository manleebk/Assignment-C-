#include "ThietBi.h"



ThietBi::ThietBi():maTB(0), loaiTB("null"), gia(0) {
}
ThietBi::ThietBi(int maTB, string loaiTB, int gia): maTB(maTB), loaiTB(loaiTB), gia(gia) {
}
ThietBi::ThietBi(const ThietBi& tb) {
	this->maTB = tb.maTB;
	this->loaiTB = tb.loaiTB;
	this->gia = tb.gia;
}
ThietBi::~ThietBi()
{
}

istream &operator>>(istream&is, ThietBi&tb) {
	cout << "maTB: ";
	is >> tb.maTB;
	cout << "loaiTB:";
	is >> tb.loaiTB;
	cout << "gia: ";
	is >> tb.gia;
	return is;
}
ostream &operator<<(ostream &o, ThietBi &tb) {
	o << setw(10) << tb.maTB << setw(10) << tb.loaiTB << setw(10) << tb.gia << endl;
	return o;
}
