///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Square.h
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////



#include "Rectangle.h"

class Square : public Rectangle{
public:
    explicit Square(double newSide);
    double getSide();
};

