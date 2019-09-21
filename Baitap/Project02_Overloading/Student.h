#pragma once
#include<string>
#include<iostream>
using namespace std;
class Student
{
private:
	int age;
	string name;
public:
	Student();
	Student(string, int);
	~Student();
	void display();
	void *operator new(size_t);
	// void operator delete(void * p) 
	void operator delete(void*);
};

