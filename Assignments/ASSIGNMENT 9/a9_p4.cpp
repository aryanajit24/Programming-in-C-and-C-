#include <iostream>
#include <string>
using namespace std;

//function to return the value of subtraction
int mycount(int a, int b){
    return b-a;
}
//function to return the number of occurrence of a certain letter from the string
int mycount(char s,string chars){
    int count=0;
    for(int i=0; i< chars.length(); i++){
        if (chars[i]==s){
            count ++;
        }
    }
return count;
}

int main(){
    //inputs for integer array
    int x, y;
    cout << "Enter 2 integers:";
    cin >> x;
    cin >> y;
    cout << "the difference between y and x is "<< mycount(x,y) << endl;//calling the function

    //input for the string
    string d;
    char b;
    cout << "Enter a character:";
    cin >> b;
    getchar();
    cout<< "Enter a string:";
    getline(cin, d);
    cout<< "Number of occurrence:";
    //calling the function
    cout<< mycount(b,d) << endl;

return 0;
}
