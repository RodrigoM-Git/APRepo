#include <iostream>

int stringLength(char* string);


int main(void){

    char string[] = "Hello";

    std::cout << stringLength(string) << std::endl;


    return EXIT_SUCCESS;
}

int stringLength(char* string){
    int i = 0;

    while(string[i]){
        i++;
    }

    return i;
}