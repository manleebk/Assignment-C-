#include "Point2D.h"
#include<iostream>
using namespace std;

Point2D::Point2D(void)
{
	this->xVal = 1;
	this->yVal = 1;
}
Point2D::Point2D(int x, int y) :xVal(x), yVal(y) {
}
Point2D::Point2D(const Point2D& p2) {
	this->xVal = p2.xVal;
	this->yVal = p2.yVal;
}
Point2D::~Point2D(void)
{
}
/*
ostream &operator<<(ostream&o, Point2D p2) {
	o << "xVal" << p2.xVal << endl;
	o << "yVal" << p2.yVal << endl;
	return o;
}
*/
void Point2D::show() {
	cout << "Point 2D show" << endl;
}
void Point2D::Print() {
	cout << "Point 2D Print " << endl;
}
