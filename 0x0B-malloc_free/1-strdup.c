#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * _strdup - returns a pointer to a copy of a str
 * @str: the string we want to copy
 * Return: a pointer to a string
*/
char *_strdup(char *str)
{
	int i = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}

	ptr = malloc((sizeof(char) * i + 1));

	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
