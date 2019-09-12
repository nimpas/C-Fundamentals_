#include <iostream>

using namespace std;

void func(int& a)
{
	cout << "a is a lvalue " << a << endl;
}

void func(int&& a)
{
	cout << "a is a rvalue " << a << endl;
}

int main()
{
	int x = 5;
	func(move(x));
	func(5);
	cout << x << endl;
	return 0;
}