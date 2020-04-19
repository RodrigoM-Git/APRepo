#include <iostream>
#include <string>

bool getCharacter(char* c);


int main(void){

    std::cout << "Please enter a single character: " << std::endl;

    char x;

    char* xptr = &x;

    if(getCharacter(xptr)){
         std::cout << "The character you entered is: " << x << std::endl;
    }else{
         std::cout << "Error: No character entered" << x << std::endl;
    }

   

    return EXIT_SUCCESS;
}


bool getCharacter(char* c){
    std::cin >> *c;

    if(std::cin.eof()){
        return false;
    }

    return true;
}

