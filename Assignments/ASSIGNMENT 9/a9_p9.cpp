#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

//function to replace the vowels with a '_'
void repvowels(string &str){
    char vowels [10]= {'a','e','i','o','u',
                       'A','E','I','O','U'};
    //going through the strings to search for vowels
    for (int i=0; i<str.size(); i++){
        for (int j=0; j<10; j++){
                //replacing the vowel
                if (str[i]== vowels[j]){
                    str[i]= '_';
            }
        }
    }
}
//function to choose a random word from the string
void random(string &str){
    string words[17]={"computer", "television","window","winter","codeblocks"
"keyboard", "laptop", "mouse", "pizza", "shoes", "primary",
"bracelets","hoodie","garbage-bag","table","extension","blanket","towel"};

int randomnum = rand()%17;
str = words[randomnum];
}
int main(){
    cout<<"Hello there.\nWelcome to the guessing word game, best of luck!\n";
    //inputs
    string randomstr, novowels, command, inputstr;
    int tries=0;

    //calling the functions
    random(randomstr);
    novowels=randomstr;
    repvowels(novowels);
    cout<<novowels<<endl;

    //infinite loop
    while(1){
        tries++;
        cin>>inputstr;

        //if quit is read the program ends
        if(inputstr== "quit"){
            break;
        }
        //playing the game
        else if(inputstr==randomstr){
            cout<<"Congratulations you guessed the correct word!!"<<endl ;
            cout<< "Number of guesses: "<<tries<< endl;
            cout<< "To quit the game enter 'quit', to continue the game enter 'continue'\n";
            cin>>command;

            //ends the program if quit is entered
            if(command == "quit"){
                break;
            }
            //repeats the game if user enters continue
            else if(command == "continue"){
                tries=0;
                random(randomstr);
                novowels=randomstr;
                repvowels(novowels);
                cout<<novowels<<endl;
            }
        }
        else {
                //prints when the guess is wrong
                cout<<"Try again"<<endl ;
            }
    }
return 0;
}
