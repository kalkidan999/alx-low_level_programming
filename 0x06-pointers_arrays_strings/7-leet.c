#include "holberton.h"
/**
 * leet - convert string

 * @s: string to convert 
 * Return: success
 */
char *leet(char *s)
{
	int i;
  char char_set[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	*char_set = '4';
	*(char_set + 26) = '4';
	*(char_set + 4) = '3';
	*(char_set + 30) = '3';
	*(char_set + 14) = '0';
	*(char_set + 40) = '0';
	*(char_set + 19) = '7';
	*(char_set + 45) = '7';
	*(char_set + 12) = '1';
	*(char_set + 37) = '0';
	while (s[i] != '\0')
	{
		
		i++;
	}
	return (s);
}
