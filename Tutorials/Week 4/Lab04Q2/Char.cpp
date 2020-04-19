#include <iostream>

typedef char Character;

int main(void){
    
    Character c;
    c = 'R';

    std::cout << c << std::endl;

    //No need to deallocate as program stack does it already

    return EXIT_SUCCESS;
}