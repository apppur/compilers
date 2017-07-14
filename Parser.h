#ifndef _PARSER_H
#define _PARSER_H

class Parser {
    public:
        Parser();
        ~Parser();

    public:
        void Expr();
        void Term();
        void Match(int t);
    private:
        char lookahead;
        char source[128];
        int index;
};

#endif
