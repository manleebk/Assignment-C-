#include "Vector.h"


template<typename T>
Vector<T>::Vector(int size)
{
	this->size = size;
	this->data = new Vector<T>[this->size];
	for (int i = 0; i < size; i++)
	{
		*(this->data + i) = 5;
	}
}

template<typename T>
Vector<T>::~Vector()
{
}
