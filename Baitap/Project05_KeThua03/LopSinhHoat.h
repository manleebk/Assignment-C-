#pragma once
#include"Lecturer.h"

class Lecturer;
class LopSinhHoat
{
public:
	string lop;
	int n; //so luong sv
	Lecturer gvcn;

public:
	LopSinhHoat();
	LopSinhHoat(string, int, Lecturer);
	~LopSinhHoat();
};

