#include "sum_of_multiples.h"

unsigned int sum(const unsigned int *factors, const size_t number_of_factors, const unsigned int limit){
    unsigned int sum_of_multiples = 0;
    bool* visited = calloc(limit, sizeof(bool));
    if(!visited) return 999;
    for(size_t i = 0; i < number_of_factors; i++){
        if(factors[i] == 0) continue;

        for (unsigned int multiple = factors[i]; multiple < limit; multiple += factors[i]){
            if (!visited[multiple]) {
            sum_of_multiples += multiple;
            visited[multiple] = true;
            }
        }
    }
    free(visited);
    return sum_of_multiples;
}