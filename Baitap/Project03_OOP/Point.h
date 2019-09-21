#pragma once
#include <iostream>
using namespace std;
class Point {
	//public:
private:
	int xVal;
	int yVal;
public:
	int getxVal();
	void setxVal(int);
	Point();
	Point(int, int);
	Point(const Point &);
	~Point();
	friend Point operator+ (Point &, Point &); //da nang hoa toan tu cach 1
	Point operator+ (Point &); // da nang hoatoan tu cach 2
	void show(); //co the dinh nghia ham, nen khong dinh nghia ham
	friend ostream& operator<<(ostream &o, Point &p); // da nang hoa toan tu nhap xuat cin
	friend istream& operator>>(istream &, Point &);
};