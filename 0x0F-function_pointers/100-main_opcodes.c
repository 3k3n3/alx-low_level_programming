#include "function_pointers.h"

/**
 * print_opcodes - print opcodes
 * @start: pointer to start of code block
 * @num_bytes: num of bytes
 *
 * Return: void
 */
void print_opcodes(unsigned char *start, int num_bytes)
{
	int i;

	/*printf("Opcodes of main function:\n");*/
	for (i = 0; i < num_bytes; i++)
		printf("%02x ", start[i]);
	printf("\n");
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes;

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	/*Get the starting address of the main function*/
	unsigned char *start = (unsigned char *) &main;

	/*Print the opcodes*/
	print_opcodes(start, num_bytes);

	return (0);
}

