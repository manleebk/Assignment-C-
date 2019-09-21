#include"SinhVien.cpp"

int main() {
	SinhVien<string, double> sv("Man", 22, "DN", true,"1021",9.1);
	sv.show();
	system("pause");
	return 0;
}