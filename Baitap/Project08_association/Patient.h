#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Doctor.h"
using namespace std;

class Doctor;
class Patient {
	string nameP;
	vector<Doctor *> doctor;
	void addDoctor(Doctor *);
public:
	Patient(string name = NULL);
	~Patient();
	string getName() const;
	int getSize() const;
	friend ostream &operator<<(ostream&, const Patient&);
	friend class Doctor;
};

