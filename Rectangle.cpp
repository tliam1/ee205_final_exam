///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#include "Rectangle.h"

Rectangle::Rectangle(double newLength, double newWidth) {
    if (newLength <= 0 || newWidth <= 0){
        // throw an exception
    }
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::compute_area() noexcept {
    return getLength() * getWidth();
}

