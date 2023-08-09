#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocates grid
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int a, b = 0;
	int **ptr;

	if (height <= 0 || width <= 0)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(ptr));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(width * sizeof(int));
		if (ptr[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(ptr[b]);
				free(ptr);
				return (NULL);
			}
		}
		for (b = 0; b < width; b++)
			ptr[a][b] = 0;
	}
	return (ptr);
}
