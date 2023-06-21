#include<stdio.h>
#include"function_pointers.h"
/**
 * array_iterator - executes a function given as parameter
 * @array: the inputted array
 * @size: the size of the array
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
