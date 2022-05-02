#include "main.h"

/**
 * main - displays the information contained in the ELF header at the start of an ELF file.
 * @argc: number of arguments
 * @argv: array
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int fd_open, fd_read;
	Elf64_Ehdr *header;

	fd_open = open(argv[1], O_RDONLY);
	if (fd_open < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header  = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(fd_open);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	fd_read = read(fd_open, header, sizeof(Elf64_Ehdr));
	if (fd_read < 0)
	{
		free(header);
		close_elf(fd_open);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	return (0);
}

/**
 * check_elf - checks if is ELF file
 * @e_ident: array contain the file magic number
 * Return: no return
 */

void check_elf(unsigned char *e_ident)
{

	if (e_ident[0] == 127 &&
		e_ident[1] == 'E' &&
		e_ident[2] == 'L' &&
		e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}

/**
 * close_elf - closes an elf file
 * @elf: file descriptor
 * Return: no return
 */

void close_elf(int elf)
{
	if (close(elf) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
