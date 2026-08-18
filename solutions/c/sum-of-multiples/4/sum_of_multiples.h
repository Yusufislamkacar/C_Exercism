#ifndef SUM_OF_MULTIPLES_H
#define SUM_OF_MULTIPLES_H

#include <stdbool.h>
#include <stddef.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int sum(const unsigned int *factors, const size_t number_of_factors,
                 const unsigned int limit);

#endif
