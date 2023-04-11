#include "main.h"

/**
 * print_error - prints error
 * @message: message
 * @exit_code: exit code
 *
 * Return: void
 */
void print_error(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(exit_code);
}

/**
 * main - Entry point, copies one file to another
 * @ac: args count
 * @av: args vector
 *
 * Return: Always 0, success
 */
int main(int ac, char **av)
{
	char *file_from = av[1];
	char *file_to = av[2];

	int fd_from = open(file_from, O_RDONLY);
	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	char buf[BUF_SIZE];
	int bytes_read, bytes_written;

	if (ac != 3)
		print_error("Usage: cp file_from file_to", 97);

	if (fd_from == -1)
		print_error(strerror(errno), 98);

	if (fd_to == -1)
		print_error(strerror(errno), 99);

	while ((bytes_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written != bytes_read)
			print_error(strerror(errno), 99);
	}

	if (bytes_read == -1)
		print_error(strerror(errno), 98);

	if (close(fd_from) == -1)
		print_error(strerror(errno), 100);

	if (close(fd_to) == -1)
		print_error(strerror(errno), 100);

	return (0);
}

