#include "Tokenizer.h"

Tokenizer::Tokenizer()
{
    tokens = 0;
    nWords = nPuncs = 0;
}

Tokenizer::Tokenizer(string i_sentence){
    string text = "";
    unsigned int n;
    char c;
    tokens = 0;
    sentence = i_sentence;
    Punctuation punc;
    Word word;

    nWords = nPuncs = 0;

    for(n = 0; n<i_sentence.length(); n++){
        c = i_sentence.at(n);
        if(isalpha(c)){
            text += c;
        }
        else if(ispunct(c)){
            punc.setCharacter(c);
            punc.setPosition(tokens);
            punctuation.push_back(punc);
            nPuncs++;
            tokens++;
        }
        else if(isspace(c)){
            words.push_back(text);
            wordpos.push_back(tokens);
            text = "";
            nWords++;
            tokens++;
        }
    }
}

string Tokenizer::getSentence(void){
    return sentence;
}

string Tokenizer::getWord(unsigned int n){
    if(n>nWords){
        cout << "Error: getWord index out of range";
        return string("");
    }
    return words[n];
}

unsigned int Tokenizer::getWordPosition(unsigned int n){
    if(n>nWords){
        cout << "Error: getWordPosition index out of range";
        return 0;
    }
    return wordpos[n];
}

Punctuation Tokenizer::getPunctuation(unsigned int n){
    if(n>nPuncs){
        cout << "Error: getPunctuation index out of range";
        return Punctuation();
    }
    return punctuation[n];
}

Tokenizer::~Tokenizer()
{
    //dtor
}
