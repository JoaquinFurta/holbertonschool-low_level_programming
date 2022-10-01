#include "main.h"

/**
 * print_to_98 - xd
 * Return: 0
 * @n: xd
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n ; n >= 98; n--)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d ", n);
		}
	}
	else
	{
		for (n ; n <= 98; n++)
			if (n == 98)
				printf("%d", n);
			else
				printf("%d ", n);
	}
	printf("\n")
}
