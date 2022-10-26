#include <stdio.h>

/**
 * main - print name of file it was compiled from
 * Return: int
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (1);
}
