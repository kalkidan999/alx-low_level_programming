#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *@argc: character count
 *@argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
int a = *argv[1];
int b = *argv[1++];
int count = a * b;
if (argc > 0)
{
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[count]);
}
}
return (0);
}
