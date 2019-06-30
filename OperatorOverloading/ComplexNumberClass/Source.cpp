#include "Complex.h"

int main()
{
	myComplex::Complex complex1(20, 19);
	myComplex::Complex complex2(2, 3);
	myComplex::Complex complex3 = complex1 + complex2;
	complex2 = complex2 + 2;

	cout << complex3 << endl;
	cout << complex2 << endl;

	cout << (complex2 != complex1 ? "Not equal" : "equal") << endl;
	cout << *complex2 << endl;

	getchar();
	return 0;
}