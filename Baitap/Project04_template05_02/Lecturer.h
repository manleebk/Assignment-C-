#pragma once
#include"Person.h"

template<typename T>
class Lecturer : public Person
{
public:
	T maLec;
	T cap;
public:
	Lecturer();
	Lecturer(string, int, string, bool, T, T);
	~Lecturer();
};

