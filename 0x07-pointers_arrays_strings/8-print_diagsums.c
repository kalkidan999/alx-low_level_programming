#include "holberton.h"
#include <stdio.h>
/**
*print_diagsums - print character in a string
*
*@a: print char
*size: sizes
*Return: number of characters
*/
void print_diagsums(int *a, int size)
{
int **b = *a;
int j, sum;
for (j = 0; j < size; ++j)
{
sum = sum + b[j];
}
printf("\n");
}

