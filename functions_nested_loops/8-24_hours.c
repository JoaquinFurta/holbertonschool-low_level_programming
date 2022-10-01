#include "main.h"

/**
 * jack_bauer - xd
 * Return: 0,
 */
int jack_bauer(void)
{
	int m;
	int x;
	int z;
	int h;

	for (z = '0'; z <= '2'; z++)
	{
		if (z == '2')
		{
			for (h = '0'; h <= '3'; h++)
			{
				for (x = '0'; x <= '5' ; x++)
				{

					for (m = '0'; m <= '9'; m++)
					{
						_putchar(z);
						_putchar(h);
						_putchar(':');
						_putchar(x);
						_putchar(m);
						_putchar('\n');
					}
				}
			}
		}
		else
		{
			for (h = '0'; h <= '9'; h++)
			{
				for (x = '0'; x <= '5' ; x++)
				{
					for (m = '0'; m <= '9'; m++)
					{
						_putchar(z);
						_putchar(h);
						_putchar(':');
						_putchar(x);
						_putchar(m);
						_putchar('\n');
					}
				}
			}
		}
	}
	return (0);
}
