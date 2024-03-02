#include "Creature.h"
using namespace std;

int main() {
    Creature c;
    c.run();

    Wizard w;
    w.run();
    w.hover();

    Dragon d;
    d.run();
    d.breatheFire();

    Elf e;
    e.run();
    e.castSpell();

    return 0;
}
