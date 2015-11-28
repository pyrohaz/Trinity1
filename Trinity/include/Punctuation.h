#ifndef PUNCTUATION_H
#define PUNCTUATION_H


class Punctuation
{
    public:
        Punctuation();
        ~Punctuation();

        void setCharacter(char c);
        void setPosition(unsigned int n);

        char getCharacter(void);
        unsigned int getPosition(void);
    private:
        char character;
        unsigned int position;
};

#endif // PUNCTUATION_H
