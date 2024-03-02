#include <iostream>
#include <string>
using namespace std;
//function to return the positive and even number from the array
int myfirst(int arr[], int n){
    //inputs
    int i;
    int yes;
    int no= -1;
    bool conditionsmet = false;
    //loop through the array
    for(i=0; i< n; i++){
        if (arr[i]>0 && arr[i]%2==0){
            //if an integer is found yes is given the value
            yes=arr[i];
            conditionsmet = true;
            break;
        }
    }
     if(conditionsmet == true){
            return yes;
        }
    //return -1 if no number is positive and even
    else {
        return no;
    }
}
//function to return the negative and not a fraction number from the array
double myfirst(double arr[], double n){
    //inputs
    int i;
    double yes;
    double no=-1.1;
    bool conditionsmet = false;
    //looping through the array
    for (i=0; i<n; i++){
        if (arr[i]<0 && arr[i]==(int) arr[i]){
            //giving yes the value of negative and not a fraction double
            yes=arr[i];
            conditionsmet = true;
            break;
        }
    }
    if(conditionsmet == true){
            return yes;
        }
        //return -1.1 if no such number is found in the array
        else {
            return no;
        }
}
//function to return the first element with a consonant
char myfirst(char arr[], char n){
    //inputs
    int i;
    char yes;
    char no=0;
    bool conditionsmet= false;
    //looping through the array
    for (i=0; i<n; i++){
        //if its a vowel it continues
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' ||
           arr[i] == 'o' || arr[i] == 'u' ||arr[i] == 'A' ||
           arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' ||
           arr[i] == 'U') {
               continue;
			}
    //otherwise yes is given the value of that consonant
        else{
             yes=arr[i];
                conditionsmet = true;
                break;
        }
    }
    if(conditionsmet==true){
            return yes;
        }
        //returns 0 if there is no consonant present
        else {
            return no;
        }
}

int main(){
    int i,n1,n2,n3;

    //reads the size of the array and the values of the array
    cout<< "Enter number of integers: ";
    cin>> n1;
    //dynamically allocating the memory
    int* intarr= new int [n1];
    for(i=0; i<n1; i++)
        cin>> intarr[i];
        cout<< "The first positive and even number is "<< myfirst(intarr,n1) << endl;

    //reads the size of the array and the values of the array
    cout<< "Enter number of doubles: ";
    cin>>n2;
    //dynamically allocating the memory
    double* doublearr= new double[n2];
    for(i=0;i<n2;i++)
        cin>> doublearr[i];
        cout<< "The first negative double with no fraction part is "<<myfirst(doublearr,n2)<< endl;

    //reads the size of the array and the values of the array
    cout << "Enter number of characters: ";
    cin>> n3;
    //dynamically allocating the memory
    char* chararr= new char[n3];
    for(i=0; i<n3; i++)
        cin>> chararr[i];
        cout<< "The first consonant in the array is "<<myfirst(chararr, n3)<<endl;

    //deallocating memory
    delete[] intarr;
    delete[] doublearr;
    delete[] chararr;
return 0;
}
