#include "main.h"

/**
 * str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL or pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, len12, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	len12 = len1 + len2;
	result = malloc(len12 * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; i++, j++)
		result[i] = s2[j];
	result[i] = '\0';

	return (result);
}
