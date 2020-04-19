#include "Card.h"

Card::Card(int colour, int number){
    this->colour = colour;
    this->number = number;
}

Card::~Card(){

}

int Card::getColour(){
    return colour;
}

int Card::getNumber(){
    return number;
}

std::string Card::colourAsString(){
    std::string colourString = "";
    if(colour == 1){
        colourString = "Red";
    }else if(colour == 2){
        colourString = "Orange";
    }else if(colour == 3){
        colourString = "Yellow";
    }else if (colour == 4){
        colourString = "Green";
    }else if (colour == 5){
        colourString = "Blue";
    }else if (colour == 6){
        colourString = "Indigo";
    }else if (colour == 7){
        colourString = "Violet";
    }

    return colourString;
}

std::string Card::getRule(){
    std::string rule = "";
     if(colour == 1){
        rule = "Highest Card Wins";
    }else if(colour == 2){
        rule = "Most of One Number Wins";
    }else if(colour == 3){
        rule = "Most of One Color Wins";
    }else if (colour == 4){
        rule = "Most Even Cards Wins";
    }else if (colour == 5){
        rule = "Most Different Colors Wins";
    }else if (colour == 6){
        rule = "Most Cards in a Row Wins";
    }else if (colour == 7){
        rule = "Most Cards Below 4 Wins";
    }

    return rule;
}