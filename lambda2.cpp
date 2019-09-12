#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void func(int a)
{
	cout << a << endl;
}

int main()
{
	vector<int> v{ 23, 4, 12, 44, 21, 9, 7 };
	for_each(v.begin(), v.end(), [](int a){ cout << a << endl; });

	int sum = 0;
	for_each(v.begin(), v.end(), [&sum](auto a) { sum += a; });
	cout << sum << endl;
	return 0;
}