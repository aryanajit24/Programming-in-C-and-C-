
#include "City.h"

City::City() : inhabitants(0), area(0.0) {}
void City::setName(const std::string& newName) {
    name = newName;
}

void City::setInhabitants(int newInhabitants) {
    inhabitants = newInhabitants;
}

void City::setMayor(const std::string& newMayor) {
    mayor = newMayor;
}

void City::setArea(double newArea) {
    area = newArea;
}

std::string City::getName() const {
    return name;
}

int City::getInhabitants() const {
    return inhabitants;
}

std::string City::getMayor() const {
    return mayor;
}

double City::getArea() const {
    return area;
}
