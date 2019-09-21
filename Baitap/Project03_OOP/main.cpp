
#include "Point.h"
#include "Point2D.h"
#include "Point3D.h"
//#include "tg.h"


//Da nang hoa toan tuvv c1
Point operator+ (Point &p1, Point &p2) {
	Point p;
	p.xVal = p1.xVal + p2.xVal;
	p.yVal = p1.yVal + p2.yVal;
	return p;
}
ostream& operator<<(ostream &o, Point &p) {
	o << p.xVal << endl;
	o << p.yVal << endl;
	return o;
}
// da nang hoa toan tu nhap
istream& operator>>(istream &i, Point &p) {
	cout << "xVal= ";
	i >> p.xVal;
	cout << "yval= ";
	i >> p.yVal;
	return i;
}

template <typename T>
T add(T&a, T&b) {
	return (a + b);
}
int main() {

	/*Point p1;
	Point p2(2,3);
	Point p3(p2);

	p3.xVal = 5;
	p3.yVal = 5;

	p1.show();
	p2.show();
	p3.show();
	TG tg(1,2,3,4,5,6);
	tg.showTg();*/

	//c1 da nang hoa toan tu cach 1
	/*
	Point p1(2,3);
	Point p2(1,2);
	Point p3;
	p3 = p1 + p2;
	Point p4 = operator+(p1,p3); // da nang hoa toan tu
	p3.show();
	*/

	//da nang hoa toan tu cach 2
	/*Point p1(2,3);
	Point p2(2,2);
	Point p3;
	p3 = p1.operator+(p2);*/
	//p3.show();
	//cout <<p3;  // da nang hoa toan tu xuat

	//Xay dung ham ao, 
	
	
	Point p2(2, 3);
	Point p3(p2);
	Point pt = add<Point>(p2, p3);
	cout << pt;
	
	system("pause");
	return 0;
}