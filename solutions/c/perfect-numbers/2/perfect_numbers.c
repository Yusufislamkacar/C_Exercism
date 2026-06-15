#include "perfect_numbers.h"
#include <math.h>

kind classify_number(int number){
    if(number <= 0) return -1;
    int sumOfTheFactor = 1, rootOfNumber = (int)sqrt(number);

    for(int i = 2; i <= rootOfNumber; i++)
        if(number % i == 0)
            sumOfTheFactor += i + number / i;
    if (rootOfNumber * rootOfNumber == number)
        sumOfTheFactor -= rootOfNumber;

    return number > sumOfTheFactor ? 3 : number == sumOfTheFactor ? 1 : 2;
}