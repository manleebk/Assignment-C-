#include<iostream>
using namespace std;

//1. Khai bao danh sach lien ket
struct Node {
	int Data;
	struct Node * pNext;
};
typedef struct Node NODE;

struct List {
	NODE* pHead;
	NODE* pTail;
};
typedef struct List LIST;

//2. Khoi tao
void Init(LIST &l) {
	l.pHead = l.pTail = NULL;
}

//3. setNode thiet lap gia tri taij 1 node
NODE* SetNode(int dt) {
	NODE *p = new NODE;
	p->Data = dt;
	p->pNext = NULL;
	return p;
}


//4. them vao dau
void AddHead(LIST &l, NODE *p) {
	if (l.pHead == NULL) {
		l.pHead = l.pTail = p;
	}
	else {
		p->pNext = l.pHead;
		l.pHead = p;
	}
}

//5. Input
void Input(LIST &l, int n) {
	Init(l);
	//for(int i =0 ; i<n; i++)
	for (int i = 0; i < n; i++) {
		int x; 
		cout << "Nhap Node";
		cin >> x;
		NODE *p = SetNode(x);
		AddHead(l, p);
	}
}
void Output(List l) {
	for (NODE* p = l.pHead; p != NULL; p = p->pNext) {
		cout << p->Data;
	}
}
int main() {
	LIST l;
	int size;
	cout << "So pt: ";
	cin >> size;
	Input(l, size);
	Output(l);
	cout << endl;
	system("pause");
	return 0;
}