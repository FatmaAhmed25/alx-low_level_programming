#include "main.h"

/**
 * factorial - gets factorial of n
 * @n: integer
 *
 * Return: factorial of the number.
 * On error, -1 is returned.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
