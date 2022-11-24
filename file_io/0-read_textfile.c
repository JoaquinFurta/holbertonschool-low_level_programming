#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it in standar output
 *
 * @filename: ...
 * @letters: number of letteres it should read and print
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, o;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	fd = read(o, buffer, letters);
	write(1, buffer, fd);

	free(buffer);

	if (fd == -1)
		return (0);
	close(o);
	return (fd);
}

