#include "Patient.h"

Patient::Patient(string name): nameP(name){
}

Patient::~Patient() {
}

void Patient::addDoctor(Doctor* d) {
	this->doctor.push_back(d);
}
string Patient::getName() const {
	return this->nameP;
}

int Patient::getSize() const {
	return this->doctor.size();
}
ostream& operator<<(ostream&os, Patient& ps) {
	int number = ps.getSize();
	os << "Name patient: " << ps.getName() << endl;
/*	for (int i = 0; i < number; i++) {
		os << "Name docttor: " << ps.doctor[i]->getName();
	}*/
	return os;
}