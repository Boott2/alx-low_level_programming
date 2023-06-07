#include"main.h"
/**
 * checker - to check the natural root
 * @a: int
 * @b: also an int
 * Return: also also an int
 */
int checker(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a * a > b)
	{
		return (-1);
	}
	return (checker(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input paramter
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (checker(1, n));
	}
}
