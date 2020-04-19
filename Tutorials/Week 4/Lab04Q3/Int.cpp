#include <iostream>

typedef int Integer;


int main(void){
    Integer* i = new Integer(100);
    
    std::cout << *i << std::endl;

    delete i;

    return EXIT_SUCCESS;
}
