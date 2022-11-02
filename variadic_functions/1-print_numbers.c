#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @n: number of intergers
 * @...: variable number of parameters
 * @separator: separetor between integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list n_para;

	va_start(n_para, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(n_para, int));

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(n_para);
}
