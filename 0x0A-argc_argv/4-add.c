#include "main.h"


/**
 * main - Entry point for sum function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0, success
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
