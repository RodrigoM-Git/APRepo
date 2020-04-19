#include <iostream>

void pointerDouble(double* pointer, double change);

void referenceDouble(double& reference, double change);

int main(void){

    //initialise integer 
    int num = 1;

    std::cout << num << std::endl;

    //create pointer to integer
    int* numptr = nullptr;
    numptr = &num;

    std::cout << *numptr << std::endl;

    //directly modify integer
    num = 20;

    std::cout << num << std::endl;

    //use pointer to modify integer
    *numptr = 10;

    std::cout << *numptr << std::endl;

    //initialise double
    double num2 = 2.5;

    std::cout << num2 << std::endl;

    //use function to change double with function
    double* num2ptr = nullptr;
    num2ptr = &num2;

    std::cout << *num2ptr <<std::endl;

    pointerDouble(num2ptr, 3.8);

    std::cout << *num2ptr << std::endl;

    //use reference to change double with function
    double& num2ref = num2;

    std::cout << num2ref << std::endl;

    referenceDouble(num2ref, 4.5);
 
    std::cout << num2ref << std::endl;
    std::cout << num2 << std::endl;

    return EXIT_SUCCESS;
}

//function to change with pointer
void pointerDouble(double* pointer, double change){
    *pointer = change;
}

//function to change with reference
void referenceDouble(double& reference, double change){
    reference = change;
}