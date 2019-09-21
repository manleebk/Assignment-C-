#pragma once
#include<iostream>
#include<string>
using namespace std;

template<typename T>
class Stack {

private:
	T data[100];
	int top;
public:
	Stack();
	~Stack();
	void push(T);
	T pop();
	T peek();
};

