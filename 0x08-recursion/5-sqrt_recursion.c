#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Integer
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @a: Integer
 * @b: Integer
 *
 * Return: square root
 */
int actualsqrt(int x, int y)
{
        if (y * y == x)
                return (b);
        else if (y * y > x)
                return (-1);
        return (sqrt2(x, y + 1));
}
