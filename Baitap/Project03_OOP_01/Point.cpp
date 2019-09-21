#include<iostream>
#include "point.h"
using namespace std;
void Point::show() {  // dinh nghia ham bo sung them class
	cout << "(" << this->xVal << ","
		<< this->yVal << ")" << endl;
	//cout <<xVal << yVal;
}
Point::Point() {
	this->xVal = 1;
	this->yVal = 1;
}
Point::Point(int xVal, int yVal) {
	this->xVal = xVal;
	this->yVal = yVal;
}
Point::Point(const Point &p) { //doi tuong p da duoc khoi tao truoc do
	this->xVal = p.xVal;
	this->yVal = p.yVal;
}
//Ham huy
Point::~Point() {

}

int Point::getxVal() {
	return this->xVal;
}
void Point::setxVal(int xVal) {
	this->xVal = xVal;
}

// da nang hoa toan tu cach 2 

Point Point::operator+(Point &p2) {
	Point p0;
	p0.xVal = this->xVal + p2.xVal;
	p0.yVal = this->yVal + p2.yVal;
	return p0;
}