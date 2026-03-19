/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

include <iostream>
#include <cmath>
#include <iomanip>

struct Point {
    double x;
    double y;
};

int main() {
    Point p;
    std::cout << "Enter x: ";
    std::cin >> p.x;
    std::cout << "Enter y: ";
    std::cin >> p.y;

    double distance = std::sqrt(p.x * p.x + p.y * p.y);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Distance from origin: " << distance << std::endl;

    return 0;
}