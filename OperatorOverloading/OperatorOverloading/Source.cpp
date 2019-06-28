#include <iostream>
#include <string>
using namespace std;

class Item
{
	int id;
	string name;
public:
	Item() : id(0), name("")
	{

	}
	Item(int id, string name) : id(id), name(name)
	{}
	Item(const Item &item)
	{
		id = item.id;
		name = item.name;
	}
	const Item &operator=(const Item &item)
	{
		id = item.id;
		name = item.name;

		return *this;
	}
	friend ostream &operator<<(ostream &os, const Item &item)
	{
		os << "Id: " << item.id << ". Name: " << item.name;
		return os;
	}
};

int main()
{
	Item item(10, "ten");
	cout << item << endl;

	Item item2(20, "twenty");
	Item item3(30, "thirty");
	Item item4 = item3;

	item3 = item = item2;
	cout << item << endl;
	

	getchar();
	return 0;
}