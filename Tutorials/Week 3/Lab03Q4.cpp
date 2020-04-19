#include <iostream>
#include <string>

class Card {
    public:
        Card(int color, int number);
        int getColor();
        int getNumber();
        std::string getColorString();
        std::string getRule();
    private:
        int color;
        int number;
        std::string colorString;
        std::string rule;
};

Card::Card(int color, int number){
    this->color = color;
    this->number = number;
}

int Card::getColor(){
    return color;
}

int Card::getNumber(){
    return number;
}

std::string Card::getColorString(){
    if(color == 1){
        colorString = "Red";
    }else if(color == 2){
        colorString = "Orange";
    }else if(color == 3){
        colorString = "Yellow";
    }else if (color == 4){
        colorString = "Green";
    }else if (color == 5){
        colorString = "Blue";
    }else if (color == 6){
        colorString = "Indigo";
    }else if (color == 7){
        colorString = "Violet";
    }

    return colorString;
}

std::string Card::getRule(){
     if(color == 1){
        rule = "Highest Card Wins";
    }else if(color == 2){
        rule = "Most of One Number Wins";
    }else if(color == 3){
        rule = "Most of One Color Wins";
    }else if (color == 4){
        rule = "Most Even Cards Wins";
    }else if (color == 5){
        rule = "Most Different Colors Wins";
    }else if (color == 6){
        rule = "Most Cards in a Row Wins";
    }else if (color == 7){
        rule = "Most Cards Below 4 Wins";
    }

    return rule;
}





int main(void){

    Card red7(1, 7);

    std::cout << red7.getNumber() << std::endl;
    std::cout << red7.getColor() << std::endl;
    std::cout << red7.getColorString() << std::endl;
    std::cout << red7.getRule() << std::endl;


    return EXIT_SUCCESS;
}

