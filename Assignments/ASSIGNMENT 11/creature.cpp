#include "Creature.h"
using namespace std;

// Implementations of Creature
Creature::Creature(): distance(10) {
    cout << "Creating a Creature.\n";    
}    

Creature::~Creature() {
    cout << "A Creature has been destroyed.\n";
}

void Creature::run() const { 
    cout << "Running " << distance << " meters!\n";
}  

// Implementations of Wizard
Wizard::Wizard() : distFactor(3) {
    cout << "Creating a Wizard.\n";
}  

Wizard::~Wizard() {
    cout << "A Wizard has been destroyed.\n";
}

void Wizard::hover() const {
    cout << "Hovering " << (distFactor * distance) << " meters!\n";
}

// Implementations of Dragon
Dragon::Dragon() : firePower(5) {
    cout << "Creating a Dragon.\n";
}
  
Dragon::~Dragon() {
    cout << "A Dragon has been destroyed.\n";
}

void Dragon::breatheFire() const {
    cout << "Breathing fire with power " << firePower << "!\n";
}

// Implementations of Elf
Elf::Elf() : magicLevel(7) {
    cout << "Creating an Elf.\n";
}
  
Elf::~Elf() {
    cout << "An Elf has been destroyed.\n";
}

void Elf::castSpell() const {
    cout << "Casting a spell with magic level " << magicLevel << "!\n";
}
