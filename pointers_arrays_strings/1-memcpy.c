 #include "main.h"

/**
 * _memcpy - ds
 * @dest: xd
 * @src: xd
 * @n: ff
 * Return:d
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

