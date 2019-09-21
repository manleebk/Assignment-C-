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

int Point3D::getzVal() {
	return this->zVal;
}
void Point3D::show() {
	cout << "Point 3D show" << endl;
}


void Point3D::Print() {
	cout << "Point 3D Print" << endl;
}
void Point3D::Visible() {
	cout << "Visible 3D" << endl;
}