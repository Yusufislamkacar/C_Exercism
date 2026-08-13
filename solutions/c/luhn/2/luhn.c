#include "luhn.h"

bool luhn(const char *num){

    const char* c = num;
    for (; *c; c++);

    int sum_of_digit = 0;
    int num_digits = 0;
    bool double_digit = false;
    for (--c; c >= num; c--)
    {
        
        if(*c == ' ') continue;
   
        unsigned char d = *c - '0';
        if(d > 9) return false;

        if(double_digit == 0) {
            sum_of_digit += d;
            double_digit = 1;
            num_digits++;
            continue;

        }
        if(d* 2 > 9) sum_of_digit += d * 2 -9;
        else sum_of_digit += d*2;
        double_digit = 0;
        num_digits++;
    }
    if(num_digits < 2) return false;
    return sum_of_digit % 10 ? false:true;
}

