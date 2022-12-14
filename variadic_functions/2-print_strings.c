#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print numbers
 * @n: number of strings to be printed
 * @...: variable number of strngs
 * @separator: separetor between strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list n_para;

	va_start(n_para, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(n_para, char *);
		if (str == NULL)
			printf("(nil)");
		else

			printf("%s", str);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(n_para);
}
