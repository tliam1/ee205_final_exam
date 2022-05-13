///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#ifndef EE205_FINAL_EXAM_RECTANGLE_H
#define EE205_FINAL_EXAM_RECTANGLE_H


#include "Shape.h"

class Rectangle : public Shape{
protected:
    double length = 0;
    double width = 0;

public:
    double getLength() const;

    double getWidth() const;

    double compute_area() noexcept override;

    Rectangle(double newLength, double newWidth);
};


#endif //EE205_FINAL_EXAM_RECTANGLE_H
