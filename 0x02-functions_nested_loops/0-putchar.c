#include "main.h"

/**
*main - function prints _putchar, followed by a new line
*
*Return: Always return 0
*/
int main(void)
{
	char school[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(school[i]);
	}
	_putchar(10);
	return (0);
}
