#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - generates a password 
 *
 * Return: 0 on success
 */
int main(void)
{
	char password[100];
	int randNum, num, i;

	num = 0;
	i = 0;
	srand(time(NULL));
	while (num < 2645)
	{
		randNum = random() % 127;
		if (randNum > 32)
		{
			password[i++] = randNum;
			num += randNum;
		}
	}
	password[i++] = (2772 - num);
	password[i] = '\0';
	printf("%s", password);

	return (0);
}
