#include "holberton.h"

/**
 * delim - determines if character is a deliminater character
 *
 * @c: char to check on
 * Return: 1 if delim, 0 if not
 */
int delim(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' ||
	    c == '.' || c == '!' || c == '?' || c == '"' || c == '(' ||
	    c == ')' || c == '{' || c == '}')
		return (1);
	return (0);
}

/**
 * cap_string - capitalizes chars after given deliminators
 *
 *
 *
 * @s: string to uppercase
 * Return: returns modified string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
	while (s[i] != '\0')
	{
		if (delim(s[i]) == 1 && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
			i++;
		}
		else
			i++;
	}
	return (s);
}
