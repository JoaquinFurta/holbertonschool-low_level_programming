#include "main.h"
/**
 * alloc_grid - return a 2 dimensional array of integers
 * @height: height of the array
 * @width: width of the array
 * Return: Returns NULL if it fails, Returns a a pointer if succeds
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(*p) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
			if (p[i] == NULL)
			{
				for (; i >= 0; i--)
					free(p[i]);
				free(p);
				return (NULL);
			}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
