
#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>

class Creature {
public:
    Creature();  
    ~Creature();
    void run() const;

protected:
    int distance;
};

class Wizard : public Creature {
public:
    Wizard();
    ~Wizard();
    void hover() const;

private:
    int distFactor;
};

class Dragon : public Creature {
public:
    Dragon();
    ~Dragon();
    void breatheFire() const;

private:
    int firePower;
};

class Elf : public Creature {
public:
    Elf();
    ~Elf();
    void castSpell() const;

private:
    int magicLevel;
};

#endif 
