#pragma once
#include "Node.h"
class Quanly
{
public:
	Node* pHead;
public:
	Quanly();
	Quanly(Node*);
	Quanly(const Quanly&);
	~Quanly();
	friend istream& operator>>(istream&, Quanly&);
	friend ostream& operator<<(ostream&, Quanly&);
};

