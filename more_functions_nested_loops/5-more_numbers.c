#include "main.h"
/**
 * more_numbers - xd
 */
void more_numbers(void)
{
	int z;
	int i;

	for (z = 1 ; z <= 10; z++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 != 0)
				_putchar(i + '0');
			_putchar(i % 10 + '0');
		}
	_putchar('\n');
	}
}
