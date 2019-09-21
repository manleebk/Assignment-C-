#include "LopSinhHoat.h"


template<typename T>
LopSinhHoat<T>::LopSinhHoat()
{
}
template<typename T>
LopSinhHoat<T>::LopSinhHoat(T lop, int n, Lecturer<T> gvcn) {
	this->lop = lop;
	this->n = n;
	this->gvcn = gvcn;
}

template<typename T>
LopSinhHoat<T>::~LopSinhHoat()
{
}
