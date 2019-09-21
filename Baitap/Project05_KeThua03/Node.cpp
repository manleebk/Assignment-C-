#include "Node.h"



Node::Node() {

}
Node::Node(SinhVien sv) {
	this->sv = sv;
	this->pPre = NULL;
	this->pNext = NULL;
}

Node::Node(const Node& node) {

}
Node::~Node()
{
}
ostream& operator<<(ostream& os, Node& node) {
	os << node.sv;
	return os;
}

