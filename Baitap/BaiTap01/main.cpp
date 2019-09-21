#include "Person.h"
#include "QuanLy.h"
#include<iostream>
using namespace std;

int main() {

	int c = 5;
	QuanLy ql01(c);
	c = ql01.getN();
	Person ps01("Aaa", 11, "Da Nang", 1);
	Person ps02("T", 22, "Quang Nam", 1);
	Person ps03("E", 22, "Hue", 1);
	Person ps04("D", 44, "Quang Nam", 1);
	Person ps05("C", 33, "Da Nang", 1);

	ql01.setPerson(0, ps01);
	ql01.setPerson(1, ps02);
	ql01.setPerson(2, ps03);
	ql01.setPerson(3, ps04);
	ql01.setPerson(4, ps05);


	/*
	1. Them doi tuong vao dau
	2. Them vao cuoi
	3. Them vao tri tri
	4. Cap nhat thong tin doi tuong
	5. Xoa doi tuong o dau danh sach
	6. Xoa doi tuong o cuoi danh sach
	7. Xoa doi tuong o vi tri k
	8. Sap xep tang dan (theo ten)
	9. Sap xep giam dan (theo ten)
	10. Tim kiem (theo tuoi)
	0. Thoat
	*/
	cout << ql01;

	int number;
	//cout <<"n="<<ql01.n;
	do {
		cout << ">>1. Them doi tuong vao dau" << endl;
		cout << ">>2. Them vao cuoi" << endl;
		cout << ">>3. Them vao tri tri bat ki" << endl;
		cout << ">>4. Cap nhat thong tin doi tuong" << endl;
		cout << ">>5. Xoa doi tuong o dau danh sach" << endl;
		cout << ">>6. Xoa doi tuong o cuoi danh sach" << endl;
		cout << ">>7. Xoa doi tuong o vi tri k" << endl;
		cout << ">>8. Sap xep tang dan (theo ten)" << endl;
		cout << ">>9. Sap xep giam dan (theo ten)" << endl;
		cout << ">>10. Tim kiem (theo tuoi)" << endl;
		cout << ">>0. <<------GIAI THOAT------>>" << endl;
		cout << "Nhap lua chon tu 0->10: ";
		cin >> number;

		switch (number) {
		case 1: {
			Person ps001;
			cin >> ps001;
			ql01.addFirst(ps001);
			cout << "Sau khi them vao vi tri dau tien" << endl;
			cout << ql01;
			break;
		}
		case 2: {
			Person ps001;
			cin >> ps001;
			ql01.addLast(ps001);
			cout << endl << "Sau khi them vao vi tri cuoi cung" << endl;
			cout << ql01;
			break;
		}
		case 3: {
			int vitri;
			cout << "Nhap vi tri can them: ";
			cin >> vitri;
			Person ps001;
			cin >> ps001;
			ql01.addPosition(vitri - 1, ps001);
			cout << endl << "Sau khi them vao vi tri " << vitri << endl;
			cout << ql01;
			break;
		}
		case 4: {
			string name;
			cout << "Nhap ten can cap nhat: ";
			cin >> name;
			ql01.update(name);
			cout << endl << "Sau khi cap nhat" << endl;
			cout << ql01;
			break;
		}
		case 5: {
			ql01.deleteFirst();
			cout << endl << "Sau khi xoa vi tri dau tien" << endl;
			cout << ql01;
			break;
		}
		case 6: {
			ql01.deleteLast();
			cout << endl << "Sau khi xoa vi tri cuoi" << endl;
			cout << ql01;
			break;
		}
		case 7: {
			int vitrixoa;
			cout << "Nhap vi tri can xoa" << endl;
			cin >> vitrixoa;
			if (vitrixoa < c && vitrixoa >0) {
				ql01.deletePosition(vitrixoa - 1);
				cout << endl << "Sau khi xoa vi tri cuoi" << endl;
				cout << ql01;
				break;
			}
			else {
				cout << "Vit tri xoa khong hop le" << endl;
				break;
			}
		}
		case 8: {
			cout << "Sau khi sap xep tang dan(merge sort)" << endl;
			ql01.mergeSortTD(0, ql01.getN() - 1);
			cout << ql01;
			break;
		}
		case 9: {
			cout << "Sau khi sap xep giam dan(merge sort)" << endl;
			ql01.mergeSortGD(0, ql01.getN() - 1);
			cout << ql01;
			break;
		}
		case 10: {
			int tuoi;
			cout << "Nhap tuoi can tim kiem: ";
			cin >> tuoi;
			ql01.sapXepTuoi();
			//cout <<ql01<<endl;

			cout << "Ket qua tim kiem" << endl;
			Person *kq = ql01.interpolationSearch(ql01.getN(), tuoi);
			//cout <<"Dia chi con tro: 0x"<<kq<<endl;
			//cout <<*kq<<endl;
			if (kq->ten == "null") {
				cout << "Trang thai: Khong tim thay!!!!" << endl;
				break;
			}
			int k = 0;
			while (true)
			{
				if ((kq + k)->ten == "null") {
					break;
				}
				else {
					cout << k << *(kq + k) << endl;
					k++;
				}
			}
			break;
		}
		default:
			cout << "Sai roi, nhap lai nhe!!!!" << endl;
			break;
		}
	} while (number != 0);

	system("pause");
	return 0;
}