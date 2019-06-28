#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> strings;

	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	for (auto i : strings)
	{
		cout << i << endl;
	}  // for (auto i : strings)

	vector<double> numbers(0);

	int capacity = numbers.capacity();
	cout << "Capacity: " << capacity << endl;
	cout << "Size: " << numbers.size() << endl;

	for (int i = 0; i < 1000; i++)
	{
		if (numbers.capacity() != capacity)
		{
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}
		numbers.push_back(i);
	}

	numbers.resize(100);
	cout << numbers[2] << endl;
	cout << "Capacity: " << capacity << endl;
	cout << "Size: " << numbers.size() << endl;

	getchar();
	return 0;
}