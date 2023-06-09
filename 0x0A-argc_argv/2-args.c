#include<stdio.h>
#include"main.h"
/**
 * main - prints the string arguments
 * @argc: the number of arguments
 * @argv: the string's argument
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
