#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream inf;
	string filename = "text.txt";

	inf.open(filename);

	if (inf.is_open())
	{
		string line;
		while (inf)
		{
			getline(inf, line);
			cout << line << endl;
		}

		inf.close();
	}
	else
	{
		cout << "Can't open file" << filename << endl;
		
	}
	getchar();

	return 0;
}