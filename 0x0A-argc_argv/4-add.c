#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * main - additions numbers
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, y, result = 0;
	char *F;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		y = strtol(argv[i], &F, 10);
		if (*F)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			result += y;
		}
	}
	printf("%d\n", result);
	return (0);
}
