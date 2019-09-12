#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass() : value(nullptr)
	{
		cout << "Default constructor " << value << endl;
	}

	MyClass(int v) : value(new int(v))
	{
		cout << "Constructor with one argument " << *value << endl;
	}

	MyClass(const MyClass& other) : value(new int(*other.value))
	{
		cout << "Copy constructor with value " << *value << endl;
	}

	MyClass(MyClass&& other) : value(nullptr)
	{
		swap(value, other.value);
		cout << "Move constructor with value " << *value << endl;
	}

	~MyClass()
	{
		if (value)
		{
			delete value;
		}
	}



	MyClass& operator =(const MyClass& other)
	{
		if (value)
		{
			delete value;
		}
		value = new int(*other.value);
		cout << "Copy assignment operator " << *value << endl;
		return *this;
	}

	MyClass& operator =(MyClass&& other)
	{
		value = nullptr;
		swap(value, other.value);
		cout << "Move assignment operator " << *value << endl;
		return *this;
	}

	void print()
	{
		if (value)
		{
			cout << *value << endl;
		}
		else
		{
			cout << "null" << endl;
		}
	}

private:
	int* value;
};

MyClass createObject(int v)
{
	MyClass x(v);
	return x;
}


int main()
{
	MyClass mc1;
	MyClass mc2(2);
	mc2.print();
	MyClass mc3 = move(mc2);
	mc2.print();
	mc3.print();
	mc1 = move(mc3);
	mc1.print();
	mc3.print();

	cout << "---------" << endl;

	mc2 = createObject(6);
	return 0;
}