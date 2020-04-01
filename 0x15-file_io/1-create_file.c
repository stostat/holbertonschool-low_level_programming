#include "holberton.h"

/**
  * create_file - creates a file
  * @filename: char
  * @text_content: char
  * Return: int
  */

int create_file(const char *filename, char *text_content)
{
	int fd, i, w;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (i = 1; text_content[i]; i++)
			;
		w = write(fd, text_content, i);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

