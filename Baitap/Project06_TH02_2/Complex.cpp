#include "Complex.h"

Complex::Complex(): real(0), img(0){
}
Complex::Complex(int real, int img) : real(real), img(img){
}
Complex::Complex(const Complex& cp) {
	this->real = cp.real;
	this->img = cp.img;
}

istream& operator>>(istream& is, Complex& cp) {
	cout << "Phan thuc: ";
	is >> cp.real;
	cout << "Phan ao: ";
	cin >> cp.img;
	return is;
}
ostream& operator <<(ostream&os, Complex& cp) {
	if (cp.img > 0) {
		os << cp.real<<" + " << cp.img << "i" << endl;
	}
	else {
		os << cp.real << " - " << abs(cp.img) << "i" << endl;
	}
	
	return os;
}
Complex::~Complex() {
}


Complex Complex::operator+(Complex cp) {
	return Complex(this->real + cp.real, this->img + cp.img);
}
Complex Complex::operator-(Complex cp) {
	return Complex(this->real - cp.real, this->img - cp.img);
}
Complex Complex::operator*(Complex cp) {
	return Complex(this->real*cp.real - this->img*cp.img, this->real*cp.img + this->img*cp.real);
}
Complex Complex::operator/(Complex cp) {
	return cp;
}