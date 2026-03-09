#include "raindrops.h"
#include <stdio.h>
#include <string.h>

void convert(char result[], int drops){
    sprintf(result,"%s%s%s", drops % 3 == 0 ? "Pling" : "", drops % 5 == 0 ? "Plang" : "", drops % 7 == 0 ? "Plong" : "");

    if (strlen(result) == 0) sprintf(result, "%d", drops);
}