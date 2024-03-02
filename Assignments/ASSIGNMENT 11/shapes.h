#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {
private:
    std::string name;
public:
    Shape(const std::string&);
    Shape();
    Shape(const Shape&);
    void printName() const;
};

class CenteredShape : public Shape {
private: 
    double x, y;
public:
    CenteredShape(const std::string&, double, double);
    CenteredShape();
    CenteredShape(const CenteredShape&);
    void move(double, double);
};

class RegularPolygon : public CenteredShape {
private: 
    int EdgesNumber;
public:
    RegularPolygon(const std::string&, double, double, int);
    RegularPolygon();
    RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {
private:
    double Radius;
public:
    Circle(const std::string&, double, double, double);
    Circle();
    Circle(const Circle&);

    double perimeter() const;
    double area() const;
};

class Rectangle : public RegularPolygon {
protected:
    double width;
    double height;
public:
    Rectangle(const std::string&, double, double, double, double);
    Rectangle();
    Rectangle(const Rectangle&);

    double perimeter() const;
    double area() const;
};

class Square : public Rectangle {
public:
    Square(const std::string&, double, double, double);
    Square();
    Square(const Square&);

    double perimeter() const;
    double area() const;
};

#endif
