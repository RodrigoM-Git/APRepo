#include <iostream>
#include <string>

int main(void){

    std::cout << "Please enter a card number: " << std::endl;
    int selection;
    std::cin >> selection;
    std::string color = "";
    int number;
    bool valid = true;

    number = (selection % 7) + 1;

    if(selection >= 0 && selection <= 6){
        color += "Red ";
    }else if(selection >= 7 && selection <= 13){
        color += "Orange ";
    }else if(selection >= 14 && selection <= 20){
        color += "Yellow ";
    }else if(selection >= 21 && selection <= 27){
        color += "Green ";
    }else if(selection >= 28 && selection <= 34){
        color += "Blue ";
    }else if(selection >= 35 && selection <= 41){
        color += "Indigo ";
    }else if(selection >= 42 && selection <= 48){
        color += "Violet ";
    }else{ valid = false;}

    if(valid){
        std::cout << "The card you have selected is: " << color << number << std::endl;
    }else{
        std::cout << "ERROR: Invalid card number entered" << std::endl;
    }

    return EXIT_SUCCESS;
}