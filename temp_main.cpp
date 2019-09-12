#include <iostream>
#include "temperature.h"

using namespace std;

int main()
{
	Temperature t1 = Temperature(23.4);
	cout << t1.get_farenheit() << endl;
	return 0;
}