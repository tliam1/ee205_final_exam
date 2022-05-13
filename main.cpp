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
    Square mySquare1(0);
    std::cout << "The area of mySquare is: "
              << mySquare1.compute_area()
              << std::endl;
#endif

    return 0;
}
