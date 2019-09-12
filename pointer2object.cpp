#include <iostream>
#include <string>

using namespace std;

class MyClass
{
public:
	MyClass(string n): name(n) {}

	void print()
	{
		cout << "Hi " << name << endl;
	}
private:
	string name;
};

int main()
{
	MyClass mc1 = MyClass("Anna");
	MyClass mc2 = MyClass("John");
	mc1.print();
	MyClass* mcPtr = new MyClass("Sue");
	mcPtr->print();
	return 0;
}