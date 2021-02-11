#include "holberton.h"
/**
 * print_most_numbers - check the code for Holberton School students
 * Return: success
 */
void print_most_numbers(void)
{
int i;
int j;
for (i = 0; i <= 14; i++)
{
for (j = 0; j <= 14; j++)
{
_putchar('0' + j);
}
_putchar('0' + i); 
}
_putchar('\n');
return;
}
