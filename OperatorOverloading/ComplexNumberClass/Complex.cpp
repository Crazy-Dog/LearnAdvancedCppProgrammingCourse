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
	bool Complex::operator==(const Complex & complex) const
	{
		return (complex.real == real) && (complex.imaginary == imaginary);
	}
	bool Complex::operator!=(const Complex & complex) const
	{
		return !(*this == complex);
	}
	Complex Complex::operator*() const
	{
		return Complex(real, -imaginary);
	}
	Complex operator+(const Complex & complex1, const Complex & complex2)
	{
		return Complex(complex1.getReal() + complex2.getReal(), 
			complex1.getImaginary() + complex2.getImaginary());
	}
	Complex operator+(const Complex & complex, double d)
	{
		return Complex(d + complex.getReal(), complex.getImaginary());
	}
	Complex operator+(double d, const Complex & complex)
	{
		return Complex(d + complex.getReal(), complex.getImaginary());
	}
	ostream & operator<<(ostream &os, const Complex &complex)
	{
		os << "(" << complex.getReal() << "," << complex.getImaginary() << ")";
		return os;
	}
}