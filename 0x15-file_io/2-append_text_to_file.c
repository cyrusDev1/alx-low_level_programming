#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file name
 * @text_content: new content
 * Return: return 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, fd, input;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
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
