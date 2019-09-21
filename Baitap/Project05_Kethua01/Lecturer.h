#pragma once
#include"Person.h"
class Lecturer:public Person
{
public:
	string maLec;
	string cap;
public:
	Lecturer();
	Lecturer(string, int, string, bool, string, string);
	Lecturer(const Lecturer&);
	~Lecturer();
	friend ostream& operator <<(ostream&, Lecturer&);
};

