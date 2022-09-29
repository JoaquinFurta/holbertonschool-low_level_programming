#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - entry point
 * Return: Always 0 (Success)
 */

int print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)

		putchar(i);
	putchar('\n');
	return (0);
}
