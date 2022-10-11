#include "main.h"
/**
 * print_array - xd
 * @a : des
 * @n : dgt
 */
void print_array(int *a, int n)
{
	int i;
	n--;
	for (i = 0 ; i <= n; i++)
		if (i == n)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
}
