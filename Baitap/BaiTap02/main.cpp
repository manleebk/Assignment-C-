#include "PhanSo.h"
#include "ListPhanSo.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	PhanSo ps00;
	PhanSo ps01(1,2);
	PhanSo ps02(1,4);
	PhanSo ps03(-3,12);
	PhanSo ps04(-4, -12);
	/*
	ListPhanSo list01(4);
	//cin >> list01;
	*(list01.data+0) = ps01;
	*(list01.data+1) = ps02;
	*(list01.data+2) = ps03;
	*(list01.data+3) = ps04;
	*/
	
	int n;
	cout <<"Nhap so phan tu: ";
	cin >>n;
	ListPhanSo List01(n);
	cin >>List01;
	cout << "Xuat---------------------------------" << endl;
	cout << List01;
	/*Don hang*/
	cout << "Toan tu don hang:" << endl;
	cout <<setw(15) << "+List01[0] = " << +List01[0];
	cout << setw(15) << "-List01[0] = " << -List01[0];
	cout << setw(15) << "++List01[1] = " << ++List01[1];
	cout << setw(15) << "--List01[1] = " << --List01[1];
	cout << setw(15) << "List01[2]++ = " << List01[2]++;
	cout << setw(15) << "List01[2] = " << ++List01[2];
	cout << setw(15) << "List01[3]-- = " << List01[3]--;
	//cout << setw(15) << "List01[3] = " << List01[3];
	/*Nhi hang*/
	cout << "Toan tu nhi hang:" << endl;
	cout << List01;
	cout << "List01[0] + List01[1] = " << List01[0] + List01[1];
	cout << "List01[0] - List01[1] = " << List01[0] - List01[1];
	cout << "List01[0] * List01[1] = " << List01[0] * List01[1];
	cout << "List01[0] / List01[1] = " << List01[0] / List01[1];
	cout << "List01[0] += List01[1] = " << (List01[0] += List01[1]);
	cout << "List01[0] -= List01[1] = " << (List01[0] -= List01[1]);
	cout << "List01[0] *= List01[1] = " << (List01[0] *= List01[1]);
	cout << "List01[0] /= List01[1] = " << (List01[0] /= List01[1]);
	cout << "1: true, 0: false" << endl;
	cout << "List01[0] == List01[1] = " << (List01[0] == List01[1]) << endl;
	cout << "List01[0] != List01[1] = " << (List01[0] != List01[1]) << endl;
	cout << "List01[0] > List01[1] = " << (List01[0] > List01[1]) << endl;
	cout << "List01[0] < List01[1] = " << (List01[0] < List01[1]) << endl;
	cout << "List01[0] >= List01[1] = " << (List01[0] >= List01[1]) << endl;
	cout << "List01[0] <= List01[1] = " << (List01[0] <= List01[1]) << endl;
	system("pause");
	return 0;
}