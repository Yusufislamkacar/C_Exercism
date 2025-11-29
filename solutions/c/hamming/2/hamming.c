#include "hamming.h"


int compute(const char *lhs, const char *rhs){

    if(!lhs || !rhs) return -1;//Null pointer test

    int distance = 0;
    for (; *lhs != '\0' && *rhs != '\0'; lhs++, rhs++)
    {
        if (*lhs != *rhs)
        {
            distance++;
        }
          
    }
    return (*lhs != '\0' || *rhs != '\0') ? -1 : distance;

}