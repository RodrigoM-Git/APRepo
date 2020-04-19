#include <iostream>

typedef double DblArr[5];

int main(void){
    DblArr* array = new DblArr[5];

    for(int i = 0; i < 5; i++){
        *array[i] = i;
    }

    for(int i = 0; i < 5; i++){
        std::cout << *array[i] << std::endl;
    }

    delete[] array;

    return EXIT_SUCCESS;

}