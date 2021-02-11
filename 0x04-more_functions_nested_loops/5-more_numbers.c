#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students
 * Return: success
 */
void more_numbers(void)
{
int i = 0;
int j;
while (i <= 14)
{
for (j = 0; j <= 10; j++)
{
_putchar('0' + j);
}
_putchar('\n');
}
return;
}
