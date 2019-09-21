#include"Thietbi.h"
#include"Node.h"
#include"QuanLy.h"

int main() {
	Thietbi tb01;
	Thietbi tb02(111, "aaa", 222);
	Node node01(tb01);
	Node node02(tb02);

	QuanLy ql01(&node01);
	ql01.addFirst(node02);
	cout << ql01 << endl;
	system("pause");
	return 0;
}