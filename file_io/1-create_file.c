#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: ...
 * @text_content: text to write in the file
 *
 * Return: (1) on success or (-1) in failiure
 */

int create_file(const char *filename, char *text_content)
{
	int o;

	if (!filename)
		return (-1);

	o = open(filename, O_CREAT, O_WRONLY, 0600);
	write(o, text_content, strlen(text_content));

	if (o == -1)
		return (-1);
	close(o);
	return (1);
}

