#include<stdlib.h>
#include<stdio.h>
#include<strings.h>
#include"main.h"
/**
 * main - multiplies 2 arguments
 * @argc: number of args
 * @argv: the string args
 * Return: lalways 0
*/
int main(int argc, char *argv[])
{
	int result = 1;
	int i;

	if ((argc > 3) || (argc == 1))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			int x = strtol(argv[i], NULL, 10);

			result = result * x;
		}
		printf("%d\n", result);
		return (0);
	}
}
