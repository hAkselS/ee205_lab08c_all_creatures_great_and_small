///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
#define EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
#include <string>

enum           Gender {UNKNOWN_GENDER = 0, FEMALE =1 , MALE = 2 };

const float UNKNOWN_WEIGHT = -1;

class Animal {
protected:
    static const std::string    kingdom;
    std::string                 species;  //required
    enum Gender                 gender = UNKNOWN_GENDER;
    float                       weight = UNKNOWN_WEIGHT;

public:
    Animal();
};
//change

#endif //EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
