///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Square.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdexcept>
#include "Square.h"
#include <iostream>
//#define DEBUG

Square::Square(double newSide): Rectangle(newSide, newSide) {
    if (newSide <= 0){
        throw std::invalid_argument("length and width must be > 0");
    }
#ifdef DEBUG
    std::cout << "Side Length is: " << newSide << std::endl;
#endif
}

double Square::getSide() {
    return getLength();
}

