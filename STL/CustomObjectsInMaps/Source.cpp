#include <iostream>
#include <string>
#include <map>
using namespace std;

class Person
{
	string name;
	int age;
public:
	Person() :name("Unnamed"), age(0)
	{}
	Person(string name, int age) :
		name(name), age(age)
	{}
	Person(const Person &person)
	{
		name = person.name;
		age = person.age;
	}
	bool operator <(const Person &person) const
	{
		if (name != person.name)
		{
			return name < person.name;
		}
		return age < person.age;
	}
	bool operator ==(const Person &person) const
	{
		if (name != person.name)
		{
			return false;
		}
		return age == person.age;
	}
	friend ostream & operator<<(ostream &os, const Person &person)
	{
		os << "Name: " << person.name << ". Age - " << person.age;
		return os;
	}
};

int main()
{
	//Custom objects as map value
	map<int, Person> people;

	people[0] = Person("Mike", 40);
	people[1] = Person("Ilya", 23);
	people[2] = Person("Vicky", 20);

	people.insert(make_pair(3, Person("Bob", 123)));
	people.insert(make_pair(3, Person("Sue", 13)));

	for (auto i : people)
	{
		cout << i.first << ". " << i.second << endl;
	}

	//Custom objects as map keys
	map<Person, int> peopleKeys;

	peopleKeys[Person("Mike", 40)] = 112;
	peopleKeys[Person("Ilya", 23)] = 226;
	peopleKeys[Person("Vicky", 20)] = 665;

	peopleKeys.insert(make_pair(Person("Bob", 123), 3));
	peopleKeys.insert(make_pair(Person("Sue", 13), 3));

	for (auto i : peopleKeys)
	{
		cout << i.first << ". Number: " << i.second << endl;
	}

	getchar();
	return 0;
}