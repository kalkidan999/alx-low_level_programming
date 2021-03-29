#include "holberton.h"
/**
 * read_textfile - converts a binary number to unsigned int
 * @filename: pointer to string
 * @letters: string containing the binary number
 * Return: the converted number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t letterstwo;
int fd;
char *text;
if (!filename)
return (0);
text = malloc(sizeof(char) * letters + 1);
if (text == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(text);
return (0);
}
letterstwo = read(fd, text, sizeof(char) * letters);
if (letterstwo == -1)
{
free(text);
return (0);
}
letterstwo = write(STDOUT_FILENO, text, letterstwo);
if (letterstwo == -1)
{
free(text);
close(fd);
return (0);
}
free(text);
close(fd);
return (letterstwo);
}
