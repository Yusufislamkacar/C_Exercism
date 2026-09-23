#include "sieve.h"

uint32_t sieve(uint32_t limit, uint32_t *primes, size_t max_primes){
    if(limit < 2) return 0;
    bool *is_prime = calloc(limit + 1, sizeof(bool));
    if (!is_prime) {
        fprintf(stderr, "System error %d in sieve (%s:%d): %s", errno, __FILE__, __LINE__, strerror(errno));
        exit(EXIT_FAILURE);
    }

    for(uint32_t p = 2; p*p <= limit; p++){
        if (is_prime[p]) continue;
        for(uint32_t i = p * p; i <= limit; i += p){
            is_prime[i] = true;
        }
    }
    size_t count = 0;

    for(uint32_t i = 2;i <= limit && count < max_primes; i++){
        if(is_prime[i] == false) {
            *primes++ = i;
            count++;
        }
    }
    free(is_prime);
    return (uint32_t)count;
}