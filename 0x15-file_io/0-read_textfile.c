#include "holberton.h"
#include <unistd.h> 
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - converts a binary number to unsigned int
 * @filename: pointer to string
 * @letters: string containing the binary number
 * Return: the converted number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int count, fd;
char buf[1024];
fd = open(filename, 0_RDWR);
if (filename == -1 || filename == NULL)
{
return (0);
}
while (letter != '\0')
{
count++;
letter++;
}
read(fd, buf , count);
}
