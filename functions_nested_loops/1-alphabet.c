#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: Always 0 (Success)
 * print_alphabet - xd
 */

int print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)

		putchar(i);
	putchar('\n');
	return (0);
}
