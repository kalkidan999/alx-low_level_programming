#include "holberton.h"
/**
 * charac - determines if character is a deliminater character
 * @c: char to check on
 * Return: 1 or 0
 */
int charac(char c)
{
if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' || c == '.' || c == '!' || c == '?' || c == '"' ||
    c == '(' || c == ')' || c == '{' || c == '}')
return (1);
return (0);
}
/**
 * cap_string - capitalizes chars 
 * @s: string 
 * Return: return s
 */
char *cap_string(char *s)
{
int i;
i = 0;
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
while (s[i] != '\0')
{
if (charac(s[i]) == 1 && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
{
s[i + 1] -= 32;
i++;
}
else
i++;
}
return (s);
}
