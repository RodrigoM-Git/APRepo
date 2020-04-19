#include <iostream>
#include <string>
#include <math.h>


int main(void){
    double areaCalc(double radius);
    double radius;
    std::cout << "Please enter a radius for a circle: " << std::endl;
    std::cin >> radius;

    std::cout << "The area of the circle of radius " << radius << " is: " << areaCalc(radius) << std::endl;

    return EXIT_SUCCESS;
}

double areaCalc(double radius){
    return (M_PI * pow(radius,2.0));
}