#include "Complex.h"

int main()
{
	myComplex::Complex complex1(20, 19);
	myComplex::Complex complex2 = complex1;

	cout << complex1 << endl;

	getchar();
	return 0;
}