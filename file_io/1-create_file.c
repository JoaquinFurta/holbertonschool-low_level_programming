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
	int o, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
		len = strlen(text_content);

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	write(o, text_content, len);

	if (o == -1)
		return (-1);
	close(o);
	return (1);
}
