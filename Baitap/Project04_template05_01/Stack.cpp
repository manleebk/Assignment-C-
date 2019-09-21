#include "Stack.h"


template<typename T>
Stack<T>::Stack() {
	this->top = -1;
}

template<typename T>
Stack<T>::~Stack()
{
}
template<typename T>
void Stack<T>::push(T number) {
	++this->top;
	this->data[top] = number;
}
template<typename T>
T Stack<T>::pop() {
	T val = this->data[top];
	--this->top;
	return val;
}
template<typename T>
T Stack<T>::peek() {
	return this->data[top];
}