#include "main.h"

/**
 * read_textfile - read a text file and print to standard output
 * @filename: file name
 * @letters: number of letters to print
 *
 * Return: number of letters printed else 0 if error or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = fopen(filename, "r");
	char *buffer = (char *) malloc(letters);
	ssize_t bytes_r = fread(buffer, 1, letters, fp);
	ssize_t bytes_w = write(STDOUT_FILENO, buffer, bytes_r);

	if (filename == NULL)
		return (0);

	if (fp == NULL)
		return (0);

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	if (bytes_r == 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	if (bytes_w != bytes_r)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	fclose(fp);
	free(buffer);
	return (bytes_w);
}

