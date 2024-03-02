#include "Shapes.h"
#include <iostream>

using namespace std;

int main() {
    Circle c("first circle", 3, 4, 7);
    Rectangle r("first rectangle", 5, 6, 3, 4);
    Square s("first square", 8, 9, 4);

    c.printName();
    cout << "Circle area: " << c.area() << ", perimeter: " << c.perimeter() << endl;

    r.printName();
    cout << "Rectangle area: " << r.area() << ", perimeter: " << r.perimeter() << endl;

    s.printName();
    cout << "Square area: " << s.area() << ", perimeter: " << s.perimeter() << endl;

    return 0;
}
