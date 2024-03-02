#include "Vector.h"
#include <iostream>
#include <cmath>

using namespace std;

Vector::Vector() : size(0), elements(nullptr) {}

Vector::Vector(int size, double* elements) {
    this->size = size;
    this->elements = new double[size];
    for (int i = 0; i < size; i++) {
        this->elements[i] = elements[i];
    }
}

Vector::Vector(const Vector& other) {
    size = other.size;
    elements = new double[size];
    for (int i = 0; i < size; i++) {
        elements[i] = other.elements[i];
    }
}

Vector::~Vector() {
    delete[] elements;
}

void Vector::setSize(int size) {
    this->size = size;
}

void Vector::setElements(double* elements) {
    if (this->elements) {
        delete[] this->elements;
    }
    this->elements = new double[size];
    for (int i = 0; i < size; i++) {
        this->elements[i] = elements[i];
    }
}

int Vector::getSize() const {
    return size;
}

double* Vector::getElements() const {
    return elements;
}

double Vector::norm() const {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += elements[i] * elements[i];
    }
    return sqrt(sum);
}

Vector Vector::add(const Vector& other) const {
    double* resultElements = new double[size];
    for (int i = 0; i < size; i++) {
        resultElements[i] = this->elements[i] + other.elements[i];
    }
    return Vector(size, resultElements);
}

Vector Vector::subtract(const Vector& other) const {
    double* resultElements = new double[size];
    for (int i = 0; i < size; i++) {
        resultElements[i] = this->elements[i] - other.elements[i];
    }
    return Vector(size, resultElements);
}

double Vector::scalarProduct(const Vector& other) const {
    double product = 0;
    for (int i = 0; i < size; i++) {
        product += this->elements[i] * other.elements[i];
    }
    return product;
}

void Vector::print() const {
    for (int i = 0; i < size; i++) {
        cout << elements[i] << " ";
    }
    cout << endl;
}
