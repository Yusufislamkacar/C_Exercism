#include "raindrops.h"
#include <stdio.h>
#include <string.h>

void convert(char result[], int drops){
    if (drops % 3 == 0){
        if (drops % 5 == 0){
            if (drops % 7 == 0 ) {
                strcpy(result, "PlingPlangPlong");
            return;
            }
            strcpy(result, "PlingPlang");
            return;
        }
        if (drops % 7 == 0) {
        strcpy(result, "PlingPlong");
        return;            
        }
        strcpy(result, "Pling");
        return;
    }
    if (drops % 5 == 0){
            if (drops % 7 == 0 ) {
                strcpy(result, "PlangPlong");
                return;
            };
            strcpy(result, "Plang");
            return;
        }

    if (drops % 7 == 0) {
        strcpy(result, "Plong");
        return;
    }
    sprintf(result, "%d", drops);  
    
}