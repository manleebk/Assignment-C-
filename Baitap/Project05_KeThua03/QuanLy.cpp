#include "QuanLy.h"



QuanLy::QuanLy() {
}
QuanLy::QuanLy(Node* node) {
	this->pHead = node;
	this->pTail = node;
}

QuanLy::~QuanLy()
{
}
//xuat
ostream& operator<<(ostream&os, QuanLy& ql) {
	cout << setw(5) << "stt" <<
		setw(20) << "ten" 
		<< setw(10) << "tuoi" 
		<< setw(10) << "dia chi" 
		<< setw(5) << "GT" 
		<< setw(15) << "mssv" 
		<< setw(10) << "diem tb" << endl;
	Node* temp = ql.pHead;
	int c = 1;
	if (ql.pHead != NULL) {
		do {
			cout << "------------------------------------------------------------------------------" << endl;
			cout <<setw(5) << c;
			os << *temp;
			temp = temp->pNext;
			c++;
		} while (temp != ql.pHead);
		cout << endl;
	}
	return os;
}
Node *QuanLy::operator[](const int k) {
	Node *node = new Node();
	node = this->pHead;
	if (this->pHead != NULL) {
		for (int i = 1; i < k; i++) {
			node = node->pNext;
		}
	}
	//cout << *node;
	return node;
}
bool QuanLy::isEmpty() {
	if (this->pHead == NULL)
		return true;
	return false;
}
int QuanLy::getLength() {
	Node* temp = this->pHead;
	int count = 0;
	if (this->pHead != NULL) {
		do {
			temp = temp->pNext;
			count++;
		} while (temp != this->pHead);
	}

	return count;
}


//Them
void QuanLy::addFirst(const Node& node) {
	Node *ptr = new Node;
	ptr->sv = node.sv;
	if (this->pHead == NULL) {
		this->pHead = this->pTail = ptr;
		this->pTail->pNext = this->pHead;
		this->pTail->pPre = this->pHead;
	}
	else {
		this->pHead->pPre = ptr;
		ptr->pNext = this->pHead;
		this->pHead = ptr;
		ptr->pPre = this->pTail;
		this->pTail->pNext = ptr;
	}
}
void QuanLy::addLast(const Node& node) {
	Node* ptr = new Node();
	ptr->sv = node.sv;
	if (this->pHead == NULL) {
		this->pHead = this->pTail = ptr;
		this->pTail->pNext = this->pHead;
		this->pTail->pPre = this->pTail;
	}
	else {
		ptr->pPre = this->pTail;
		this->pTail->pNext = ptr;
		this->pTail = ptr;
		ptr->pNext = this->pHead;
		this->pHead->pPre = ptr;
	}
}
void QuanLy::addPosition(const Node& node, int k) {
	int len = this->getLength();
	Node* ptr = new Node();
	ptr->sv = node.sv;
	if (k <= len && k > 0) {
		if (k == 1) {
			this->addFirst(node);
		}
		else if (k == len) {
			this->addLast(node);
		}
		else {
			ptr->pNext = this->operator[](k);
			this->operator[](k)->pPre = ptr;
			this->operator[](k - 1)->pNext = ptr;
			ptr->pPre = this->operator[](k - 1);
		}
	}
}
//Xoa
void QuanLy::deleteFirst() {
	Node*ptr = new Node();
	ptr = this->pHead;
	this->pHead = ptr->pNext;
	this->pTail->pNext = this->pHead;
	this->pHead->pPre = this->pTail;
	delete ptr;
	
}
void QuanLy::deleteLast() {
	Node*ptr = new Node();
	ptr = this->pTail;
	this->pTail = ptr->pPre;
	this->pTail->pNext = this->pHead;
	this->pHead->pPre = this->pTail;
	delete ptr;
}
void QuanLy::deletePosition(int k) {
	int len = this->getLength();
	if (k <= len && k > 0) {
		if (k == 1) {
			this->deleteFirst();
		}
		else if (k == len) {
			this->deleteLast();
		}
		else {
			this->operator[](k + 1)->pPre = this->operator[](k - 1);
			this->operator[](k - 1)->pNext = this->operator[](k + 1);
		}
		
	}
	else {
		cout << "vi tri khong ton tai!!!" << endl;
	}
}
//Cap nhat
void QuanLy::update() {
	SinhVien sv00;
	cin >> sv00;
	//cout << sv00.mssv << endl;
	Node* temp = this->pHead;
	if (this->pHead != NULL) {
		do {
			if (temp->sv.mssv == sv00.mssv) {
				temp->sv.ten = sv00.ten;
				temp->sv.tuoi = sv00.tuoi;
				temp->sv.diaChi = sv00.diaChi;
				temp->sv.gioiTinh = sv00.gioiTinh;
				temp->sv.diemTB = sv00.diemTB;
				break;
			}
			temp = temp->pNext;

		} while (temp != this->pHead);
	}

}

// Sap xep
//

// Sap xep
void QuanLy::swap(Node& node01, Node& node02) {
	Node ptr;
	ptr.sv = node01.sv;
	node01.sv = node02.sv;
	node02.sv = ptr.sv;
}

// 8.Tang  mssv
void QuanLy::sortMssv() {
	Node* temp01 = this->pHead;
	Node* temp02 = temp01->pNext;
	while (temp01 != this->pTail) {
		while (temp02 != this->pHead) {
			if ((temp02->sv.mssv).compare(temp01->sv.mssv) < 0) {
				swap(*temp01, *temp02);
			}
			temp02 = temp02->pNext;
		}
		temp01 = temp01->pNext;
		temp02 = temp01->pNext;
	}
}
// 9.tang diem
void QuanLy::sortDiem01() {
	Node* temp01 = this->pHead;
	Node* temp02 = temp01->pNext;
	while (temp01 != this->pTail) {
		while (temp02 != this->pHead) {
			if (temp02->sv.diemTB < temp01->sv.diemTB) {
				swap(*temp01, *temp02);
			}
			temp02 = temp02->pNext;
		}
		temp01 = temp01->pNext;
		temp02 = temp01->pNext;
	}
}

void QuanLy::sortDiem02() {
	Node* temp01 = this->pHead;
	Node* temp02 = temp01->pNext;
	while (temp01 != this->pTail) {
		while (temp02 != this->pHead) {
			if (temp02->sv.diemTB > temp01->sv.diemTB) {
				swap(*temp01, *temp02);
			}
			temp02 = temp02->pNext;
		}
		temp01 = temp01->pNext;
		temp02 = temp01->pNext;
	}
}
//Tim kiem
Node* QuanLy::interpolationSearch(int size, string mssv) {

	this->sortMssv();
	int leftPos = 0;
	int rightPos = size - 1;
	int hi, low;
	if (mssv.length() == 10) {
		while (leftPos < rightPos /*&&
			(mssv.compare(this->operator[](leftPos)->sv.mssv) > 0) &&
			(mssv.compare(this->operator[](rightPos)->sv.mssv)<0)*/) {
			low = stoi(this->operator[](leftPos)->sv.mssv);
			hi = stoi(this->operator[](rightPos)->sv.mssv);
			int pos = leftPos + (double)(rightPos - leftPos)*(stoi(mssv) - low) / (hi - low);
			if (!(this->operator[](pos)->sv.mssv).compare(mssv)) {
				return this->operator[](pos);
			}
			else if ((this->operator[](pos)->sv.mssv).compare(mssv) < 0) {
				leftPos = pos + 1;
			}
			else {
				rightPos = pos - 1;
			}
		}
	}
	return NULL;
}
