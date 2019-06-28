#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#pragma pack(push, 1)

struct Person
{
	char name[50];
	int age;
	double weight;
};

#pragma pack(pop)

int main()
{
	string filename = "person.bin";

	//Write binary file

	ofstream outf;
	outf.open(filename, ios::binary);

	if (!outf.is_open())
	{
		cout << "can't open file: " << filename;
		getchar();
		return 1;
	}

	Person person1 = {"Ilya", 23, 79};

	outf.write(reinterpret_cast<char*>(&person1), sizeof(Person));
	outf.close();

	//Read binary file

	ifstream inf;
	inf.open(filename, ios::binary);

	if (!inf.is_open())
	{
		cout << "can't open file: " << filename;
		getchar();
		return 1;
	}

	Person person2 = {};

	inf.read(reinterpret_cast<char*>(&person2), sizeof(Person));
	inf.close();

	cout << person2.name << endl << person2.age << endl << person2.weight;

	getchar();

	return 0;
}