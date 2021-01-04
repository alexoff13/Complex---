#include <iostream>
#include "ComplexNumbers.h"

ComplexNumber operator+(const ComplexNumber& a, const ComplexNumber& b){
    ComplexNumber res{};
    res.real=a.real+b.real;
    res.imaginary=a.imaginary+b.imaginary;
    return res;
}

ComplexNumber operator-(const ComplexNumber& a, const ComplexNumber& b){
    ComplexNumber res{};
    res.real=a.real-b.real;
    res.imaginary=a.imaginary-b.imaginary;
    return res;
}

void operator+=(ComplexNumber& a, const ComplexNumber& b){
    a=a+b;
}

void operator-=(ComplexNumber& a, const ComplexNumber& b){
    a=a-b;
}

ComplexNumber operator*(const ComplexNumber& a, const ComplexNumber& b){
    ComplexNumber res{};
    res.real = a.real * b.real - a.imaginary * b.imaginary;
    res.imaginary = a.real * b.imaginary + a.imaginary * b.real;
    return res;
}

ComplexNumber operator/(const ComplexNumber& a, const ComplexNumber& b) {
    ComplexNumber res{};
    if(b.real==0 && b.imaginary==0){
        throw std::invalid_argument("Деление на ноль");
    }
    else{
    double d = b.real * b.real + b.imaginary * b.imaginary;
    res.real = (a.real * b.real + a.imaginary * b.imaginary) / d;
    res.imaginary = (a.imaginary * b.real - a.real * b.imaginary) / d;
    return res;
    }
}

void operator*=(ComplexNumber& a, const ComplexNumber& b){
    a=a*b;
}

void operator/=(ComplexNumber& a, const ComplexNumber& b){
    a=a/b;
}

std::ostream& operator<<(std::ostream& out, const ComplexNumber& a){
    if (a.real==0&&a.imaginary==0){
        out<<0;
    }
    else if(a.imaginary==0){
        out<<a.real;
    }
    else if(a.real==0){
        out<<a.imaginary<<'i';
    }
    else {
       a.imaginary>0 ? out << a.real << '+' << a.imaginary << 'i' : out << a.real << a.imaginary << 'i';
    }
}
