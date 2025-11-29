#include "binary.h"
#include <string.h>
#include <stdio.h>
int convert(const char *input){
    int i = strlen(input);
int temp = 0;
int totalR = 0;
while (i != 0) {
    i--;
    if((input[i]-'0')==0 || (input[i]-'0'==1)){
    totalR += (input[i]-'0') * (1 << temp);
    temp++;
    }else {return -1;}
}
return totalR;
}
