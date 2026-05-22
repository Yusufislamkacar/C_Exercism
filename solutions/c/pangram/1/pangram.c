#include "pangram.h"

bool is_pangram(const char *sentence){
    if (sentence == NULL) return 0;
    if (sentence[0] == '\0') return 0;

    int letters_seen[26] = {0};
    int unique_count = 0;
    for (size_t i = 0; sentence[i] != '\0'; i++)
    {
        char current_char = sentence[i];

        if (current_char >= 65 && current_char <= 90)
        {
            current_char = lowercase_converter(sentence[i]);
        }
        
        if(current_char >=97 && current_char <= 122){
            int index = current_char - 97;
            if(letters_seen[index] == 0) {
                letters_seen[index] = 1;
                unique_count++;
            }
        }
        
    }
    if(unique_count == 26) return 1;
    return 0;

}  
char lowercase_converter(char upper){
    return upper+32;
}