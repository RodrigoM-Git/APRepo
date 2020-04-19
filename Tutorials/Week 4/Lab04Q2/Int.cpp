#include <iostream>

typedef int Integer;


int main(void){
    Integer i;
    i = 10;

    std::cout << i << std::endl;

    //No need to deallocate as program stack does it already

    return EXIT_SUCCESS;
}
