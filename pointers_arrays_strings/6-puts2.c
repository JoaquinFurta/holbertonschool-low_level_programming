#include "main.h"
/**
 * _puts2 - xd
 * @stri : des
 */
void _puts2(char *stri)
{
	int i;

	for (i = 0 ; stri[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(stri[i]);
	}
	_putchar('\n');
}
