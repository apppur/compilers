#ifndef _NUM_H
#define _NUM_H
#include "Token.h"
#include "Constant.h"

class Num : public Token {
    public:
        Num(int v) : Token(NUM) { value = v; }
        //Num(int v) { Token::Token(NUM); value = v; }
        virtual ~Num() {}
    public:
        int value;
};

#endif
