#include "main.h"

/**
 * main - displays the information contained in the ELF header at
 * the start of an ELF file.
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
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
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

/**
 * print_magic - prints the magic number
 * @e_ident: array contain the file magic number
 * Return: no return
 */

void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - prints the class of file
 * @e_ident: array of bytes specifies how to interpret
 * the file
 * Return: no return
 */

void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - print the data of file
 * @e_ident: array of bytes specifies how to interpret
 * the file
 * Return: no return
 */

void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("Unknow data format\n");
			break;
		case ELFDATA2LSB:
			printf("Two's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("Two_s complement, big-endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * print_version - print the version number of the file
 * @e_ident: array of bytes specifies how to interpret
 * the file
 * Return: return nothing
 */

void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d ", e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("(current)\n");
			break;
		case EV_NONE:
			printf("(invalid)\n");
			break;
	}
}
