#include "hamming.h"


int compute(const char *lhs, const char *rhs){

    int c=0;

    for (; lhs[c] !='\0' && rhs[c] != '\0'; c++){}

    if (lhs[c]!=rhs[c]) return -1;

    c=0;
    for (int i = 0; lhs[i] != '\0'; i++)
    {
        if (lhs[i] != rhs[i])
        {
            c++;
        }
          
    }
    return c;

}