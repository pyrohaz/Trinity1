#ifndef TOKENIZER_H
#define TOKENIZER_H

#include <string>
#include <sstream>
#include <iostream>
#include <vector>

#include "Word.h"
#include "Punctuation.h"

using namespace std;

class Punctuation;

class Tokenizer
{
    public:
        Tokenizer();
        Tokenizer(string i_sentence);
        ~Tokenizer();

        string getSentence(void);

        string getWord(unsigned int n);
        unsigned int getWordPosition(unsigned int n);

        Punctuation getPunctuation(unsigned int n);
    private:
        string sentence;
        unsigned int tokens, nWords, nPuncs;
        vector<string> words;
        vector<unsigned int> wordpos;
        vector<Punctuation> punctuation;
};

#endif // TOKENIZER_H
