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
		friend ostream &operator<<(ostream &, const Complex &);

		double getReal() const
		{
			return real;
		}
		double getImaginary() const
		{
			return imaginary;
		}
	};
}
