#include "Doctor.h"

Doctor::Doctor(string name): nameD(name)
{
}

Doctor::~Doctor() {
}

string Doctor::getName() const {
	return this->nameD;
}
void Doctor::addPatient(Patient* p) {
	this->patient.push_back(p);
	p->addDoctor(this);
}
ostream& operator<<(ostream& os, Doctor& d) {
	int number = d.patient.size();
	if (number == 0) {
		os << d.nameD << ": has no Patient right now" << endl;
	}
	else {
		os << d.nameD << ": is seeing patient: " << endl;
		for (int i = 0; i < number; i++)
			os << d.patient[i]->getName()<<" ";
		os << endl;
	}
	return os;
}