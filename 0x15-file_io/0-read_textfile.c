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
size_t read_textfile(const char *filename, size_t letters)
{
int count, fd;
fd = open(filename, O_RDWR);
if (*fd = -1 || *fd == NULL)
{
return (0);
}
while (letters != '\0')
{
count++;
letters++;
}
read(fd, filename , count);
close(fd);
return (0);
}
