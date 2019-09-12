#include <iostream>

using namespace std;

class Temperature
{
public:
	Temperature();
	Temperature(double t);
	double get_farenheit();
	double get_celsius();
	void set_temp(double t);
private:
	double temp;
};

Temperature::Temperature(): temp(0.0){}

Temperature::Temperature(double t): temp(t){}

double Temperature::get_farenheit()
{
	return temp * 9 / 5 + 32;
}

double Temperature::get_celsius()
{
	return temp;
}

void Temperature::set_temp(double t)
{
	temp = t;
}


int main()
{
	Temperature t1 = Temperature(25.5);
	cout << t1.get_celsius() << endl;
	cout << t1.get_farenheit() << endl;
	return 0;
}