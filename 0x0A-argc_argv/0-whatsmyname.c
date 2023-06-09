#include<stdio.h>

/**
 * main - prints the program's name
 * @argc: the string's count
 * @argv: the string's argument
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
