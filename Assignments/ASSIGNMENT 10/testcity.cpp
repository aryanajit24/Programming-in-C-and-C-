
#include <iostream>
#include "City.h"

int main() {
    City bremen, paris, london;

    // Setting data for Bremen
    bremen.setName("Bremen");
    bremen.setInhabitants(567559); // Example data
    bremen.setMayor("Andreas ");
    bremen.setArea(326.7);

    // Setting data for Paris
    paris.setName("Paris");
    paris.setInhabitants(2161000); // Example data
    paris.setMayor("Anne");
    paris.setArea(105.4);

    // Setting data for London
    london.setName("London");
    london.setInhabitants(8982000); // Example data
    london.setMayor("Sadiq");
    london.setArea(1572);

    // Printing data (optional)
    std::cout << "City: " << bremen.getName() << ", Inhabitants: " << bremen.getInhabitants()
              << ", Mayor: " << bremen.getMayor() << ", Area: " << bremen.getArea() << " km^2" << std::endl;
    // Repeat for Paris and London

    return 0;
}
