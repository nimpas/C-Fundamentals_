#include <iostream>
#include <string>

using namespace std;

class MyClass
{
public:
	MyClass(string n): name(n)
	{
		cout << "Constructing " << name << endl;
	}

	~MyClass()
	{
		cout << "Destructing " << name << endl;
	}
private:
	string name;
};

void func()
{
	MyClass m3 = MyClass("Three");
	MyClass m4 = MyClass("Four");
}

int main()
{
	/*MyClass mc1 = MyClass("One");
	{
		MyClass mc5 = MyClass("Five");
	}

	func();
	MyClass mc2 = MyClass("Two");*/

	MyClass* mcPtr = new MyClass("Pointer 1");
	mcPtr = new MyClass("Pointer 2");
	delete mcPtr;
	return 0;
}