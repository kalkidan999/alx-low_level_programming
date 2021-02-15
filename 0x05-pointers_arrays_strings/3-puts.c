#include "holberton.h"
/**
 * _puts - check the code for Holberton School students.
 * @*str: integer1
 * Return: Always 0.
 */
void _puts(char *str)
{
char chrString[];
chrString = *str;
while (*str != '\0')
{
*chrString++ = *str++;
}
_putchar('chrString');
_putchar('\0');
return (0);
}
