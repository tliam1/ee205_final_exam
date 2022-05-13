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
    double length;
    double width;
    Rectangle(double newLength, double newWidth);

public:
    double getLength() const;

    double getWidth() const;

    double compute_area() noexcept override;
};


#endif //EE205_FINAL_EXAM_RECTANGLE_H
