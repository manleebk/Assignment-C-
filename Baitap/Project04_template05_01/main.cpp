#include"Stack.cpp"

int main() {
	Stack<int> stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);

	cout << stack.peek() << endl;
	system("pause");
	return 0;
}