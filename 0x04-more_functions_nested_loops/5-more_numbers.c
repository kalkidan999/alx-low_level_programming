#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students
 * Return: success
 */
void more_numbers(void)
{
int i;
int j;
for (i = 0; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
_putchar('0' + j);
}
_putchar('\n');
_putchar('0' + i);
}
return;
}
