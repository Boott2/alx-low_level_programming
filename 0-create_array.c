#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: the character
 * Return: returns the pointer
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
