#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;
	string filename = "stats.txt";

	input.open(filename);

	if (!input.is_open())
	{
		return 1;
	}

	while (input)
	{
		string line;

		getline(input, line, ':');

		int population;
		input >> population;

		input >> ws; //delete whitespaces and hidden "new line" characters

		cout << "'" << line << "' -- '" << population << "'" << endl;
	}

	input.close();

	getchar();

	return 0;
}