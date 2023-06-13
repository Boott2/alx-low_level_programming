#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * @width: the width
 * @height: the height
 * Return: a pointer
*/
int **alloc_grid(int width, int height)
{
	int i, y;
	int **ptr;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(ptr[i]);
			}
			free(ptr);

			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
		{
			ptr[i][y] = 0;
		}
	}
	return (ptr);
}
