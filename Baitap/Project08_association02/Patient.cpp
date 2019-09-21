#include "Patient.h"

Patient::Patient(string name): nameP(name) {
}

Patient::~Patient()
{
}
void Patient::addDoctor(Doctor* d) {
	this->doctor.push_back(d);
}
string Patient::getName() {
	return this->nameP;
}
