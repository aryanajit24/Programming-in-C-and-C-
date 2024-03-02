#include <iostream>
using namespace std;
    /*
    CH-230-A
    a9 p2.[c or cpp or h]
    Jaydev Dhanji
    jdhanji@jacobs-university.de
    */
    //Problem 2
int main (){
    //inputs
    int n;
    double x;
    string s;

    cout<< "Enter an integer:";
    cin>>n;
    cout<< "Enter a double:";
    cin>>x;
    cout<< "Enter a string:";
    cin>>s;

    int i;
    //loop to print the string and double value 'n' number of times
    for (i=0; i<n; i++){
        cout << s << ":" << x << endl;
    }

return 0;
}
