#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments that are passed to it
 * @argc:an input
 * @argv: an input
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}

