#pragma once
#include"Lecturer.h"


template<typename T>
class LopSinhHoat
{
public:
	T lop;
	Lecturer<T> gvcn;
public:
	LopSinhHoat();
	LopSinhHoat(T, int, Lecturer<T>);
	~LopSinhHoat();
};

