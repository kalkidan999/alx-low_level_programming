#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 * @*s: integer1
 * Return: Always 0.
 */
void print_rev(char *s)
{
char revstr[50];
char *rvptr = revstr;
int i=-1;
while (i >= 0)
{
s--;
*rvptr = *s;
rvptr++;
--i;
}
*rvptr='\0';
_putchar('revstr');
}
