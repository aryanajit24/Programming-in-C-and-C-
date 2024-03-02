#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

    //Problem 5
int main(){
    //reads the name of the player
    string name;
    cout<< "Player name:";
    cin >> name;

    //inputs
    int num, guess, tries=0;
    srand(time(0));
    //chooses a random number between 100 and 1
    num=rand()%100 +1;

    do{
        //reads the guess
        cout<< "Enter a number between 1 and 100:";
        cin>> guess;
    //increases the value of tries every time the use guesses
        tries ++;

        //prints a corresponding message if th guess is
        //too low or high depending on the random number
        if(guess<num){
            cout<< "TOO LOW!\n";
        }
        else if (guess>num){
            cout<< "TOO HIGH!\n";
        }
        //if the value is correct the program ends
        else{
            cout<< "Congratulations! "<< name<<" You guessed the correct number in "<< tries<< " guesses\n";
        }
    }
    while (guess != num);
return 0;
}

