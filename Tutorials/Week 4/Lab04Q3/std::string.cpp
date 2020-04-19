#include <iostream>
#include <string>

typedef std::string String;

int main(void){
    String* string = new String("Greetings");

    std::cout << *string << std::endl;

    delete string;

    return EXIT_SUCCESS;
}