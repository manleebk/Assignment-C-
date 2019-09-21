#include "Point3D.h"


Point3D::Point3D(void)
{
}
Point3D::Point3D(int x, int y, int z) :Point2D(x, y), zVal(z) {
}
//Da nang hoa cout cho lop Point3D

Point3D::~Point3D(void)
{
}
void Point3D::show() {
	cout << "Point 3D " <<this->zVal << endl;
}
void Point3D::Print() {
	cout << "3D Print" << endl;
}

