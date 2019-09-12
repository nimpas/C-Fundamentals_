#include <iostream>

using namespace std;

void func(int& a)
{}

int main()
{
	int x = 10;
	int& y = x;
	x++;
	cout << y << endl;
	func(x);
	int* iptr = &x;
	cout << *iptr << endl;
	delete iptr;
	return 0;
}