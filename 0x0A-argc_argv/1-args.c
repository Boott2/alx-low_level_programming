#include<stdio.h>
#include"main.h"
/**
 * main - prints the number of arguments
 * @argc: the number of arguments
 * @argv: the string arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
