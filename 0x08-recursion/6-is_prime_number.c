#include"main.h"
/**
 * checker - checks if a number is prime or not
 * @a: input parameter
 * @b: input parameter
 * Return: int
 */
int checker(int a, int b)
{
	if (b < 2 || a % b == 0)
	{
		return (0);
	}
	else if (a > b / 2)
	{
		return (1);
	}
	else
	{
		return (checker(a + 1, b));
	}
}


/**
 * is_prime_number - returns 1 if prime, otherwise 0
 * @n: input parameter
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (0);
	}
	else
	{
		return (checker(2, n));
	}
}
