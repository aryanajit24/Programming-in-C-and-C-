#include <iostream>
using namespace std;

//function to subtract the max to all the values in the array
int subtractmax(int arr[], int x){
    int i;
    int max=arr[0];
    for(i=1;i<x;i++)
        if(arr[i]>max)
        max=arr[i];
    for(i=0; i<x; i++){
        arr[i]=arr[i]-max;
        cout<< "["<< arr[i]<<"]";
    }
    cout << endl;
return 0;
}
//function to deallocate the memory
void deallocating(int arr[]){
    delete[] arr;
}

int main(){
    //inputs
    int i,n;
    cout<< "Enter a number of elements: ";
    //reads size of the array
    cin>> n;
    //dynamically allocating the memory
    int* array= new int[n];
    for(i=0;i<n;i++)
        //reads value of the array
        cin>>array[i];
    //calling the fucntions
    subtractmax(array, n);
    deallocating(array);
return 0;}
