#include <stdio.h>
#include <stdlib.h>
#include"main.h"
/**
 * str_concat -  a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the created string
*/
char *str_concat(char *s1, char *s2)
{
	int i, y;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}

	ptr = malloc(sizeof(char) * i + y + 1);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (y = 0; s2[y]; y++)
	{
		ptr[i + y] = s2[y];
	}
	return (ptr);
}
