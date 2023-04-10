#include "main.h"

/**
 * create_file - create file
 * @filename: filename
 * @text_content: content of new file
 *
 * Return: 1 if success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	int i = 0;
	int rd;

	if (filename == NULL)
		return (-1);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		rd = write(fd, text_content, i);
		if (rd == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

