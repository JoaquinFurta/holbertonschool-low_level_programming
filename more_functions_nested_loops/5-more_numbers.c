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
		for (i = '0'; i <= '9'; i++)
			_putchar(i);
		for (i = '0'; i <= '4'; i++)
		{
			_putchar('1');
			_putchar(i);
		}
		_putchar('\n');
	}
}
