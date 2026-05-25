#include "pangram.h"
#define ALPHABET_LEN 26

char lowercase_converter(char upper);

bool is_pangram(const char *sentence){
    if (sentence == NULL) return false;
    bool letters_seen[ALPHABET_LEN] = {false};

    int unique_count = 0;
    for (size_t i = 0; sentence[i] != '\0'; i++){
        char current_char = sentence[i];

        if (current_char >= 'A' && current_char <= 'Z') current_char = lowercase_converter(sentence[i]);

        if(current_char >= 'a' && current_char <= 'z'){
            int index = current_char - 97;
            if(letters_seen[index] == 0){
                letters_seen[index] = 1;
                unique_count++;
            }
        }
    }

    return unique_count == ALPHABET_LEN;
}

char lowercase_converter(char upper){
    return upper+32;
}