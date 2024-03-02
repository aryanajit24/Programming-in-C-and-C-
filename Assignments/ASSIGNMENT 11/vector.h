#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
    int size;
    double* elements;

public:
    Vector();  // Default constructor
    Vector(int size, double* elements);  // Parameterized constructor
    Vector(const Vector& other);  // Copy constructor
    ~Vector();  // Destructor

    // Setters and getters
    void setSize(int size);
    void setElements(double* elements);
    int getSize() const;
    double* getElements() const;

    // Operations
    double norm() const;
    Vector add(const Vector& other) const;
    Vector subtract(const Vector& other) const;
    double scalarProduct(const Vector& other) const;

    // Utility method
    void print() const;
};

#endif
