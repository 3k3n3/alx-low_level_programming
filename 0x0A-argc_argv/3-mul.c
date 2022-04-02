#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the multiplication of two args numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1, success or error
 */
int main(int argc, char *argv[])
{
	int b = 0, c = 0;

	if (argc == 3)
	{
		b = atoi(argv[1]);
		c = atoi(argv[2]);
		printf("%d\n", b * c);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
