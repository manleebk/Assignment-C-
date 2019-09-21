#include "Point.h"
#include<iostream>
using namespace std;



template<typename T>
Point<T>::Point(T x, T y):xVal(x), yVal(y) {
}

template<typename T>
Point<T>::~Point() {
}

template<typename T>
void Point<T>::Show() {
	cout << "xVal: " << this->xVal << endl;
	cout << "yVal: " << this->yVal << endl;
}


template<typename T>
ostream& operator<<(ostream& o, const Point<T>&pt) {
	o << pt.xVal << endl;
	o << pt.yVal << endl;
	return o;
}

/*
template<typename T>
Point<T> operator+(const Point<T>&p1, const Point<T> &p2) {
	Point<T> p;
	p.xVal = p1.xVal + p2.xVal;
	p.yVal = p1.yVal + p2.yVal;
	return p;
}
*/

/*
template<typename T>
Point<T> Point<T>::operator+(const Point& p) {
	return Point<T>(this->xVal + p.xVal, this->yVal + p.yVal);
}
*/



template<typename T>
Point<T> Point<T>::operator+(const Point<T>& p) {
	return Point(this->xVal + p.xVal, this->yVal + p.yVal);
}