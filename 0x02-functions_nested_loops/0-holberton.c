#include <stdio.h>
#include <holberton.h>
/**
 * main - print holberton
 * Return: 1 if the number is positive. 0 otherwise
 */
int _putchar()
{
return (write(1, "Holberton\n", 10));
}
int main(void)
{
_putchar();
return (0);
}
