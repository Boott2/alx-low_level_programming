#include<stdio.h>
#include<stdarg.h>
/**
 * print_numbers -  prints numbers, followed by a new line.
 * @n: number of arguments
 * @separator: separator between arguments
 * Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if ((i != (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
