#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

/**
*string_nconcat - change value using
*@s1: manipulates char1
*@s2: manipulates char2
*@n: manipulates integer
*Return: memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, b;
char *p, *tmp;
if (!s1)
s1 = "";
else
a = _strlen(s1);
if (!s2)
s2 = "";
else
b = _strlen(s2);
while (n < b)
{
p = malloc(a + b + 1);
}
if (!p)
return (0);
tmp = p;
while (*s1)
*tmp++ = *s1++;
while ((*tmp++ = *s2++))
;
return (p);
}
