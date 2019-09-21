#include"Student.h"

int main() {
	Student *p = new Student("Hiii", 24);
	p->display();
	delete p;
	system("pause");
	return 0;
}