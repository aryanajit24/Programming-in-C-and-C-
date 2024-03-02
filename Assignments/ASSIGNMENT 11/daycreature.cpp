#include "Creature.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    while (true) {
        cout << "Enter 'wizard', 'dragon', 'elf', or 'quit': ";
        cin >> input;

        if (input == "quit") {
            break;
        }

        if (input == "wizard") {
            Wizard* w = new Wizard();
            w->run();
            w->hover();
            delete w;
        } 
        else if (input == "dragon") {
            Dragon* d = new Dragon();
            d->run();
            d->breatheFire();
            delete d;
        } 
        else if (input == "elf") {
            Elf* e = new Elf();
            e->run();
            e->castSpell();
            delete e;
        } 
        else {
            cout << "Invalid input. Please enter 'wizard', 'dragon', 'elf', or 'quit'." << endl;
        }
    }

    return 0;
}
