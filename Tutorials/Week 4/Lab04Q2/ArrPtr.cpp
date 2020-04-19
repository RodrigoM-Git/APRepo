#include <iostream>

typedef float* FloatArr[3];

int main(void){
    FloatArr ArrPtr;

    float a = 1.1;
    float b = 1.2;
    float c = 1.3;

    float* aPtr = &a;
    float* bPtr = &b;
    float* cPtr = &c;

    ArrPtr[0] = aPtr;
    ArrPtr[1] = bPtr;
    ArrPtr[2] = cPtr;

    for(int i = 0; i < 3; i++){
        std::cout << *ArrPtr[i] << std::endl; 
    }

    delete aPtr;
    delete bPtr;
    delete cPtr;

    return EXIT_SUCCESS;
}