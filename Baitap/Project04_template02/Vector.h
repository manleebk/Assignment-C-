#pragma once

template<typename T>
class Vector {
public:
	int size;
	T* data;
public:
	Vector(int);
	~Vector();
};

