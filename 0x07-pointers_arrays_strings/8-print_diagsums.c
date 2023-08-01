#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - sum diagonal values of a square matrix
 * @a: pointer to array
 * @size: int
 *Return: sum of two diagonals
 */

void print_diagsums(int *a, int size)
{
	int count1, count2, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (count1 = 0; count1 < size; count1++)
	{
		sum1 += a[(size + 1) * count1];
	}
	for (count2 = 0; count2 < size; count2++)
	{
		sum2 += a[(size - 1) * (count2 + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
