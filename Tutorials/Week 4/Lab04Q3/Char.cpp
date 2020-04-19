#include <iostream>

typedef char Character;

int main(void){
    
    Character* c = new Character('C');

    std::cout << *c << std::endl;

    delete c;

    return EXIT_SUCCESS;
}