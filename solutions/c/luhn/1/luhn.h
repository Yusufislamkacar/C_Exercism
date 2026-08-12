#ifndef LUHN_H
#define LUHN_H

#include <stdbool.h>

bool luhn(const char *num);
bool is_valid(const char *num);
int find_last_number(const char *num);
#endif
