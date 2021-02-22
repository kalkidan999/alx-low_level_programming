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
int i, j, sum;
for (j = 0; j < size; ++j)
{
for (i = 0; i < size; ++i)
{
if (i == j)
sum = sum + a[i][j];
}
printf("\n");
}
}
