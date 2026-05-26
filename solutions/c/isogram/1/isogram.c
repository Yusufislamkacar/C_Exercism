#include "isogram.h"
#include <stdio.h>

char lowercase_converter(char upper);

bool is_isogram(const char phrase[]){
    if (phrase == NULL) return false;
    char temp_char0;
    char temp_char1;
    for (int i = 0; phrase[i] != '\0'; i++){
        temp_char0 = phrase[i];
        if (temp_char0 >= 'A' && temp_char0 <= 'Z') temp_char0 = lowercase_converter(phrase[i]);

        for (int n = i+1; phrase[n]; n++)
        {
            temp_char1 = phrase[n];
            if (temp_char1 >= 'A' && temp_char1 <= 'Z') temp_char1 = lowercase_converter(phrase[n]);
            if(temp_char0 == temp_char1 && temp_char0 >= 'a' && temp_char0 <= 'z') return false;
        }
    }
    return true;
}

char lowercase_converter(char upper){
    return upper + 32;
}