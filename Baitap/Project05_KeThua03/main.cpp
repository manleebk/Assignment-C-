#include "QuanLy.h"
#include "SinhVien.h"

int main() {
	Lecturer l("Le Thi H",30, "Da nang",false,"102lmhanh","full professor");
	SinhVien sv1("Nguyen_Van_Toan", 19, "aaaa", true, "1000010000", 8.2);
	SinhVien sv2("Luong_Xuan_Truong", 18, "bbbb", true, "1000010001", 6.2);
	SinhVien sv3("Nguyen_Quang_Hai", 21, "cccc", true, "1000010007", 5.2);
	SinhVien sv4("Phan_Van_Duc", 18, "dddd", true, "1000010004", 7.2);
	SinhVien sv5("Doan_Van_Hau", 20, "gggg", true, "1000010003", 9.2);
	Node node01(sv1);
	Node node02(sv2);
	Node node03(sv3);
	Node node04(sv4);
	Node node05(sv5);

	QuanLy ql01;
	ql01.addLast(node01);
	ql01.addLast(node02);
	ql01.addLast(node03);
	ql01.addLast(node04);
	ql01.addLast(node05);
	//ql01.swap(*ql01.operator[](1), *ql01.operator[](4));
	/*
	ql01.sortMssv();
	cout << ql01;
	cout << "-------sau khi serach---------" << endl;
	cout << *ql01.interpolationSearch(4, "1234567894");
	cout << "Chieu dai: " << ql01.getLength() << endl;
	*/
	/*
	1. Them doi tuong vao dau
	2. Them vao cuoi
	3. Them vao tri tri
	4. Cap nhat thong tin doi tuong
	5. Xoa doi tuong o dau danh sach
	6. Xoa doi tuong o cuoi danh sach
	7. Xoa doi tuong o vi tri k
	8. Sap xep tang dan (theo diem)
	9. Sap xep giam dan (theo diem)
	10. Tim kiem (theo mssv)
	0. Thoat
	*/
	//cout << l << endl;
	cout << ql01;

	int number;

	do {
		cout << ">>1. Them doi tuong vao dau" << endl;
		cout << ">>2. Them vao cuoi" << endl;
		cout << ">>3. Them vao tri tri bat ki" << endl;
		cout << ">>4. Cap nhat thong tin doi tuong" << endl;
		cout << ">>5. Xoa doi tuong o dau danh sach" << endl;
		cout << ">>6. Xoa doi tuong o cuoi danh sach" << endl;
		cout << ">>7. Xoa doi tuong o vi tri k" << endl;
		cout << ">>8. Sap xep tang dan (theo diem)" << endl;
		cout << ">>9. Sap xep giam dan (theo diem)" << endl;
		cout << ">>10. Tim kiem (theo mssv)" << endl;
		cout << ">>0. <<------GIAI THOAT------>>" << endl;
		cout << "Nhap lua chon tu 0->10: ";
		cin >> number;
		switch (number)
		{
		case 1: {
			SinhVien svAdd;
			cin >> svAdd;
			Node node06(svAdd);
			ql01.addFirst(node06);
			cout << ql01;
			break;
		}
		case 2: {
			SinhVien svAdd;
			cin >> svAdd;
			Node node06(svAdd);
			ql01.addLast(node06);
			cout << ql01;
			break;
		}
		case 3: {
			int vitri;
			
			do {
				cout << "Nhap vi tri can them: ";
				cin >> vitri;
			} while (vitri > ql01.getLength() || vitri <= 0);
			SinhVien svAdd;
			cin >> svAdd;
			Node node06(svAdd);
			ql01.addPosition(node06, vitri);
			cout << ql01;
			break;
		}
		case 4: {
			ql01.update();
			cout << ql01;
			break;
		}
		case 5: {
			ql01.deleteFirst();
			cout << ql01;
			break;
		}
		case 6: {
			ql01.deleteLast();
			cout << ql01;
			break;
		}
		case 7: {
			int vitri;
			cout << "Nhap vi tri can xoa: ";
			cin >> vitri;
			ql01.deletePosition(vitri);
			cout << ql01;
			break;
		}
		case 8: {
			ql01.sortDiem01();
			cout << ql01;
			break;
		}
		case 9: {
			ql01.sortDiem02();
			cout << ql01;
			break;
		}
		case 10: {
			int size = ql01.getLength();
			string mssv;
			cout << "Nhap mssv: ";
			cin >> mssv;
			
			if (ql01.interpolationSearch(size, mssv) == NULL) {
				cout << "Khong tim thay!!!!" << endl << endl;
			}
			else {
				cout << *ql01.interpolationSearch(size, mssv) << endl;
			}			
			break;
		}
		default:
			break;
		}
	} while (number!=0);
	system("pause");
	return 0;
}