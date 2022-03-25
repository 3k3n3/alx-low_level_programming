#include "main.h"

/**
 * leet - encode to 1337
 * @str: string
 * Return: leet str
 */
char *leet(char *str)
{
	int i, j;

	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if (str[i] == arr1[j])
				str[i] = arr2[j];
		}
	}
	return (str);
}
