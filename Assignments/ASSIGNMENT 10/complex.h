
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(); // Default constructor
    Complex(double real, double imaginary); // Constructor with specific values
    Complex(const Complex& other); // Copy constructor
    ~Complex(); // Destructor

    // Setter methods
    void setReal(double r);
    void setImaginary(double i);

    // Getter methods
    double getReal() const;
    double getImaginary() const;
    void print() const;
    Complex conjugate() const;
    Complex add(const Complex other) const;
    Complex subtract(const Complex other) const;
    Complex multiply(const Complex other) const;
};

#endif 
