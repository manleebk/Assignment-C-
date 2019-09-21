#include "Doctor.h"



Doctor::Doctor(string name):nameD(name) {
}

Doctor::~Doctor()
{
}
string Doctor::getName() {
	return this->nameD;
}
void Doctor::addPatient(Patient* p) {
	this->patient.push_back(p);
	p->addDoctor(this);
}
ostream &operator<<(ostream& os, Doctor&d) {
	int numberP = d.patient.size();
	if (numberP == 0) {
		os << "Khong co benh nhan nao" << endl;
	}
	else {
		os << "Ten bac si:" << d.getName() << " Quan ly: " << endl;
		for (int i = 0; i < numberP; i++) {
			os << d.patient[i]->getName() << endl;
		}
	}
	return os;
}
