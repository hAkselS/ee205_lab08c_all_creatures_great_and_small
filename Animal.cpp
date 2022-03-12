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
#include <iostream>

using namespace std;

const string Animal::kingdom = "Animalia";


//Constructors
Animal::Animal(const string &inSpecies){
    setSpecies( inSpecies );
}

Animal::Animal(const string &inSpecies, Gender inGender) : gender(inGender) {
    setSpecies( inSpecies );
}

Animal::Animal(const string &inSpecies, Gender inGender, float inWeight) :  gender(inGender) {
    setSpecies( inSpecies );
    setWeight( inWeight );
}

Animal::Animal(const string &inSpecies, float inWeight) : species(inSpecies) {
    setWeight( inWeight );
}

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

void Animal::setGender(Gender inGender) {
    if (gender != UNKNOWN_GENDER ){
        throw logic_error("Previous gender must be unknown gender");
    }
    if ( gender != UNKNOWN_GENDER && inGender != UNKNOWN_GENDER){
        throw logic_error( "Gender cannot switch from Male to Female or opposite");
    }
    Animal::gender = inGender;


}

float Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(float inWeight) {
    if ( !validateWeight( inWeight )) {
        throw invalid_argument( "Bad Cat weight" );
    }
    Animal::weight = inWeight;
}

//print and validate
void Animal::printInfo() {
    cout << "Animal Fields" << endl;
    cout << " Kingdom = [" << getKingdom() << "]" << endl;
    cout << " Species = [" << getSpecies() << "]" << endl;
    cout << " Weight = [" << getWeight() << "]" << endl;
    cout << " Gender = [" << getGender() << "]" << endl;

}

bool Animal::isValid() {
    if ( !validateWeight( weight)) //if validateWeight == false
        return false;
    return true;
}

bool Animal::validateWeight(const float inWeight) {
    if ( inWeight == UNKNOWN_WEIGHT)
        return true;

    if ( inWeight > 0 )
        return true;

    return false;
}

bool Animal::validateSpecies(const std::string inSpecies) {
    if ( inSpecies.empty() ) //if inSpecies.empty = true
        return false;
    return true;
}

void Animal::setSpecies(const std::string inSpecies) {
    if (!validateSpecies( inSpecies ))
        throw invalid_argument ( "Species cannot be empty ");
    species = inSpecies;
}
