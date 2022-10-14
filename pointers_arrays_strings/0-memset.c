#include "main.h"
/**
 * _memset - dd
 * @s: ed
 * @b: sed
 * @n: dd
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
