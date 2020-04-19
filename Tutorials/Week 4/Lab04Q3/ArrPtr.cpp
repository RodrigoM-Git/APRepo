#include <iostream>

typedef float* FloatArr[3];

int main(void){
    FloatArr* ArrPtr = new FloatArr[3];

    float* aPtr = new float(2.1);
    float* bPtr = new float(2.2);
    float* cPtr = new float(2.3);

    *ArrPtr[0] = aPtr;
    *ArrPtr[1] = bPtr;
    *ArrPtr[2] = cPtr;

    for(int i = 0; i < 3; i++){
        std::cout << **ArrPtr[i] << std::endl;
    }

    delete[] ArrPtr;
    delete aPtr;
    delete bPtr;
    delete cPtr;

    return EXIT_SUCCESS;
}