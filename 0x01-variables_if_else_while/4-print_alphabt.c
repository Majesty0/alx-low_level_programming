#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints alphabets except e and q'
 * Return: always 0 (success)
 */
int main(void)
{
	char except;

	for (except = 'a' ; except <= 'z' ; ++except)
	{
		if
		(except != 'q' && except != 'e');
		{
		putchar(except);
		}
	}
	putchar('\n');
	return (0);
}
