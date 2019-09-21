#pragma once
#include"Patient.h"
using namespace std;

class Patient;
class Doctor {
	string nameD;
	vector<Patient*> patient;
public:
	Doctor(string = NULL);
	~Doctor();
	string getName() const;
	void addPatient(Patient*);
	friend ostream& operator <<(ostream&, Doctor&);
};

