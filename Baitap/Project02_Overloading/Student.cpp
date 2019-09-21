#include "Student.h"

Student::Student() {
	cout << "Constructor is called" << endl;
}

Student::Student(string name, int age) : name(name), age(age) {
}
Student::~Student() {
}
void Student::display() {
	cout << "Name:" << name << endl;
	cout << "Age:" << age << endl;
}
void *Student::operator new(size_t size) {
	cout << "Overloading new operator with size: " << size << endl;
	void * p = ::new Student();
	//void * p = malloc(size); will also work fine 

	return p;
}
void Student::operator delete(void* p) {
	cout << "Overloading delete operator " << endl;
	free(p);
}