#include "holberton.h"
/**
 * leet - to number
 * @s: char params
 * Return: suceess
 */
char *leet(char *s)
{
int i;
int j;
char l[] = "ol_ea__t";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; l[j] != '\0'; j++)
{
if (s[i] == l[j] || s[i] == (l[j] - 32))
{
s[i] = j + '0';
}
}
}
return (s);
}
