#include "temperature.h"

Temperature::Temperature() : temp(0.0) {}

Temperature::Temperature(double t) : temp(t) {}

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

Temperature Temperature::operator+(const Temperature& other)
{
	return Temperature(temp + other.temp);
}

Temperature Temperature::operator-(const Temperature& other)
{
	return Temperature(temp - other.temp);
}

Temperature Temperature::operator*(const Temperature& other)
{
	return Temperature(temp * other.temp);
}

Temperature Temperature::operator/(const Temperature& other)
{
	return Temperature(temp / other.temp);
}

Temperature operator+(const double& first, const Temperature& other) {
	return Temperature(first + other.temp);
}


Temperature operator-(const double& first, const Temperature& other) {
	return Temperature(first - other.temp);
}


Temperature operator*(const double& first, const Temperature& other) {
	return Temperature(first * other.temp);
}

Temperature operator/(const double& first, const Temperature& other) {
	return Temperature(first / other.temp);
}

