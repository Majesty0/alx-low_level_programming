#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * are identical, else returns 0.
 * @s1: string to be compared to
 * @s2: string with wild character lol
 *
 * Return: On success 1, then 0 on error
 * errno is set appropriately.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
	{
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
			return (0);
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}

	return (0);
}
