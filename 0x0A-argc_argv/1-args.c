#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *@argc: character count
 *@argv: array
 * Return: Always 0.
 */
int main (int argc, char *argv[])
{
  int count;
  if (argc >= 0)
    {
      for (count = 0; count < argc; count++)
	{
	  printf("%d %s\n", count, argv[argc]);
	}
  }

  return 0;
}
