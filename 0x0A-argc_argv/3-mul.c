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
if (argc > 0)
{
for (i = 0; i < argc; i++)
{
int count = argv[1] * argv[1 + i];
printf("%s\n", argv[count]);
}
}
return (0);
}
