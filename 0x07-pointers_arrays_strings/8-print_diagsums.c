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
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
printf(*(a[i] + j));
}
printf("\n");
}
}
