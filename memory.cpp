#include <iostream>

using namespace std;

int my_func(int a)
{
	return a + 5;
}


int main()
{
	int x = 10;
	x = my_func(x);
	int* iptr1 = new int(14);
	int* iptr2 = iptr1;
	delete iptr1;
	iptr1 = nullptr;
	iptr2 = nullptr;
	return 0;
}