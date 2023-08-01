#include "main.h"

/**
 * _strstr - Function that locates a substring.
 * @needle: char pointer
 * @haystack: char pointer
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	int find;

	for (; haystack[0]; haystack++)
	{
		for (find = 0; haystack[find] == needle[find]; find++)
			;
		if (!(needle[find]))
			return (haystack);
	}
	return (0);
}
