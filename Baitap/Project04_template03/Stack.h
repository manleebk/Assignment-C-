#pragma once

template<typename T>
class Stack
{
	int current, size;
	T* data;
public:
	Stack();
	~Stack();
};

