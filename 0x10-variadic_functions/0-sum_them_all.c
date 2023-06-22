#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * sum_them_all - calculates the sum of the arguments
 * @n: number of arguments
 * Return: returns the sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	va_end(args);
	return (sum);
}
