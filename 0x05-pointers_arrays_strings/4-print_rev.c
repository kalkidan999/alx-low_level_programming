#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 * @*s: integer1
 * Return: Always 0.
 */
void print_rev(char *s)
{
char temp;
int length = 0;
while (*s != '\0')
{
temp = *s;
_putchar(temp);
length++;
s--;
}
_putchar('\n');
}
