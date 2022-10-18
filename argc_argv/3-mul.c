#include <stdio.h>
#include <stdlib.h>
/**
 * main - dsds
 * @argc: ds
 * @argv: fd
 * Return: ddd
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
