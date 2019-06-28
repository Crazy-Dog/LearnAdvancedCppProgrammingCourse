#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

class Brend
{
	string name;
public:
	Brend() : name("None")
	{}
	Brend(string name) : name(name)
	{}
	bool operator< (const Brend &person) const
	{
		return name < person.name;
	}
	friend ostream &operator<<(ostream &os, const Brend &person)
	{
		os << "Name: " << person.name;
		return os;
	}
};

int main()
{
	//Stack
	stack<Brend> cars;

	cars.push(Brend("Audi"));
	cars.push(Brend("BMW"));
	cars.push(Brend("Cherry"));
	cars.push(Brend("Toyota"));
	cars.push(Brend("Mercedes"));

	while (cars.size())
	{
		cout << cars.top() << endl;
		cars.pop();
	}
	
	//Queue
	queue<Brend> anotherCars;

	anotherCars.push(Brend("Audi"));
	anotherCars.push(Brend("BMW"));
	anotherCars.push(Brend("Cherry"));
	anotherCars.push(Brend("Toyota"));
	anotherCars.push(Brend("Mercedes"));

	while (anotherCars.size())
	{
		cout << anotherCars.front() << endl;
		anotherCars.pop();
	}

	getchar();
	return 0;
}