#include "Critter.h"
#include <iostream>

int main() {
    Critter critter1;
    critter1.setHunger(2); // Sets hunger to 0.2

    Critter critter2("Blinky");
    critter2.setHunger(2); // Sets hunger to 0.2

    Critter critter3("Clyde", 2, 5, 7.5); // Sets hunger and thirst to 0.2

    Critter critter4("Pinky", 2, 5); // Sets hunger and thirst to 0.2

    // Creating a critter using the new constructor
    Critter critter5("Sparky", 2, 3, 4.5, 0.5);
    
    critter1.print();
    critter2.print();
    critter3.print();
    critter4.print();
    critter5.print();

    return 0;
}



