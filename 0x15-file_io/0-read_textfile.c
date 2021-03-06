#include "holberton.h"

/**
  * read_textfile - reads a file and prints it in stdout
  * @filename: char
  * @letters: int
  * Return: int
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fdr;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof(char));
	fdr = read(fd, buf, letters);
	buf[letters] = '\0';
	write(STDOUT_FILENO, buf, fdr);
	close(fd);
	free(buf);
	return (fdr);
}
