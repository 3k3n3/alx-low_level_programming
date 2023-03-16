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
	int  sum, i, j;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		if (atoi(arg) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(arg);
	}
	printf("%d\n", sum);

	return (0);
}
