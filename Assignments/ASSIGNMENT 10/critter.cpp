
#include "Critter.h"
#include <iostream>
Critter::Critter() : name("default_critter"), hunger(0.0), thirst(0.0), boredom(0), height(5) {
    std::cout << "Default constructor called" << std::endl;
}

Critter::Critter(const std::string& newName) : name(newName), hunger(0.0), thirst(0.0), boredom(0), height(5) {
    std::cout << "Constructor with name called" << std::endl;
}

Critter::Critter(const std::string& newName, int newHunger, int newBoredom, double newHeight) 
    : name(newName), hunger(newHunger / 10.0), thirst(newHunger / 10.0), boredom(newBoredom), height(newHeight) {
    std::cout << "Constructor with four parameters called" << std::endl;
}

Critter::Critter(const std::string& newName, int newHunger, int newBoredom, double newHeight, double newThirst) 
    : name(newName), hunger(newHunger / 10.0), thirst(newThirst), boredom(newBoredom), height(newHeight) {
    std::cout << "Constructor with all properties called" << std::endl;
}

// Setter methods
void Critter::setHunger(int newhunger) {
    hunger = newhunger / 10.0;
}

void Critter::setThirst(double newthirst) {
    thirst = newthirst;
}

// Getter methods
int Critter::getHunger() const {
    return static_cast<int>(hunger * 10);
}

double Critter::getThirst() const {
    return thirst;
}
void Critter::print() const {
    std::cout << "I am " << name 
              << ". My hunger level is " << getHunger() 
              << ". My thirst level is " << thirst
              << ". My boredom level is " << boredom 
              << ". My height is " << height << "." << std::endl;
}

