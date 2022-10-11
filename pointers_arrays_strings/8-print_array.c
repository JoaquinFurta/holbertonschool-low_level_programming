#include "main.h"
/**
 * print_array - xd
 * @a : des
 * @n : dgt
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 0)
		printf("\n");
	for (i = 0 ; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
