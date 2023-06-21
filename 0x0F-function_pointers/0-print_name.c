#include<stdio.h>
/**
 * print_name - prints a name
 *
 * @name: the name we want to print
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
