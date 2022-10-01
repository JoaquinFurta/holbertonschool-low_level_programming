#include "main.h"

/**
 * jack_bauer - xd
 * Return: 0,
 */
int jack_bauer(void)
{
	int m;
	int M;
	int H;
	int h;

	for (H = '0'; H <= '2'; H++)
	{
		if (H == '2')
		{
			for (h = '0'; h <= '3'; h++)
			{
				for (M = '0'; M <= '5' ; m++)
				{

					for (m = '0'; m <= '9'; m++)
					{
						_putchar(H);
						_putchar(h);
						_putchar(':');
						_putchar(M);
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
				for (M = '0'; M <= '5' ; m++)
				{
					for (m = '0'; m <= '9'; m++)
					{
						_putchar(H);
						_putchar(h);
						_putchar(':');
						_putchar(M);
						_putchar(m);
						_putchar('\n');
					}
				}
			}
		}
	}
	return (0);
}
