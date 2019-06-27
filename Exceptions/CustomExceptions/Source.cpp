#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception
{
public:
	virtual const char * what() const throw()
	{
		return "Something bad happened!";
	}
};

class Test
{
public:
	void goesWrong() throw(bad_alloc)
	{
		throw MyException();
	}
};

int main()
{
	Test test;

	try
	{
		test.goesWrong();
	}
	catch (MyException &e)
	{
		cout << e.what() << endl;
	}

	cout << "Still running" << endl;

	getchar();

	return 0;
}