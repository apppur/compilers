#include "Parser.h"
#include <iostream>
#include <crypt.h>
#include <string.h>

Parser::Parser()
{
    //std::cin >> lookahead;
    //std::cout << lookahead;
    lookahead = 0;
    index = 0;
    memset(source, 0, sizeof(source));
    char exp[] = "9+5-2";
    memcpy(source, exp, strlen(exp)+1);
    lookahead = source[index++];
}

Parser::~Parser()
{
}

void Parser::Expr()
{
    Term();
    while (true)
    {
        if (lookahead == '+')
        {
            Match('+');
            Term();
            std::cout << '+';
        }
        else if (lookahead == '-')
        {
            Match('-');
            Term();
            std::cout << '-';
        }
        else
        {
            return;
        }
    }
}

void Parser::Term()
{
    //std::cout << lookahead << std::endl;
    if (isdigit(lookahead))
    {
        std::cout << lookahead;
        //lookahead = source[index++];
        Match(lookahead);
    }
    else
    {
        std::cout << "not digit";
        std::cerr << " syntax error" << std::endl;
    }
}

void Parser::Match(int t)
{
    if (lookahead == t) /*std::cin >> lookahead*/lookahead = source[index++];
    else std::cerr << "syntax error";
}
