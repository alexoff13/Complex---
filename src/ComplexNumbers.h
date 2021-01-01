#ifndef COMPLEXNUMBER_COMPLEXNUMBERS_H
#define COMPLEXNUMBER_COMPLEXNUMBERS_H

#include <ostream>

struct ComplexNumber{
    double real;
    double imaginary;
};

ComplexNumber operator+(const ComplexNumber& a, const ComplexNumber& b);

ComplexNumber operator-(const ComplexNumber& a, const ComplexNumber& b);

void operator+=(ComplexNumber& a, const ComplexNumber& b);

void operator-=(ComplexNumber& a, const ComplexNumber& b);

ComplexNumber operator*(const ComplexNumber& a, const ComplexNumber& b);

ComplexNumber operator/(const ComplexNumber& a, const ComplexNumber& b);

void operator*=(ComplexNumber& a, const ComplexNumber& b);

void operator/=(ComplexNumber& a, const ComplexNumber& b);

std::ostream& operator<<(std::ostream& out, const ComplexNumber& a);

#endif //COMPLEXNUMBER_COMPLEXNUMBERS_H
