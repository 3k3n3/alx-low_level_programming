#include <stdio.h>

/**
 * main - check the code
 * print the alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet ++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}	
