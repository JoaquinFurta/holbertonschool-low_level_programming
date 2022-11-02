#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - reurns the additions of all its parameteres
 * @n: number of paramters
 * @...: variable number of parameters
 * Return: addiion
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, suma = 0;
	va_list n_para;

	va_start(n_para,n);

	for (i = 0; i < n; i++)
		suma = va_arg(n_para,int) + suma;

	va_end(n_para);

	return (suma);
}
