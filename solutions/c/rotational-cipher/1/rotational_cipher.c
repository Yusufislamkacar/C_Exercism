#include "rotational_cipher.h"

char *rotate(const char *text, int shift_key){
    int length = 0;
    for(; text[length] != '\0'; length++){}
    char *result = malloc(length + 1);
    if (result == NULL) return NULL;
    result[length] = '\0';


    for(int i = 0; i < length; i++){
        if(text[i] >= 'a' && text[i] <= 'z'){
            if (text[i] + shift_key > 'z') result[i] = (text[i] + shift_key - 1) % 'z' + 'a';
            else result[i] = text[i] + shift_key; 
        }else if(text[i] >= 'A' && text[i] <= 'Z'){
            if (text[i] + shift_key > 'Z') result[i] = (text[i] + shift_key - 1) % 'Z' + 'A';
            else result[i] = text[i] + shift_key;
        }else {
            result[i] = text[i];
        }
    }
    return result;
}