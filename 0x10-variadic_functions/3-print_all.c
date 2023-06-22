#include"variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
 * print_all - prints everything
 * @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	char *separator = "";
	unsigned int i = 0;
	char *str;

	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char*);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
						i++;
						continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
