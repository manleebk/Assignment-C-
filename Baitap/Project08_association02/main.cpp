#include"Patient.h"
int main() {
	
	Patient* p1 = new Patient("Benh Nhan01");
	Patient* p2 = new Patient("Benh Nhan02");
	Patient* p3 = new Patient("Benh Nhan03");

	Doctor* d1 = new Doctor("Doctor01");
	Doctor* d2 = new Doctor("Doctor02");

	d1->addPatient(p1);
	d1->addPatient(p2);
	cout << *d1 << endl;
	system("pause");
	return 0;
}