#include <elf.h>
#include "main.h"

/**
 * main - program entry
 * @argc: argument count
 * @argv: argument parameters
 */

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]); return (98);

	if ((fd = open(argv[1], O_RDONLY)) < 0)
		perror("open"); return (98);

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		fprintf(stderr, "%s is not an ELF file\n", argv[1]); return (98);

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
		fprintf(stderr, "%s is not an ELF file\n", argv[1]); return (98);

	printf("ELF Header: \n");

	printf(" Magic:  %02x %02x %02x %02x\n", elf_header.e_ident[EI_MAG0],
			elf_header.e_ident[EI_MAG1], elf_header.e_ident[EI_MAG2],
			elf_header.e_ident[EI_MAG3]);

	printf(" Class:                   %d\n", elf_header.e_ident[EI_CLASS]);
	printf(" Data:                    %d\n", elf_header.e_ident[EI_DATA]);
	printf(" Version:                 %d\n", elf_header.e_ident[EI_VERSION]);
	printf(" OS/ABI:                  %d\n", elf_header.e_ident[EI_OSABI]);
	printf(" ABI Version:             %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf(" Type:                    %d\n", elf_header.e_type);
	printf(" Entry point address:     %d\n", elf_header.e_entry);

	return (0);
}
