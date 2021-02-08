#include <stdio.h>
#include <holberton.h>
/**
 * main - print holberton
 * Return: 1 if the number is positive. 0 otherwise
 */
int _putchar(char c)
{
return (write(1, &c, 10));
}
int main(void)
{
char hol;
_putchar("Holberton\n");
return (0);
}
