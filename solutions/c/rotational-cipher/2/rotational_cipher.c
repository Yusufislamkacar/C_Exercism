#include "rotational_cipher.h"

char *rotate(const char *text, int shift_key){
    int length = 0;
    for(; text[length] != '\0'; length++){}
    char *result = malloc(length + 1);
    if (!result) {
        fprintf(stderr, "System error %d in rotate (%s:%d): %s", errno, __FILE__, __LINE__, strerror(errno));
        exit(EXIT_FAILURE);
    };
    result[length] = '\0';

    char * start = result;
    for(; *text; ++text, ++result){
        if(*text >= 'a' && *text <= 'z'){
            if (*text + shift_key > 'z') *result = (*text + shift_key - 1) % 'z' + 'a';
            else *result = *text + shift_key; 
        }else if(*text >= 'A' && *text <= 'Z'){
            if (*text + shift_key > 'Z') *result = (*text + shift_key - 1) % 'Z' + 'A';
            else *result = *text + shift_key;
        }else {
            *result = *text;
        }
    }
    return start;
}