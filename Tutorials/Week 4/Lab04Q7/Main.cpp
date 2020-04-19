#include "Card.cpp"

void getCard(int* selection, int* ColorNumber, int* number, std::string* color);

int main(void){

    std::cout << "Please enter 5 card numbers: " << std::endl;
    int numbers[5];
    int selection;
    int* selectionPtr = &selection;
    int ColorNumber;
    int* ColorNumberPtr = &ColorNumber;
    for(int i = 0; i < 5; i++){
        std::cin >> numbers[i];
    }
    std::string color = "";
    std::string* colorPtr = &color;
    int number;
    int* numberPtr = &number;

    for(int i = 0; i < 5; i++){
        std::cout << "Card number " << i+1 << " in hand is:" << std::endl;
        *selectionPtr = numbers[i];
        getCard(selectionPtr, ColorNumberPtr, numberPtr, colorPtr);
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}

void getCard(int* selection, int* ColorNumber, int* number, std::string* color){

    bool valid = true;

    *number = (*selection % 7) + 1;

    if(*selection >= 0 && *selection <= 6){
        *color += "Red ";
        *ColorNumber = 1;
    }else if(*selection >= 7 && *selection <= 13){
        *color += "Orange ";
        *ColorNumber = 2;
    }else if(*selection >= 14 && *selection <= 20){
        *color += "Yellow ";
        *ColorNumber = 3;
    }else if(*selection >= 21 && *selection <= 27){
        *color += "Green ";
        *ColorNumber = 4;
    }else if(*selection >= 28 && *selection <= 34){
        *color += "Blue ";
        *ColorNumber = 5;
    }else if(*selection >= 35 && *selection <= 41){
        *color += "Indigo ";
        *ColorNumber = 6;
    }else if(*selection >= 42 && *selection <= 48){
        *color += "Violet ";
        *ColorNumber = 7;
    }else{ valid = false;}

     if(valid){
        Card* card = new Card(*ColorNumber, *number);
        std::cout << "Card Number = " << card->getNumber() << std::endl;
        std::cout << "Card Color = " << card->getColorString() << std::endl;
        std::cout << "Card Rule = " << card->getRule() << std::endl;
    }else{
        std::cout << "ERROR: Invalid card number entered" << std::endl;
    }
    
}