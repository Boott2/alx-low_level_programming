#include"main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the input number
 *
 * Return: nothing
*/

void print_binary(unsigned long int n)
{
	unsigned long int current;
	int x, c = 0;

	for (x = 63; x >= 0; x--)
	{
		current = n >> x;

		if (current & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
		{
			_putchar('0');
		}
	}
	if (!c)
	{
		_putchar('0');
	}
}
