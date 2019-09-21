#include"ThietBi.h"
#include"QuanLy.h";

int main() {
	QuanLy ql01(5);
	ThietBi tb01(13,"AAA",13);
	ThietBi tb02(14, "AAA", 14);
	ThietBi tb03(15, "AAA", 15);
	ThietBi tb04(16, "AAA", 16);
	ThietBi tb05(17, "AAA", 17);

	ql01.Data[0] = tb01;
	ql01.Data[1] = tb02;
	ql01.Data[2] = tb03;
	ql01.Data[3] = tb04;
	ql01.Data[4] = tb05;
	//ql01.addLast(tb01);
	//ql01.deleteTB(2);
	cout << ql01;
	system("pause");
	return 0;
 }