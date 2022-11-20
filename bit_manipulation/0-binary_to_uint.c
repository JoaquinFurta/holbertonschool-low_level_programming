#include "main.h"

/**
  * binary_to_uint - Converts a binary number to an unsigned int
  * @b: The binary string to converts
  *
  * Return: The positive number converted from a binary
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, cont = 0, num = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			num += 1 << cont;

		cont++;
	}

	return (num);
}
