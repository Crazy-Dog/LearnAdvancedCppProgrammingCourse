#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Person
{
	int id;
	string name;
public:
	Person(int id, string name) : id(id), name(name) 
	{}
	bool operator<(const Person &person) const
	{
		if (id != person.id)
		{
			return id < person.id;
		}
		return name < person.name;
	}
	friend ostream &operator<<(ostream &os, const Person &person)
	{
		os << "Id: " << person.id << ". Name: " << person.name;
		return os;
	}
};

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

	for (int i = 0; i < 10; i++)
	{
		if (numbers.capacity() != capacity)
		{
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}
		numbers.push_back(i);
	} // for (int i = 0; i < 1000; i++)

	numbers.resize(100);
	cout << numbers[2] << endl;
	cout << "Capacity: " << capacity << endl;
	cout << "Size: " << numbers.size() << endl;

	// Sorting vector lesson
	vector<Person> people;

	people.push_back(Person(531345, "Mike"));
	people.push_back(Person(222320, "Ilya"));
	people.push_back(Person(983932, "Bimm"));
	people.push_back(Person(334210, "Kate"));

	sort(people.begin(), people.end());

	for (auto i : people)
	{
		cout << i << endl;
	}  // for (auto i : people)

	getchar();
	return 0;
}