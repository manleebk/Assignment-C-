#include "PhanSo.h"




PhanSo::PhanSo() {
	int ts;
	int ms;
	cout << "ts: ";
	cin >> ts;
	bool check;
	do {
		check = true;
		try {
			cout << "Mau so: ";
			cin >> ms;
		}
		catch(string &s) {
			cout << s <<endl;
			cout << "Mau bang 0" << endl;
		};
	} while(!ms);
	this->mauSo = ms;
}

PhanSo::PhanSo(int x, int y) {
	if (y == 0) {
		throw string("Mau =0");
	}
	else {
		this->tuSo = x;
		this->mauSo = y;
	}
}
PhanSo::~PhanSo()
{
}

ostream& operator <<(ostream& os, PhanSo& ps) {
	os << ps.tuSo << "/" << ps.mauSo << endl;
	return os;
}
