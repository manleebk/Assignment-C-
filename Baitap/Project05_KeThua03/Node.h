#pragma once

#include"SinhVien.h"


class Node {
public:
	SinhVien sv;
	Node *pPre, *pNext;
public:
	Node();
	Node(SinhVien);
	Node(const Node&);
	~Node();

	friend ostream& operator<<(ostream&, Node&);
};

