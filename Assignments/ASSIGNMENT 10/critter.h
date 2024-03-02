#ifndef CRITTER_H
#define CRITTER_H

#include <string>

class Critter {
private: 
    std::string name;
    double hunger; // hunger level as a double
    double thirst; // new thirst level as a double
    int boredom;
    double height;

public: 
    // Constructors
    Critter();
    Critter(const std::string& name);
    Critter(const std::string& name, int hunger, int boredom, double height = 10.0);
    Critter(const std::string& name, int hunger, int boredom, double height, double thirst);\
    // Setter methods
    void setHunger(int newhunger);
    void setThirst(double newthirst); // New setter for thirst
    // Getter methods
    int getHunger() const;
    double getThirst() const; // New getter for thirst

    void print() const;
};

#endif 



