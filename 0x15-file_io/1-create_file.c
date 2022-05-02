#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of file
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, input, fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		input = write(fd, text_content, i);
		if (input != i)
			return (-1);
	}
	close(fd);
	return (1);
}
