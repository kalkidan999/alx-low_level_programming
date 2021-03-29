#include "holberton.h"
/**
 * _strlen - check the code for Holberton School students.
 * @s: integer1
 * Return: Always 0.
 */
int _strlen(char *s)
{
int count = 0;
while (s[count])
{
count++;
}
return (count);
}
/**
 * append_text_to_file - append a file usong creat()
 * @filename: pointer to string
 * @text_content: is a NULL terminated string to write to the file
 * Return: the converted number
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t letterstwo;
int fd;
if (!filename)
return (1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}
if (text_content)
{
letterstwo = write(fd, text_content, _strlen(text_content));
if (letterstwo == -1)
{
close(fd);
return (-1);
}
}
if (text_content == NULL)
text_content = "";
close(fd);
return (1);
}
