#include "main.h"

/**
 * _memset - Main entry point
 * @s: pointer
 * @b: char
 * @n: unsigned int
 *
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n -= 1;
	}
	return (s);
}
