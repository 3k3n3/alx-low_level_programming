#include <stdio.h>
#include "main.h"

/**
 * main - print program name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
