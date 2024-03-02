#include "Vector.h"
#include <iostream>

using namespace std;

int main() {
    double elements1[] = {1, 2, 3};
    double elements2[] = {4, 5, 6};
    Vector v1(3, elements1);
    Vector v2(3, elements2);
    Vector v3(v2);  // Copy of v2
    Vector v4;  // Default constructor

    cout << "Norm of v2: " << v2.norm() << endl;
    cout << "Scalar product of v2 and v3: " << v2.scalarProduct(v3) << endl;

    cout << "Sum of v2 and v3: ";
    v2.add(v3).print();

    cout << "Difference of v2 and v3: ";
    v2.subtract(v3).print();

    return 0;
}
