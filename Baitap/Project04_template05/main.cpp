#include<string>
#include<vector>
#include<iostream>
using namespace std;

template <typename T>
class Stack {
private:
	T data[100];
	int top;
public:
	Stack() {
		top = -1;
	}
	void Push(T number) {
		++top;
		data[top] = number;
	}
	T Pop() {
		int val = data[top];
		--top;
		return val;
	}
	T Peek() { // de xem thang dau tien
		return data[top];
	}
};

int main() {
	Stack<int> number;
	number.Push(1);
	number.Push(2);
	number.Push(3);
	number.Push(4);
	number.Pop();
	cout << "Sau khi pop: " << number.Peek()<<endl;

	system("pause");
	return 0;
}