#include "main.h"

/**
 * _strspn - fsdfds
 * @s: fdfd
 * @accept: dd
 * Return: d
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i = 0;

	while ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				bytes++;
		}

		s++;
	}

	return (bytes);
}
