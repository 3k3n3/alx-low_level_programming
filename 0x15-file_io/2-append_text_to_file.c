#include "main.h"


/**
 * append_text_to_file - appends text to end of file
 * @filename: file name
 * @text_content: text to append
 *
 * Return: 1 if success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
	int i = 0;
	int bytes_w;

	if (filename == NULL)
		return (-1);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		bytes_w = write(fd, text_content, i);

		if (bytes_w == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

