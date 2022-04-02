#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments 
 * @argc: argument count
 * @argv: argument vector⁫
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
