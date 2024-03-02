
#include "Complex.h"
#include <iostream>

int main() {
    double real, imag;
    std::cout << "Enter real and imaginary part of the first complex number: ";
    std::cin >> real >> imag;
    Complex c1(real, imag);

    std::cout << "Enter real and imaginary part of the second complex number: ";
    std::cin >> real >> imag;
    Complex c2(real, imag);

    Complex c3;

    std::cout << "First complex number: ";
    c1.print();

    std::cout << "Conjugate of the first complex number: ";
    c1.conjugate().print();

    std::cout << "Sum of both complex numbers: ";
    c3 = c1.add(c2);
    c3.print();

    std::cout << "Difference (second - first): ";
    c3 = c2.subtract(c1);
    c3.print();

    std::cout << "Multiplication of both complex numbers: ";
    c3 = c1.multiply(c2);
    c3.print();

    return 0;
}
