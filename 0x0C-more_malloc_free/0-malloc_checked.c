#include<stdio.h>
#include<stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the element
 * Return: a pointer
*/
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
		free(ptr);
}
