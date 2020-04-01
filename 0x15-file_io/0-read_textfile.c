#include "holberton.h"

/**
  * read_textfile - reads a file and prints it in stdout
  * @filename: char
  * @letters: int
  * Return: int
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fdr;
	char buf[letters];

	if (!filename)
		return (0);
	fd = open(filename, 0);
	if (fd == -1)
		return (0);
	fdr = read(fd, buf, letters);
	buf[letters] = '\0';
	write(STDOUT_FILENO, buf, fdr);
	close(fd);
	return (fdr);
}
