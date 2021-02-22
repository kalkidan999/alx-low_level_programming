#include "holberton.h"
/**
* print_chessboard -print character in a string
*
*@a: print char
*Return: number of characters
*/
void print_chessboard(char (*a)[8])
{
unsigned int i;
unsigned int j;
for (i = 0; i <= 8; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
_put char(*(a + j) + '0');
}
}
}
