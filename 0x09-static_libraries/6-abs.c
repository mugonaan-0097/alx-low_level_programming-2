#include "main.h"

/**
 * _abs -valor absolute 
 *
 * @n: int is the variable for the program
 * Return: Always 0 (success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
