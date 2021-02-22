#include "holberton.h"
/**
* _strspn -search n display length
*
*@s: stores the input
*@accept: source
*Return: comp
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; i < s[i] !='\0'; i++)
{
for (j = 0; i < accept[j] !='\0'; j++)
{
if (*s == *accept)
return accept[j];
}
}
}
