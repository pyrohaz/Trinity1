#include <iostream>
#include "Tokenizer.h"

using namespace std;

int main()
{
    Tokenizer tok("Hello, here is a sentence");

    cout << tok.getWord(1);
    return 0;
}
