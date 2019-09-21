#pragma once
#include"Point2D.h"
class Point3D : public Point2D
{
public:
	int zVal;
public:
	Point3D(void);
	Point3D(int, int, int);
	Point3D(const Point3D&);
	int getzVal();
	~Point3D(void);
	void virtual show();
	void Print();
	void Visible();
};

