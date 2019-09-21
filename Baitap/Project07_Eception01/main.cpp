
#include<iostream>
using namespace std;
#include<string>

double Mydevide(double numerator, double demorator) {
	if (demorator == 0.0) {
		throw invalid_argument("Mau bang 0!!!!");
	//throw 1; //so nguyen int khongbat loi duoc
	}
	else {
		return numerator / demorator;
	}
}

int main() {

	
	double x, y;
	double rs;
		cin >> x >> y;
		try {
			rs = Mydevide(x, y);
		}
		catch(invalid_argument &e) {
			cout << e.what() << endl;
		};
	cout << "Kq: " << rs << endl;

	/*
	int ts, ms;
	PhanSo ps;
	do {
		cin >> ts;
		try {
		 PhanSo ps(ts, ms);
		}
		catch (string &s) {
			cout << s << endl;
		}
	} while (!ms);
	cout << ps;
	*/
	system("pause");
	return 0;
}