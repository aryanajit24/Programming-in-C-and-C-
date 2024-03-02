#include <iostream>
using namespace std;

// swap ints
void swapping(int &a, int &b) {
    //introducing a new integer
    int temp;
    //swapping the values
    temp=a;
    a=b;
    b=temp;
}
// swap floats
void swapping(float &a, float &b) {
    //initiating a new float number
    float temp;
    //swapping the values
    temp=a;
    a=b;
    b=temp;
}
// swap char pointersb
void swapping(const char* &a, const char* &b) {
    //initiating a new character
    const char *temp;
    //swapping the chars
    temp=a;
    a=b;
    b=temp;
}

int main(void) {
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

return 0;
}
