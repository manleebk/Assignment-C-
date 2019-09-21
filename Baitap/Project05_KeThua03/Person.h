#pragma once
#include<iostream>
#include<string>
#include<iomanip>
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
};

