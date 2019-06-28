#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_front(10);

	auto it = numbers.begin();
	it++;
	numbers.insert(it, 100);
	cout << "Element: " << *it << endl;

	auto eraseIt = numbers.begin();
	eraseIt++;
	eraseIt = numbers.erase(eraseIt);
	cout << "Element: " << *eraseIt << endl;

	for (auto i : numbers)
	{
		cout << i << endl;
	}

	getchar();
	return 0;
}