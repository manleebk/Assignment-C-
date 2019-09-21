#include "Lecturer.h"


template<typename T>
Lecturer<T>::Lecturer()
{
}

template<typename T>
Lecturer<T>::Lecturer(string ten, int tuoi, string diaChi, bool gioiTinh, T maLec, T cap):Person(ten, tuoi, diaChi, gioiTinh) {
	this->maLec = maLec;
	this->cap = cap;
}


template<typename T>
Lecturer<T>::~Lecturer()
{
}
