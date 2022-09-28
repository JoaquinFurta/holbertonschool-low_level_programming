#include <stdlib.h>
#include <time.h>

/**
 * main - xd
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		puts("is negative");
	else if (n > 0)
		puts("is positive");
	else
		puts("is zero");
	return (0);
}
