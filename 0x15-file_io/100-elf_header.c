#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

void check_elf(unsigned char *e_ident);
void close_elf(int elf);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abiversion(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);

/**
 * check_elf - checks if is ELF file
 * @e_ident: array contain the file magic number
 * Return: no return
 */

void check_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
			e_ident[i] != 'E' &&
			e_ident[i] != 'L' &&
			e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
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

/**
 * print_osabi - identifies the operating system and
 * ABI to which the object is targeted
 * @e_ident: array of bytes specifies how to interpret
 * the file
 * Return: return nothing
 */

void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreBSD\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		default:
			printf("<unknown %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * abiversion - identifies the version of the ABI to
 * which the object is targeted
 * @e_ident:  array of bytes specifies how to interpret
 * the file
 * Return: return nothing
 */

void print_abiversion(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
		 e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints type of file
 * @e_type: this member of the structure identifies
 * the object file type
 * @e_ident: array of bytes
 * Return: nothing
 */

void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocutable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - print the entry point address
 * @e_entry: This member gives the virtual address
 * to which the system first transfers control, thus
 * starting the process
 * @e_ident: array of bytes
 * Return: nothing
 */

void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
				((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

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
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abiversion(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);
	free(header);
	close_elf(fd_open);
	return (0);
}
