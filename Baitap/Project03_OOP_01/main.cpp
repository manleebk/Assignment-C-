
#include "Point.h"
#include "Point2D.h"
#include "Point3D.h"


int main() {

	/*
	//Upcast
	//Xay dung ham ao, 
	Point2D *p2D = new Point3D(1, 2, 3);
	p2D->show(); //ham ao, da hinh dong
	p2D->Print(); //da hinh tinh
	*/

	/*
	//Slicing
	Point3D p3D(2,3,4);
	Point2D p2D01(p3D);
	p2D01.show();
	p3D.Print();
	cout << p3D.zVal << endl;

	//Downcast
	cout << "Downcast" << endl;
	Point3D* p3D01 = new Point3D(3, 4, 5);
	Point2D *p2D02 = p3D01;  // upcast

	Point3D* p3D02 = static_cast<Point3D*>(p2D02);
	cout << p3D02->zVal << endl;
	*/

	
	Point3D p3D03(1, 2, 3);
	p3D03.Print();
	p3D03.Visible();

	system("pause");
	return 0;
}