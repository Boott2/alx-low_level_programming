#include<stdio.h>
/**
 * print_name - prints a name
 * @f: pointer to a function
 * @name: the name we want to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
