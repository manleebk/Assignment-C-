#include "QuanLy.h"

QuanLy::QuanLy() {
	this->head = NULL;
}
QuanLy::QuanLy(Node*node) {
	this->head = node;
}

QuanLy::QuanLy(const QuanLy& ql) {
	this->head = ql.head;
}
QuanLy::~QuanLy() {

}

bool QuanLy::isEmpty() {
	if (this->head == NULL)
		return true;
	return false;
}
int QuanLy::getLength() {
	int count = 0;
	for (Node* p = this->head; p != NULL; p = p->Next) {
		count++;
	}
	return count;
}

ostream &operator<<(ostream&os, QuanLy&ql) {
	for (Node* p = ql.head; p != NULL; p = p->Next) {
		os << p->data;
	}
	return os;
}

void QuanLy::addFirst(const Node&node) {
	Node *ptr = new Node;
	ptr->data = node.data;
	if (this->head == NULL) {
		ptr->Next = NULL;
		this->head = ptr;
	}
	else {
		ptr->Next = this->head;
		this->head = ptr;
	}
}