#pragma once
#include "Person.h"
#include<String>
#include<iostream>
using namespace std;

class QuanLy {
public:
	Person *data;
	int n;
public:
	QuanLy(int);
	~QuanLy(void);
	void setPerson(int, Person);
	int getN();
	//void show();
	void addFirst(Person);
	void addLast(Person);
	void addPosition(int, Person);
	void deleteFirst();
	void deleteLast();
	void deletePosition(int);
	void update(string);
	friend istream &operator >>(istream &, QuanLy&);
	friend ostream &operator <<(ostream&, QuanLy&);
	Person operator[](int);

	friend bool tD(string, string);
	friend bool gD(string, string);
	void merge(int, int, int, bool(*q)(string, string));
	void mergeSortTD(int, int);
	void mergeSortGD(int, int);
	//Tim kiem noi suy 
	void sapXepTuoi();
	void swap(Person &, Person &);
	Person *interpolationSearch(int, int);
};
