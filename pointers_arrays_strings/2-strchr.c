#include "main.h"

/**
 * _strchr - d
 * @s: flex
 * @c: dd
 * Return: f
 */
char *_strchr(char *s, char c)
{
		int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
