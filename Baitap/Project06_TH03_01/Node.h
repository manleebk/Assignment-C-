#pragma once
#include"Thietbi.h"
class Node
{
public:
	Thietbi data;
	Node *Next;
public:
	Node();
	Node(Thietbi);
	Node(const Node&);
	~Node();

	friend istream& operator>>(istream&, Node&);
	friend ostream& operator<<(ostream&, Node&);

};

