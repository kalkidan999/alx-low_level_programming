#include "holberton.h"
/**
* print_diagonal - check the code for Holberton School students.
* @n: integer
* Return: Always 0.
*/
void print_diagonal(int n)
{
int i, j, z;
for (i = 0; i < n; i++)
{
_putchar(' ');
}
for(j = 0; j <= n; j++)
{
_putchar('\\');
_putchar('\n');
}
return;
}        
