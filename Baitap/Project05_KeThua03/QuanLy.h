#pragma once
#include "Node.h"
class QuanLy
{
public:
	Node* pHead;
	Node* pTail;
public:
	QuanLy();
	QuanLy(Node*);
	~QuanLy();
	bool isEmpty();
	int getLength();
	
	friend ostream& operator<<(ostream&, QuanLy&);
	Node *operator[](const int);
	void addFirst(const Node &);
	void addLast(const Node&);
	void addPosition(const Node&, int);
	void deleteFirst();
	void deleteLast();
	void deletePosition(int);
	void update();
	

	void swap(Node&, Node&);
	void sortDiem01();
	void sortDiem02();
	void sortMssv();
	Node* interpolationSearch(int, string);
};

