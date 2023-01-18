#include <stddef.h>

#ifndef MAIN_HEADER
#define MAIN_HEADER

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
