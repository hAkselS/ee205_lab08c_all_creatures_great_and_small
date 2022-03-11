///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "Animal.h"

using namespace std;

const string Animal::kingdom = "Animalia";

Animal::Animal() {}

//Constructors
Animal::Animal(const string &inSpecies) : species(inSpecies) {}

Animal::Animal(const string &inSpecies, Gender inGender) : species(inSpecies), gender(inGender) {}

Animal::Animal(const string &inSpecies, Gender inGender, float inWeight) : species(inSpecies), gender(inGender), weight(inWeight) {}

Animal::Animal(const string &inSpecies, float inWeight) : species(inSpecies), weight(inWeight) {}

//Getters
const string &Animal::getKingdom() {
    return kingdom;
}

const string &Animal::getSpecies() const {
    return species;
}

//Getters and setters
Gender Animal::getGender() const {
    return gender;
}

void Animal::setGender(Gender gender) {
    Animal::gender = gender;
}

float Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(float weight) {
    Animal::weight = weight;
}

//print and validate
void Animal::printInfo() {

}

bool Animal::isValid() {
    return false;
}
