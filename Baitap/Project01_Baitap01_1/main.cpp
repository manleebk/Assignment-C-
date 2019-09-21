#include"MyClass.h"
#include<iostream>
using namespace std;
int main() {
	MyClass *x = new MyClass;
	x->show();
	MyClass *y = new MyClass;
	y->show();

	delete x;
	x->show();
	y->show();

	system("pause");
	return 0;
 }