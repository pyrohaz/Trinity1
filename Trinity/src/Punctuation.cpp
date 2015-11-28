#include "Punctuation.h"

Punctuation::Punctuation()
{
    //ctor
}

Punctuation::~Punctuation()
{
    //dtor
}

void Punctuation::setCharacter(char c){
    character = c;
}

void Punctuation::setPosition(unsigned int n){
    position = n;
}

char Punctuation::getCharacter(void){
    return character;
}


unsigned int Punctuation::getPosition(void){
    return position;
}
