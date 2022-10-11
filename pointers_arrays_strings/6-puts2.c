#include "main.h"
/**
 * _puts2 - xd
 * @str : des
 */
void _puts2(char *stri)
{
	int i;

	for (i = 0 ; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
