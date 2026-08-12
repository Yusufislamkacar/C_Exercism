#include "luhn.h"

bool luhn(const char *num){

    if(!is_valid(num)) return 0;
    const char *first_char = num;
    int last_number = find_last_number(num);
    num += last_number;
    int sum_of_digit = 0;
    bool double_digit = false;
    while (num >= first_char)
    {
        if(*num == ' ') {
            num--;
            continue;
        }
        if(double_digit == 0) {
            sum_of_digit += (*num - '0');
            num--;
            double_digit = 1;
            continue;
        }
        if((*num - '0')* 2 > 9) sum_of_digit += (*num - '0') * 2 -9;
        else sum_of_digit += (*num - '0')*2;
        num--;
        double_digit = 0;
    }

    return sum_of_digit % 10 ? 0:1;
}

bool is_valid(const char *num){
    int count;
    for(count = 0; *num != '\0'; num++){
        if(*num < 58 && *num > 47){
            count++;
        }
        else if (*num != 32)
        {
            return 0;
        }
    }

    return count > 1;
}
int find_last_number(const char *num){
    int count;
    for(count = 0; *num != '\0'; num++){
        count++;
    }
    while(*(--num) == ' ') {
        count--;
    }
    return count-1;
}