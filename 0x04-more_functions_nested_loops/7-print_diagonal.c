#include "holberton.h"
/**
* print_diagonal - check the code for Holberton School students.
* @n: integer
* Return: Always 0.
*/
void print_diagonal(int n)
{
int i;
int j;
if(j < 0)
_putchar('\n');
for (n = 0; n > 0; n--)
{
for(i = 0; i <= j - n; i++)
{
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
return;
}        
