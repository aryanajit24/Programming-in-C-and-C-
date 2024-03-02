#include "Shapes.h"
#include <iostream>

using namespace std;

// Implementations for Shape, CenteredShape, RegularPolygon, Circle

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny), Radius(r) {}

double Circle::perimeter() const {
    return 2 * 3.14159 * Radius;
}

double Circle::area() const {
    return 3.14159 * Radius * Radius;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight) : 
    RegularPolygon(n, nx, ny, 4), width(nwidth), height(nheight) {}

Rectangle::Rectangle() : Rectangle("Rectangle", 0, 0, 1, 1) {}

Rectangle::Rectangle(const Rectangle& other) : 
    RegularPolygon(other), width(other.width), height(other.height) {}

double Rectangle::perimeter() const {
    return 2 * (width + height);
}

double Rectangle::area() const {
    return width * height;
}

Square::Square(const string& n, double nx, double ny, double nside) : 
    Rectangle(n, nx, ny, nside, nside) {}

Square::Square() : Square("Square", 0, 0, 1) {}

Square::Square(const Square& other) : Rectangle(other) {}

double Square::perimeter() const {
    return 4 * width;
}

double Square::area() const {
    return width * width;
}
