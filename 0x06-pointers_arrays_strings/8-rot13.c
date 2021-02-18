#include "holberton.h"
/**
*rot13 - change value using
*@s: character
*Return: int
*/
char *rot13(char *s)
{
int i, j;
i = 0;
j = 0;
while (s[i] != '\0')
{
while ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z'))
{
if ((s[j] >= 'N' && s[j] <= 'Z') || (s[j] >= 'n' && s[j] <= 'z'))
s[j] -= 13;
else
s[j] += 13;
j++;
}
i++;
}
return (s);
}
