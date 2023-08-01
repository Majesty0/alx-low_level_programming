#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: char pointer
 * @accept: char pointer
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int fix;

	for (; *s != '\0'; s++)
	{
		for (fix = 0; accept[fix] != '\0'; fix++)
		{

			if (*s == accept[fix])
				return (s);
		}
	}
	return (0);
}
