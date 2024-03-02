
#ifndef CITY_H
#define CITY_H

#include <string>

class City {
private:
    std::string name;
    int inhabitants;
    std::string mayor;
    double area;

public:
    City();
    // Setter methods
    void setName(const std::string& newName);
    void setInhabitants(int newInhabitants);
    void setMayor(const std::string& newMayor);
    void setArea(double newArea);

    // Getter methods
    std::string getName() const;
    int getInhabitants() const;
    std::string getMayor() const;
    double getArea() const;
};

#endif // CITY_H
