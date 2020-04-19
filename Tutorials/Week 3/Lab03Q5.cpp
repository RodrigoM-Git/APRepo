#include <iostream>

void swap(int* a, int*b);

int main(void){

    int a = 1;
    int b = 2;

    int* ptra = &a;
    int* ptrb = &b;

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    swap(ptra, ptrb);

    std::cout << a << std::endl;
    std::cout << b << std::endl;


    return EXIT_SUCCESS;
}

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp; 
}