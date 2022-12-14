#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives.
 * @argc: Count argument
 * @argv: Argument
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	/*Declearing Variables*/
	int count = 0;

	if (argc > 0)
	{
	/*WHILE - print each argument*/
	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	}
	return (0);
}
