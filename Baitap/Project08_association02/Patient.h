#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Doctor.h"
using namespace std;

class Doctor;
class Patient
{
	string nameP;
	vector<Doctor *>doctor;
	void addDoctor(Doctor*);
public:
	Patient(string = NULL);
	~Patient();
	string getName();
	friend ostream&operator<<(ostream&, Patient&);
	friend class Doctor;
};

