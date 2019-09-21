#include<iostream>
using namespace std;

//1. Khai bao
struct Node {
	int Data;
	struct Node* pNext;
};
typedef struct Node NODE;

struct List {
	Node *pHead;
	Node *pTail;

};
typedef struct List LIST;
//2. Khoi tao danh sach lien ket don
void Init(LIST &l) {
	l.pHead = l.pTail = NULL;

}
//3. Tao node trong danh sach
NODE* GetNode(int x) // x 
{
	// 
	NODE *p = new NODE;

	if (p == NULL)
	{
		return NULL;
	}
	p->Data = x; // 
	p->pNext = NULL; // 
	return p;
}

// 4. Them Node
//Them node p vao dau danh sach
void AddHead(LIST& l, NODE* p) {
	if (l.pHead = NULL) {
		l.pHead = l.pTail = p;
	}
	else {
		p->pNext = l.pHead; // quang day
		l.pHead = p; // chinh thuc da dau danh sach
	}
}
//Them Node vao cuoi danh sach

void AddTail(LIST &l, NODE *p) {
	if (l.pHead == NULL) {
		l.pHead = l.pTail = p;
	}
	else {
		l.pTail->pNext = p; //
		l.pTail = p;
	}
}


//5. Nhap du lieu vao Node
void InPut(LIST& l, int n) {

	Init(l); //khoi tao danh sach
	for (int i = 1; i <= n; i++)
	{
		int x;
		cout << "Nhap node: ";
		cin >> x;
		NODE* p = GetNode(x); // bien x thanh 1 node
		AddTail(l, p); //them node p vao cuoi danh sach
	}
}

//6. Output
void OutPut(LIST l) {
	// for(int i =0; i<n; i++)
	for (NODE* p = l.pHead; p != NULL; p = p->pNext) {
		cout << p->Data;
	}
}
int main() {
	LIST l;
	int n;
	cout << "Ban muon nhap bao nhieu Node: ";
	cin >> n;
	InPut(l, n);
	OutPut(l);
	cout << endl;
	system("pause");
	return 0;
}