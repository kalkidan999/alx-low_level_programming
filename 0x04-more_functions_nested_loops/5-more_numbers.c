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
for (j = 48; j <= 56; j++)
{
_putchar('0' + j);
}
_putchar('\n');
}
return;
}
