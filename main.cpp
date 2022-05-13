#include <iostream>
#include "Square.h"
//#define DEBUG

int main() {
    std::cout << "Hello, World!" << std::endl;
    Square mySquare(2);
    std::cout << "The area of mySquare is: "
              << mySquare.compute_area()
              << std::endl;
    Rectangle myRectangle( 2, 4 );
    std::cout << "The area of myRectangle is: "
              << myRectangle.compute_area()
              << std::endl;

#ifdef DEBUG
    /*Square mySquare1(0);
    std::cout << "The area of mySquare is: "
              << mySquare1.compute_area()
              << std::endl;
              */
    /*Rectangle myRectangle1( 0, 4 );
    std::cout << "The area of myRectangle is: "
              << myRectangle1.compute_area()
              << std::endl;
              */
    Rectangle myRectangle2( 1, 0 );
    std::cout << "The area of myRectangle is: "
              << myRectangle2.compute_area()
              << std::endl;
    //This isnt in spec, but I wanted to try it
    //validating if a string is a digit is easier than
    //validating if a double is a digit
    /*Square mySquare2('a');
    std::cout << "The area of mySquare is: "
              << mySquare2.compute_area()
              << std::endl;
              */
#endif

    return 0;
}
