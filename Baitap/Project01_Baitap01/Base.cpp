#include "Base.h"

Base::Base() {
	this->x = 1;
	this->y = 1;
}
Base::Base(int x, int y) {
	Base::x = x;
	Base::y = y;
}
Base::Base(const Base&bs) {
	Base::x = bs.x;
	Base::y = bs.y;
}
Base::~Base()
{
}
istream& operator >>(istream& is, Base& bs) {
	cout << "x: ";
	is >> bs.x;
	cout << "y: ";
	is >> bs.y;
	return is;
}
ostream& operator <<(ostream& os, Base& bs) {
	os << "x = " << bs.x << endl;
	os << "y = " << bs.y << endl;
	return os;
}
