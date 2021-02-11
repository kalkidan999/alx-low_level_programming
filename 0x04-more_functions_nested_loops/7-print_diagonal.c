#include "holberton.h"
/**
* print_diagonal - check the code for Holberton School students.
* @n: integer
* Return: Always 0.
*/
void print_diagonal(int n)
{
int i = 0;
int j = 0;
for(i = n; i < n; i++)
{
for(j = n; j < n; j++)
{
if(n > 0)
_putchar('\\');
_putchar(' ');
}
_putchar('\n');
}
return;
}
