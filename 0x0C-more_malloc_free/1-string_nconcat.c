#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1 : first string
 * @s2 : second string
 * @n : the number of characters we want to concatenate
 * Return: a pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0, i = 0, y = 0;

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}
	if (n < len2)
	{
		ptr = malloc(sizeof(int) * (len1 + n + 1));
	}
	else
	{
		ptr = malloc(sizeof(int) * (len1 + len2 + 1));
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
	{
		ptr[i++] = s2[y++];
	}
	while (n >= len2 && i < (len1 + len2))
	{
		ptr[i++] = s2[y++];
	}
	ptr[i] = '\0';
	return (ptr);
}
