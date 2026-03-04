#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>

char *to_rna(const char *dna){
    /* Allocate a buffer the same length as the input string plus
       one byte for the terminating null character.  We use strlen(dna)
       instead of the uninitialised pointer that was previously passed
       to malloc. */
    size_t len = strlen(dna);
    char *rna = malloc(len + 1);
    if (!rna) {
        /* Allocation failure; return NULL to let the caller handle it */
        return NULL;
    }

    for (size_t i = 0; i < len; i++) {
        switch (dna[i]) {
            case 'G':
                rna[i] = 'C';
                break;
            case 'C':
                rna[i] = 'G';
                break;
            case 'T':
                rna[i] = 'A';
                break;
            case 'A':
                rna[i] = 'U';
                break;
            default:
                /* If an invalid character is encountered we simply copy it
                   through.  The tests never trigger this branch, but it avoids
                   undefined behaviour in case the function is reused elsewhere. */
                rna[i] = dna[i];
                break;
        }
    }

    rna[len] = '\0';
    return rna;
}