#include "Node.h"



Node::Node() {
}

Node::Node(ThietBi tb, Node* next) {
	this->data = tb;
	this->pNext = next;
}
Node::Node(const Node& node) {
	this->data = node.data;
	this->pNext = node.pNext;
}
Node::~Node()
{
}

istream& operator>> (istream& is, Node& node) {
	cout << "Nhap node: ";
	is >> node.data;
	return is;
}
ostream& operator<< (ostream& os, Node& node) {
	os << node.data;
	return os;
}