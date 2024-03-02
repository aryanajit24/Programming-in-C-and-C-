#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

//function to replace vowles with underscore
void vowel_rep(string &str) {
	char vowels[10] = {'a', 'e', 'u', 'i', 'o',
						'A', 'E', 'U', 'I', 'O'};
	for (int i = 0; i < str.length(); i++) {//looping through string
		for (int j = 0; j < 10; j++) {
			if (str[i] == vowels[j])
				str[i] = '_';//replacing all vowels
		}
	}
}

//function to pick a random word
void random_word(string &str) {
	string words[17] = {"computer", "television", "keyboard", "laptop", "mouse",
						"university", "party", "alcohol", "friends", "exams","ikea",
						"coding", "netflix", "suitcase", "money", "guitar", "love"};

	int rand_num = rand() % 17;
	str = words[rand_num]; //picking random word from array
}

int main() {
	string rand_str, no_vowels, input_str, command;
	int tries = 0;

	random_word(rand_str);//picking a random word
	no_vowels = rand_str;
	vowel_rep(no_vowels);//replacing vowels
	cout << no_vowels << endl;

	while(1) {
		tries++;
		cin >> input_str;//asking for user input

		if (input_str == "quit") {
			break;
		}//closing program if the string entered is quit
		else if (input_str == rand_str) {
			cout << "Correct!" << endl;
			cout << "Number of tries: " << tries << endl;
			cout << "Type 'quit' if you want to exit game. Otherwise type 'go'." << endl;
			cin >> command;
			if (command == "quit") {
				break;
			}
			else if(command == "go") {
				//repeating the game again
				tries = 0;
				random_word(rand_str);
				no_vowels = rand_str;
				vowel_rep(no_vowels);
				cout << no_vowels << endl;
			}
		}
		else {
			//message for wrong guess
			cout << "Try again." << endl;
		}
	}

	return 0;
}
