#include "main.h"

/**
 * main - check the code
 * print the alphabet in lower case 10 times
 * Return: Always 0
 */
int main(void)
{
	int alphabet;
	int times;

	for (times = 1 ; times <= 10 ; times++)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			putchar(alphabet);
		}
		putchar('\n');
	}

	return (0);
}
