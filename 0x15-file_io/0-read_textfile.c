#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be readed
 * @letters: size of letters
 * Return: numbers of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nread, out;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	nread = read(fd, buffer, letters);
	if (nread == -1)
	{
		free(buffer);
		return (0);
	}
	buffer[nread] = '\0';
	close(fd);

	out = write(STDOUT_FILENO, buffer, nread);
	if (out == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (out);
}
