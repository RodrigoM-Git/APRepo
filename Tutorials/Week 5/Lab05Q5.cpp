#include "Lab05Q5.h"

Card::Card(Colour colour, int number){
    this->colour = colour;
    this->number = number;
}

Card::Card(Card& other){
    this->colour = other.colour;
    this->number = other.number;
}

Card::~Card(){
    
}

