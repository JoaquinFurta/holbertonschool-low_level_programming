#include "main.h"
/**
 * print_array - xd
 * @a : des
 * @n : dgt
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; a[i] != a[n]; i++)
		if (i == n)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
}
