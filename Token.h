#ifndef _TOKEN_H
#define _TOKEN_H

class Token {
    public:
        Token(int t) { tag = t; }
        virtual ~Token() {}
    public:
        int tag;
};

#endif
