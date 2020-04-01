#include "holberton.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ap;
	mode_t mode = 

	if (!filename)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_RDWR | O_APPEND, )
}

