#include <stdio.h>
#include <stdlib.h>
/**
 * main - dsds
 * @argc: ds
 * @argv: fd
 * Return: ddd
 */
int main(int argc, char *argv[])
{
	int resultado = 0, i, x;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{

			if (argv[i][x] < 48 || argv[i][x] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		resultado = atoi(argv[i]) + resultado;
	}
	printf("%d\n", resultado);
	return (0);
}
