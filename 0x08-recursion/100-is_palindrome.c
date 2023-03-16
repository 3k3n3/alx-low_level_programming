#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * is_palindrome - check if string is palindrome
 * @s: string
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = _strlen_recursion(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, index));
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: string
 * @len: length of s.
 * @index: index of the string to be checked.
 *
 * Return: 1 if string is palindrome else 0
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));
	return (0);
}
