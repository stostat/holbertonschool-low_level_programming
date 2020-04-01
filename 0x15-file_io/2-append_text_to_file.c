#include "holberton.h"
/**
  * append_text_to_file - appends at the end of text
  * @filename: char
  * @text_content: text to be appended
  * Return: int
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ap, i;

	if (!filename)
		return (-1);
	if (!text_content)
	return (1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	for (i = 1; text_content[i]; i++)
		;
	ap = write(fd, text_content, i);
	close(fd);
	if (ap == -1)
		return (-1);
	return (1);
}

