#include <iostream>
#include <string>
using namespace std;

void mightGoWrong()
{
	bool error = false;
	bool error2 = true;

	if (!error)
	{
		throw 8;
	}

	if (error)
	{
		throw "Something went wrong";
	}

	if (error2)
	{
		throw string("Something else went wrong.");
	}
}

void usesMightGoWrong()
{
	mightGoWrong();
}

int main() 
{	
	try {
		usesMightGoWrong();
	}
	catch (int e)
	{
		cerr << "Error code: " << e << endl;
	}
	catch (char const * e)
	{
		cerr << "Error message: " << e << endl;
	}
	catch (string & e)
	{
		cerr << "string error message: " << e << endl;
	}

	cout << "Still running" << endl;

	getchar();

	return 0;
}