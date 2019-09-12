#include <iostream>
#include <memory>
#include <string>

using namespace std;

class MyClass
{
public:
	MyClass(): name("No name"){}

	MyClass(string n) : name(n)
	{
		cout << "Constructing " << name << endl;
	}

	~MyClass()
	{
		cout << "Destructing " << name << endl;
	}

	void print()
	{
		cout << "Hello " << name << endl;
	}
private:
	string name;
};


int main()
{
	auto uniqueptr = make_unique<MyClass>("One");
	unique_ptr<MyClass> uniqueptr2 = move(uniqueptr);
	
	auto sharedptr = make_shared<MyClass>("Two");
	shared_ptr<MyClass> sharedptr2 = sharedptr;
	sharedptr->print();
	sharedptr2->print();

	return 0;
}