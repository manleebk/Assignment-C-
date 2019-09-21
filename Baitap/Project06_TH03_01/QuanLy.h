#pragma once
#include"Node.h"
class QuanLy
{
public:
	Node* head;
public:
	QuanLy();
	QuanLy(Node*);
	QuanLy(const QuanLy&);
	~QuanLy();

	bool isEmpty();
	int getLength();
	friend ostream& operator<<(ostream& is, QuanLy&);
	void addFirst(const Node &);

};



