#include "main.h"

/**
  * print_error_exit - -----
  * @display:  ---
  * Return: void
  */

void print_error_exit(const char *display)
{
	char err_display[MAX_ERR_DISPLAY];

	snprintf(err_display, sizeof(err_display), "Error: %s\n", display);
	fprintf(stderr, "%s", err_display);
	exit(98);
}

/**
  * print_elf_header_info - ---
  * @header: ---
  * Return: 0
  */

void print_elf_header_info(Elf64_Ehdr *header)
{
	int a;

	printf("Magic: ");
	for (a = 0; a < EI_NIDENT; a++)
	{
		printf("%02x ", header->e_ident[a]);
	}
	printf("\n");

	printf("Class: %s\n",
			(header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" :
			(header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF32" : "Unknown");
	printf("Data: %s\n",
			(header->e_ident[EI_DATA] == ELFDATA2LSB)
			? "2's complement, little endian"
			: "2's complement, big endian");
	printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header->e_type);
	printf("Entry point address: 0x%lx\n", header->e_entry);
}

/**
  * main - ---
  * @argc: ---
  * @argv: ---
  * Return: 0
  */

int main(int argc, char *argv[])
{
	char err_open[] = "Unable to open file\n";
	char err_read[] = "Unable to read ELF header\n";
	char err_usage[] = "Usage: elf_header elf_filename\n";
	char err_not_elf[] = "Not an ELF file\n";
	Elf64_Ehdr elf_header;

	const char *elf_fileName;
	int fd;

	if (argc != 2)
	{
		print_error_exit(err_usage);
	}

	elf_fileName = argv[1];
	fd = open(elf_fileName, O_RDONLY);

	if (fd == -1)
		print_error_exit(err_open);

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		print_error_exit(err_read);
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error_exit(err_not_elf);
	}

	print_elf_header_info(&elf_header);

	close(fd);
	return (0);
}
