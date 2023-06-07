#include"main.h"
#include<stdio.h>
/**
 * factorial - returns the factorial of a given number
 * @n : inputted number
 * Return: factorial of n
 */
int factorial(int n)
{
	int i = 0;

	if (n == 0)
	{
		i = 1;
	}
	else if (n < 0)
	{
		i = -1;
	}
	else
	{
		i = (n * factorial(n - 1));
	}
	return (i);
}
