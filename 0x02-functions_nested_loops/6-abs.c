#include "main.h"

/**
 *_abs - computes absolute number of an imteger
 *@c: The number to be computed
 * Return: Always 0.
 */
int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
