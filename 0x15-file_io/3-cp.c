#include "holberton.h"

/**
  * main - function that copies a file
  * @ac; number of arguments
  * @av: arguments
  * Return: int
  */

int main(int ac, char **av)
{
	int ff, ft, rd, wt, cl;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	ff = open(av[1], O_RDONLY);
	if (ff == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file%s", av[1]), exit(98);
	ft = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((rd = read(ff, buf, 1024)) > 0)
	{
		wt = write(ft, buf, rd);
		if (wt == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to%s\n", av[2]), exit(99);
	}
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file%s", av[1]), exit(98);
	cl = close(ff);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n",
		cl), exit(100);
	cl = close(ft);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n",
		cl), exit(100);
	return (0);
}
