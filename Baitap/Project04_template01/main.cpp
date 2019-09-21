#include<iostream>
using namespace std;

template<typename T>
void Max(T a, T b) {
	a > b ? cout << "Max = " << a : cout << "Max = " << b << endl;
}

int main() {
	int a = 5;
	int b = 6;
	Max<int>(a, b);
	system("pause");
	return 0;
}
