#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 * @*s: integer1
 * Return: Always 0.
 */
void print_rev(char *s)
{
char *revPtr;
char temp;
int length = -1;
while (*s != '\0')
{
temp = *s;
_putchar(temp);
s--;
*revPtr = *s;
revPtr++;
--length;
}
_putchar('\n');
}
