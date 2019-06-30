#pragma once

#include <iostream>
using namespace std;

namespace myComplex
{
	class Complex
	{
		double real;
		double imaginary;
	public:
		Complex();
		Complex(double real, double imaginary);
		Complex(const Complex &complex);
		const Complex &operator=(const Complex &complex);

		double getReal() const
		{
			return real;
		}
		double getImaginary() const
		{
			return imaginary;
		}
	};

	Complex operator+(const Complex & complex1, const Complex & complex2);
	Complex operator+(const Complex & complex, double d);
	Complex operator+(double d, const Complex & complex);
	ostream &operator<<(ostream &, const Complex &);
}
