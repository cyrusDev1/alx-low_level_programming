#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arg
 * @argv: array of arguments
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int fd_read, fd_write, res_read, res_write;
	char *buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_read = open(argv[1], O_RDONLY);
	if (fd_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		res_read = read(fd_read, buffer, BUFSIZ);
		if (res_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		res_write = write(fd_write, buffer, res_read);
		if (res_write != res_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}	while (res_write == BUFSIZ);

	if (close(fd_read) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		close(fd_write);
		exit(100);
	}
	if (close(fd_write) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}

	return (0);
}
