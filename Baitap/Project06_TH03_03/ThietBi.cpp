#include "ThietBi.h"



ThietBi::ThietBi() {
	this->ma = 0;
	this->loai = "null";
	this->gia = 0;
}
ThietBi::ThietBi(int ma, string loai, int gia):ma(ma),loai(loai),gia(gia) {
}
ThietBi::ThietBi(const ThietBi&tb) {
	this->ma = tb.ma;
	this->loai = tb.loai;
	this->gia = tb.gia;
}
istream& operator>>(istream& is, ThietBi&tb) {
	cout << "ma: ";
	is >> tb.ma;
	cout << "loai: ";
	is >> tb.loai;
	cout << "gia";
	is >> tb.gia;
	return is;
}
ostream& operator<<(ostream& os, ThietBi&tb) {
	os << "ma: " << tb.ma << endl;
	os << "loai: " << tb.loai << endl;
	os << "gia: " << tb.gia << endl;
	return os;
}
ThietBi::~ThietBi()
{
}
