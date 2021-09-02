#ifndef _SEARCH_ALX_
#define _SEARCH_ALX_

/** HEADERS */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/** Prototype */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
#endif
