#include <stdio.h>

/**
 * _putchar - writes character c tp stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 should be returned while errno is set appropriately
 */
int _putchar(char c);
{
	return (write(1, &c, 1));
}
