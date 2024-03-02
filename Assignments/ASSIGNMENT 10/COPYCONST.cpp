#include <iostream>
#include <cstring>

using namespace std;

class NaiveString {
private:
    char *str;
public:
    NaiveString(const char*);
    NaiveString(const NaiveString&);
    ~NaiveString(); // Destructor for memory management
    void update(char, char);
    void print();
};

NaiveString::NaiveString(const char* t) {
    str = new char[strlen(t) + 1];
    strcpy(str, t);
    cout << "Regular constructor called" << endl;
}

NaiveString::NaiveString(const NaiveString& src) {
    str = new char[strlen(src.str) + 1];
    strcpy(str, src.str);
    cout << "Copy constructor called" << endl;
}

NaiveString::~NaiveString() {
    delete[] str;
    cout << "Destructor called" << endl;
}

void NaiveString::update(char oldchar, char newchar) {
    for (unsigned int i = 0; i < strlen(str); i++) 
        if (str[i] == oldchar)
            str[i] = newchar;
}

void NaiveString::print() {
    cout << str << endl;
}

void funcByVal(NaiveString s) {
    cout << "funcByVal() being called" << endl;
    s.update('B', 'C');
    s.print();
}

// Implementing funcByRef
void funcByRef(NaiveString &s) {
    cout << "funcByRef() being called" << endl;
    s.update('B', 'C');
    s.print();
}

int main(int argc, char** argv) {
    NaiveString a("aBcBdB");
    a.print();
    cout << "About to call funcByVal()" << endl;
    funcByVal(a);
    a.print();
    
    cout << "About to call funcByRef()" << endl;
    funcByRef(a);
    a.print();
}

