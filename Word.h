#ifndef _WORD_H
#define _WORD_H
#include <string>
#include "Token.h"
#include "Constant.h"

class Word : public Token {
    public:
        Word(int t, std::string s) : Token(t)
        {
            lexeme = s;
        }
        virtual ~Word() {}
    public:
        std::string lexeme;
};

#endif
