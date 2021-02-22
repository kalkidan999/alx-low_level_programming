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
int i, sum;
for (i = 0; i < size; i++)
{
sum += a[i][i];
}
printf("\n");
}
}
