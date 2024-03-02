
#include "Complex.h"
#include <iostream>

Complex::Complex() : real(0), imaginary(0) {}

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

Complex::Complex(const Complex& other) : real(other.real), imaginary(other.imaginary) {}

Complex::~Complex() {}

void Complex::setReal(double r) {
    real = r;
}

void Complex::setImaginary(double i) {
    imaginary = i;
}

double Complex::getReal() const {
    return real;
}

double Complex::getImaginary() const {
    return imaginary;
}

void Complex::print() const {
    std::cout << real << " + " << imaginary << "i" << std::endl;
}

Complex Complex::conjugate() const {
    return Complex(real, -imaginary);
}

Complex Complex::add(const Complex other) const {
    return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::subtract(const Complex other) const {
    return Complex(real - other.real, imaginary - other.imaginary);
}

Complex Complex::multiply(const Complex other) const {
    return Complex(real * other.real - imaginary * other.imaginary, 
                   imaginary * other.real + real * other.imaginary);
}
