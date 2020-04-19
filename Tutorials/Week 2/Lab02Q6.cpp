#include <iostream>

int main(void){

    std::cout << "Please enter 10 integers: " << std::endl;
    int numbers[10];
    for(int i = 0; i < 10; i++){
        std::cin >> numbers[i];
    }
    
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum += numbers[i];
    }

    std::cout << "The sum of all numbers entered is: " << sum << std::endl;

    return EXIT_SUCCESS;
}