#include <iostream>
#include <string>
#include <set>
using namespace std;

class Pam
{
	int id;
	string name;
public:
	Pam() : id(0), name("Not Found")
	{}
	Pam(int id, string name) : id(id), name(name)
	{}
	bool operator<(const Pam &pam) const
	{
		if (id != pam.id)
		{
			return id < pam.id;
		}
		return name < pam.name;
	}
	friend ostream & operator<<(ostream &os, const Pam &pam)
	{
		os << "Id: " << pam.id << ". Name: " << pam.name;
		return os;
	}
};

int main()
{
	//numbers
	set<int> numbers;

	numbers.insert(10);
	numbers.insert(22);
	numbers.insert(22);
	numbers.insert(32);
	numbers.insert(443);

	for (auto i : numbers)
	{
		cout << i << endl;
	}
	//objects
	set<Pam> pams;

	pams.insert(Pam(110223, "Mike"));
	pams.insert(Pam(222133, "Ilya"));
	pams.insert(Pam(222320, "Bim"));
	pams.insert(Pam(533212, "Ilya"));
	pams.insert(Pam(959932, "Param"));

	for (auto i : pams)
	{
		cout << i << endl;
	}

	getchar();
	return 0;
}