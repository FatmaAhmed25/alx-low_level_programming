#include "main.h"
/**
 * _strchr - function that locates a character in a string
 *@s: first param
 *@c: second param
 *
 * Return: a pointer to the first occurrence of c
 *
 */
char *_strchr(char *s, char c)
{i

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
