#include <iostream>

int stringLength(char* string);

void copyString(char* src, char* dest);


int main(void){

    char string[] = "Hello";
    char string2[] = "Bye";

    std::cout << stringLength(string) << std::endl;
    std::cout << string << std::endl;

    copyString(string, string2);

    std::cout << string << std::endl;
    std::cout << *string2 << std::endl;


    return EXIT_SUCCESS;
}

int stringLength(char* string){
    int i = 0;

    while(string[i]){
        i++;
    }

    return i;
}

void copyString(char* src, char* dest){
    for(int i = 0; i < stringLength(src); i++){
        dest[i] = src[i];
    }
}