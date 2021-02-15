#include "holberton.h"
/**
 * _puts - check the code for Holberton School students.
 * @*str: integer1
 * Return: Always 0.
 */
void _puts(char *str)
{
char chrString[];
char chrNewStr[];
char *chrNewPtr;
str = chrString;
chrNewPtr = chrNewStr;
while (*str != '\0')
{
*chrNewPtr++ = *str++; // copies character by character to new pointer
}
_putchar(chrNewStr);
*chrNewPtr = '\0';
return (0);
}
