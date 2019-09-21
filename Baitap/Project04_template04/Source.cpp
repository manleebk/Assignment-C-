#include<iostream>
#include<string>
#include<vector>
using namespace std;


//(Key, value) Map
template<typename T,typename U>
class CMap {
private:
	vector<T> Keys;
	vector<U> Values;
public:
	void insert(T key, U value) {
		Keys.push_back(key);
		Values.push_back(value);
	}
	void show(int n) {
		cout << Keys[n] << " : " << Values[n] << endl;
	}
};

int main() {

	CMap<string, float> Grades;
	Grades.insert("Toan", 9);
	Grades.insert("Van", 8);
	Grades.insert("Ly", 10);
	for (int i = 0; i < 2; i++)
	{
		Grades.show(i);
	}
	Grades.show(2);
	system("pause");
	return 0;
}