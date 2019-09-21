#include "Quanly.h"



Quanly::Quanly() {
}
Quanly::Quanly(Node* head) {
	this->pHead = head;
}
Quanly::Quanly(const Quanly&ql) {
	this->pHead = ql.pHead;
}
Quanly::~Quanly()
{
}
istream& operator>>(istream& is, Quanly& ql) {
	return is;
}
ostream& operator<<(ostream& os, Quanly& ql) {
	for (Node *p = ql.pHead; p != NULL; p = p->pNext) {
		os << p->data << endl;
	}
	return os;
}
