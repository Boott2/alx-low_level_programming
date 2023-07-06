#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *
 * @n: the first number
 * @m: the second number
 * Return: the number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int current;
	unsigned long int exclusive = n ^ m;
	int a, count = 0;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
		{
			count++;
		}
	}
	return (count);
}
