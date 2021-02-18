#include "holberton.h"
/**
* cap_string -  str
*
*@s: charactee
*Return: success
*/
char *cap_string(char *s)
{
int c = 0;
while (s[c] != '\0')
{
if (s[c] >= 'a' && s[c] <= 'z')
{
s[c] = s[c] - 32;
}
c++;
}
return (s);
}
