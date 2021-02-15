#include "holberton.h"
/**
 * _strlen - check string length
 * @*s: string
 * Return: Always 0.
 */
int _strlen(char *s)
{
int count = 0;
int n = s;
while (*n != '\0')
count++;
s++;
return count;
}
