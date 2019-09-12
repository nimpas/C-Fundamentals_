#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 15;
	auto func = [&x, &y](int a, int b)  
	{
		cout << x << " " << y << endl;
		return a * b * x * y;
	};
	x = 1;
	y = 2;
	cout << func(3, 4) << endl;
	//cout << x << " " << y << endl;
	return 0;
}