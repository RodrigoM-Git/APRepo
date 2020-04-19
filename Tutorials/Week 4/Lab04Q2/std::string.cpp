#include <iostream>
#include <string>

typedef std::string String;

int main(void){
    String string;
    string = "Hello";

    std::cout << string << std::endl;

    //No need to deallocate as program stack does it already

    return EXIT_SUCCESS;
}