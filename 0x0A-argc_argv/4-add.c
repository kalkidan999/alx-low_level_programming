#include <stdio.h>
#include <stdlib.h>

int checkString(char *Str)
{
    char *ptr = Str;

    while( *ptr )
    {
                if( ! (*ptr >= 0x30 && *ptr <= 0x39 ) )
        {
            return 0;
        }
        ptr++;
    }

    return 1;
}
/**
 * main - check the code for Holberton School students.
 *@argc: character count
 *@argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int results, i;
	results = 0;
	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		if (checkString(argv[i]))
		{
			results += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", results);
	return (0);
}
