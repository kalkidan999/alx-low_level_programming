#include "holberton.h"
/**
* print_chessboard -print character in a string
*
*@a: print char
*Return: number of characters
*/
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[j] + '\0');
}
_putchar('\n');
}
}
