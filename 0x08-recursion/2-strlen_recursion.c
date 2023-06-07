#include"main.h"
#include<stdio.h>

/**
 * _strlen_recursion - prints the lenght of the string
 * @s: the inputted string
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
return (i);
}
