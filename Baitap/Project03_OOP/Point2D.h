#pragma once
#include<iostream>
using namespace std;
class Point2D
{
public:
	int xVal;
	int yVal;
public:
	Point2D();
	Point2D(int, int);
	Point2D(const Point2D&);
	~Point2D(void);
	friend ostream &operator <<(ostream&, Point2D);
	void virtual show();
	void Print();
};
