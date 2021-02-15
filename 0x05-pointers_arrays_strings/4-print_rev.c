#include "holberton.h"
#include <string.h>
/**
 * print_rev - check the code for Holberton School students.
 * @*s: integer1
 * Return: Always 0.
 */
void print_rev(char *s)
{
char *rvptr;
char temp;
int i = -1;
while (i >= 0)
{
s--;
*rvptr = *s;
rvptr++;
--i;
temp = *rvptr
}
_putchar(temp);
_putchar('\n');
}
