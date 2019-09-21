#include"Complex.h"

int main() {
	Complex cp01(1,1);
	Complex cp02(1,2);
	cout << "cp01: " << cp01;
	cout << "cp02: " << cp02;
	Complex cp00 = cp01 + cp02;
	cout << "Kq:" << cp00;
	system("pause");
	return 0;
}