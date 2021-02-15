#include "holberton.h"
#include <stdio.h>
/**
* print_array -change value using the pointer address
*
*@str: stores the input
*@n: integer
*/
void print_array(int *a, int n)
{
int i;
for(i=0;i<n;i++)
{
printf("% ", a[i]);
if (i != (n - 1)
{
printf(", ");
}
} 
printf("\n");
}
