#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
	map<string, vector<int>> scores;

	scores["Mike"].push_back(10);
	scores["Ilya"].push_back(20);
	scores["Mike"].push_back(15);
	scores["Vicky"].push_back(4124);
	scores["Ilya"].push_back(1210);

	for (auto i : scores)
	{
		cout << "Name: " <<  i.first << endl;
		for (auto j : i.second)
		{
			cout << right << setw(12) << "Score: " << j << endl;
		}
	}

	getchar();
	return 0;
}