#include "Hand.h"
#include "Card.cpp"

Hand::Hand(){
    this->numStored = 0;
}

//shallow copy
Hand::Hand(Hand& other){
    this->numStored = other.numStored;

    for(int i = 0; i < numStored; i++){
        cards[i] = other.cards[i];
    }
}

//deep copy
Hand::Hand(Hand& other){
    this->numStored = numStored;

    for(int i = 0; i < numStored; i++){
        cards[i] = new Card(*other.cards[i]);
    }
}

Hand::~Hand(){

}

void Hand::addCard(Card* card){
    cards[numStored] = card;
    numStored++;
}

Card* Hand::getCard(int index){
    return cards[index];
}

