#pragma once
#include "Person.h"
#include"LopSinhHoat.h"

template<typename T, typename U>
class SinhVien : public Person
{
public:
	T mssv;
	U diem;

public:
	SinhVien();
	SinhVien(string, int, string, bool, T, U);
	~SinhVien();
	void show();
};

