#include <iostream>

using namespace std;

class Base
{
public:
	void NonVirtual()
	{
		cout << "Base NonVirtual called" << endl;
	}

	virtual void Virtual()
	{
		cout << "Base Virtual called" << endl;
	}
};


class Derived : public Base
{
	void NonVirtual()
	{
		cout << "Derived NonVirtual called" << endl;
	}

	void Virtual()
	{
		cout << "Derived Virtual called" << endl;
	}
};
int main()
{
	Base* base = new Base();
	Base* derived = new Derived();

	base->NonVirtual();
	base->Virtual();
	derived->NonVirtual();
	derived->Virtual();

	delete base;
	delete derived;
	return 0;
}