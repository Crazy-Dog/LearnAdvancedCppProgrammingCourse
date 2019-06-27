#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	fstream outf;
	string filename = "text.txt";

	outf.open(filename, ios::out);

	if (outf.is_open())
	{
		outf << "Hello there" << endl;
		outf << 123 << endl;
		outf.close();
	} else
	{
		cout << "Could not create file: " << filename << endl;
	}

	return 0;
}