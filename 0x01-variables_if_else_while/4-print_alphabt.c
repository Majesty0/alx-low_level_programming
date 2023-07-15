#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints alphabets in lower case without e and q'
 * Return: always o (success)
 */
int main(void)
{
	int n = 97;

	while
	(n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
