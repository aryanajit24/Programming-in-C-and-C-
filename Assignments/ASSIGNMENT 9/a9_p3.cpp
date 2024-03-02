#include <iostream>

using namespace std;

//function which returns the absolute value
//of the float read from the keybpard
float absval(float num){
    if (num<0){
        num= -1*num;
    }
return num;
}

int main (){
    //inputs
    float x;
    cout << "Enter a float value:";
    cin >> x;

    //calling the function
    cout << absval(x) << endl;
return 0;
}
