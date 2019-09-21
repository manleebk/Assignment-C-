#pragma once
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	string ten;
	int tuoi;
	string diaChi;
	bool gioiTinh;
public:
	Person();
	Person(string, int, string, bool);
	Person(const Person&);
	~Person();
	friend ostream& operator<<(ostream&, Person&);
};

