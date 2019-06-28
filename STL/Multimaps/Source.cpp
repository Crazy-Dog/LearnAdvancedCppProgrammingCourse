#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	multimap<int, string> lookup;

	lookup.insert(make_pair(30, "Mike"));
	lookup.insert(make_pair(10, "Vicky"));
	lookup.insert(make_pair(20, "Ray"));
	lookup.insert(make_pair(30, "Bob"));

	for (auto i : lookup)
	{
		cout << "Age: " << i.first << ". Name: " << i.second << endl;
	}

	for (auto its = lookup.equal_range(30); its.first != its.second; its.first++)
	{
		cout << "Age: " << its.first->first << ". Name: " << its.first->second << endl;
	}

	getchar();
	return 0;
}