#include"Point.cpp"
#include<iostream>
using namespace std;
/*
template <typename T>
void Max(T a, T b) {
	a > b ? cout << "max= " << a : cout << "Max= " << b << endl;
}
template <typename X, typename Y>
void max02(X a, Y b) {
	a > b ? cout << "max= " << a : cout << "Max= " << b << endl;
}*/

int main() {
	int a = 5, b = 6;
	float x = 5.5;
	//Max<int>(a, b);
	//max02<int, float>(a, x);
	Point<int> p1(1,2);
	Point<int> p2(3, 4);
	Point<int> p(0,0);
	p = p1 + p2;
	p.Show();
	//cout << p << endl; //erro
	system("pause");
	return 0;
}