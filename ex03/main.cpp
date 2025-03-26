#include <iostream>
#include "Point.hpp"

int main() {
    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);

    Point inside(1, 1);
    Point outside(6, 6);
    Point onEdge(0, 2); 

    std::cout << "Point (1,1) inside? " << (bsp(a, b, c, inside) ? "Yes" : "No") << std::endl;
    std::cout << "Point (6,6) inside? " << (bsp(a, b, c, outside) ? "Yes" : "No") << std::endl;
    std::cout << "Point (0,2) inside? " << (bsp(a, b, c, onEdge) ? "Yes" : "No") << std::endl;

    return 0;
}
