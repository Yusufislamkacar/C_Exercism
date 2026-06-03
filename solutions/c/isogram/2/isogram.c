#include "isogram.h"
#include <stdio.h>

bool is_isogram(const char phrase[]){
    if (phrase == NULL) return false;

    unsigned int bitmask = 0;

    for (; *phrase; phrase++) {
        unsigned char x = (*phrase | 32) - 'a';
        if (x > 25) {
            continue;
        }

        if ((bitmask & (1U << x)) != 0) {
            return false;
        }

        bitmask |= (1U << x);
    }

    return true;
}

