#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recursive_binary_search(int *array, size_t start, size_t end, int value);
void print_array(int *array, size_t start, size_t end);

#endif /* SEARCH_ALGOS_H */
