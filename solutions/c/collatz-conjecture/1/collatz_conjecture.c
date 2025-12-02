#include "collatz_conjecture.h"


int steps(int start){
    if (start<1) return ERROR_VALUE;
    
    int stepsCount = 0;

    while (start != 1)
    {
        if (start % 2 == 0)
        {
           start /= 2;
           stepsCount++;
        }
        else {
            start = start*3+1;
            stepsCount++;
        }
    }
     
    return stepsCount;
    
    
}