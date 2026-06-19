#include "perfect_numbers.h"


kind classify_number(int number){
    if(number <= 0) return -1;
    int sumOfTheFactor = 0;

    for(int i = 1; i <= number / 2; i++){
        if(number % i == 0) sumOfTheFactor +=i;
    }

    return number > sumOfTheFactor ? 3 : number == sumOfTheFactor ? 1 : 2;
}