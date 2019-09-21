#include "Node.h"



Node::Node() {
}
Node::Node(const Node& node) {
	this->data = node.data;
	this->Next = node.Next;
}

Node::Node(Thietbi tb) {
	this->data = tb;
	this->Next = NULL;
}
Node::~Node()
{
}

istream& operator>>(istream& is, Node& node) {
	cin >> node.data;
	return is;
}

ostream& operator<<(ostream& os, Node& node) {
	cout << node.data;
	return os;
}