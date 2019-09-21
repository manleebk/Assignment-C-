#pragma once
#include"ThietBi.h";

class Node
{
public:
	ThietBi data;
	Node* pNext;
public: 
	Node();
	Node(ThietBi, Node*next = NULL);
	Node(const Node&);
	~Node();
	friend istream& operator >>(istream&, Node&);
	friend ostream& operator <<(ostream&, Node&);
};

