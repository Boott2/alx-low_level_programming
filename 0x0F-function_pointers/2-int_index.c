#include<stdio.h>
#include"function_pointers.h"
/**
 * int_index - searches for a function
 * @size: number of the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * @array: the inputted array
 * Return: the index of the first element which is an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
		return (i);
		}
	}
	return (-1);
}
