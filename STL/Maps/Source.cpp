#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, int> ages;

	ages["Mike"] = 40;
	ages["Ilya"] = 23;
	ages["Vicky"] = 30;

	ages.insert(make_pair("Peter", 100));

	for (auto i : ages)
	{
		cout << i.first << " - " << i.second << endl;
	}

	getchar();
	return 0;
}