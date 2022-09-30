#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -  program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int mul = 1;

	if (argc == 3)
	{
		mul *= atoi(argv[argc - 2]);
		mul *= atoi(argv[argc - 1]);
		printf("%d\n", mul);
	}
	else
	printf("Error\n");
	return (0);
}
