#include "Complex.h"

namespace myComplex
{
	myComplex::Complex::Complex() : real(0), imaginary(0)
	{
	}

	myComplex::Complex::Complex(double real, double imaginary) :
		real(real), imaginary(imaginary)
	{
	}

	myComplex::Complex::Complex(const Complex & complex)
	{
		real = complex.real;
		imaginary = complex.imaginary;
	}

	const Complex & myComplex::Complex::operator=(const Complex & complex)
	{
		real = complex.real;
		imaginary = complex.imaginary;

		return *this;
	}
	ostream & operator<<(ostream &os, const Complex &complex)
	{
		os << "(" << complex.real << "," << complex.imaginary << ")";
		return os;
	}
}