#pragma once
#include<iostream>
#include"Patient.h"
using namespace std;
class Patient;
class Doctor
{
	string nameD;
	vector<Patient* >patient;
	
public:
	Doctor(string = NULL);
	~Doctor();
	string getName();
	friend ostream& operator<<(ostream&, Doctor&);
	void addPatient(Patient*);
};

