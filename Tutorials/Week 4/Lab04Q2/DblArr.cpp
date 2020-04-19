#include <iostream>

typedef double DblArr[5];

int main(void){
    DblArr array;
    for(int i = 0; i < 5; i++){
        array[i] = i;
    }

    for(int i = 0; i < 5; i++){
        std::cout << array[i] << std::endl;
    }

    //No need to deallocate as program stack does it already

    return EXIT_SUCCESS;

}