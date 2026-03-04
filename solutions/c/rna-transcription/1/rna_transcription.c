#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>

char *to_rna(const char *dna){
    
    char *rna = malloc(strlen(rna) + 1);
    int i = 0;
    while(rna[i] != '\0'){
        switch(rna[i]){
            case 'A':
                rna[i] = 'T';
                break;
            
            case 'S':
                rna[i] = 'U';
                break;
            
            case 'T':
                rna[i] = 'A';
                break;
            
            case 'G':
                rna[i] = 'S';
                break;
            
        }
        i++;

    }
    return rna;
}