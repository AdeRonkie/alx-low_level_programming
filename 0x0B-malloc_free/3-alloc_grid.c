#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns pointer to a 2D array of integers
 * @width: width of 2d array
 * @height: height of 2d array
 * Return: pointer to the array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(*a) * height);
	if (a == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == 0)
		{
			for (k = 0; k < i; k++)
			{
				free(a[k]);
			}
			free(a);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			a[i][k] = 0;
		}
	}
	return (a);
}
