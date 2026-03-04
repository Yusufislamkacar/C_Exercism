#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>

char *to_rna(const char *dna){

    size_t len = strlen(dna);

    char *rna = malloc(len + 1);
    for(size_t i = 0; i < len; i++){
        switch(dna[i]){
            case 'A':
                rna[i] = 'U';
                break;
            
            case 'C':
                rna[i] = 'G';
                break;
            
            case 'T':
                rna[i] = 'A';
                break;
            
            case 'G':
                rna[i] = 'C';
                break;
            
        }
    }
    rna[len] = '\0';
    return rna;
}