#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */

int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
i++;
return (i);
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
unsigned int a, b, i, j;
char *p;
if (!s1)
s1 = "";
else
a = _strlen(s1);
if (!s2)
s2 = "";
else
b = _strlen(s2);
if (n > b)
n = b;
p = malloc(a + n + 1);
if (p == NULL)
return (NULL);
for (i = 0, j = 0; s1[i] != '\0'; i++, j++)
p[j] = s1[i];
for (i = 0; i != n; i++, j++)
p[j] = s2[i];
p[j] = '\0';
return (p);
}
